#ifndef TYPES_H
#define TYPES_H

#define SHA256_DIGEST_LENGTH 32

typedef struct t_merkle_node {
	unsigned char hash[SHA256_DIGEST_LENGTH];
	struct t_merkle_node *left;
	struct t_merkle_node *right;
	struct t_merkle_node *parent;
} merkle_node;

#endif
