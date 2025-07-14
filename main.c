#include <stdio.h>
#include "headers/types.h"
#include "headers/header.h"

int main(void)
{
	merkle_node *node;
	merkle_node local_node;
	init_merkle_node(&local_node);
	node = hash_node("test", "test");
	if (node)
	{
		printf("Hash created successfully\n");
		free(node);
	}
	return (0);
}
