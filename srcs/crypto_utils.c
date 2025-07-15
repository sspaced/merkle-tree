#include "../headers/header.h"

merkle_node	*hash_node(unsigned char *left, unsigned char *right)
{
	merkle_node *node;
	unsigned char data[64];

	if (!left || !right)
	{
		return (NULL);
	}

	memcpy(data, left, 32);
	memcpy(data + 32, right, 32);
	node = malloc(sizeof(merkle_node));
	if (!node)
	{
		return (NULL);
	}

	SHA256((const unsigned char *)data, 64, node->hash);
	return (node);
}
