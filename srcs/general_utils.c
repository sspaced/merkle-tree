#include "../headers/header.h"

char *ft_strcat(char *a, char *b)
{
	size_t final_len;
	char *data;

	final_len = strlen(a) + strlen(b);
	data = malloc((sizeof(char) * final_len) + 1);
	if (!data)
	{
		return (NULL);
	}
	strcpy(data, a);
	strcat(data, b);
	return data;
}
