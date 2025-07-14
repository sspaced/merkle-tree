#include "../headers/types.h"

void init_merkle_node(merkle_node *node)
{
	memset(node->hash, 0, 32);
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
}
