#include "../headers/header.h"

merkle_node	*hash_node(char *left, char *right)
{
	merkle_node *node;
	char *data;

	if (!left || !right)
	{
		return (NULL);
	}

	data = ft_strcat(left, right);
	if (!data)
	{
		return (NULL);
	}

	node = malloc(sizeof(merkle_node));
	if (!node)
	{
		return (NULL);
	}

	SHA256((const unsigned char *)data, strlen(data), node->hash);
	return (node);
}
