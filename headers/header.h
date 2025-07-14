#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>
#include "types.h"

// srcs/init.c
void init_merkle_node(merkle_node *node);

// srcs/crypto_utils.c
merkle_node	*hash_node(char *left, char *right);

// srcs/general_utils.c
char *ft_strcat(char *a, char *b);

#endif
