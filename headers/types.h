#ifndef TYPES_H
#define TYPES_H

#include <stdlib.h>
#include <string.h>

typedef struct t_merkle_node {
	unsigned char hash[32];
	struct t_merkle_node *left;
	struct t_merkle_node *right;
	struct t_merkle_node *parent;
} merkle_node;

#endif
