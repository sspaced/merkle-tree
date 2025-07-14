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
		diplay_hash(node->hash);
		free(node);
	}
	return (0);
}
