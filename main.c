#include <stdio.h>
#include "headers/types.h"
#include "headers/header.h"

int main(void)
{
	merkle_node *node_1;
	merkle_node *node_2;
	merkle_node *node_3;

	unsigned char left_1[32];
	unsigned char rigth_1[32];

	unsigned char left_2[32];
	unsigned char rigth_2[32];

	memset(left_1, 1, 32);
	memset(rigth_1, 2, 32);

	memset(left_2, 1, 32);
	memset(rigth_2, 0, 32);

	node_1 = hash_node(left_1, rigth_1);
	node_2 = hash_node(left_2, rigth_2);
	node_3 = hash_node(node_1->hash, node_2->hash);
	if (node_1 && node_2)
	{
		diplay_hash(node_1->hash);
		diplay_hash(node_2->hash);
		diplay_hash(node_3->hash);
		free(node_1);
		free(node_2);
		free(node_3);
	}
	return (0);
}
