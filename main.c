#include <stdio.h>
#include "headers/types.h"
#include "srcs/init.c"

int main(void)
{
	merkle_node node;
	init_merkle_node(&node);
	printf("Hash : %c\n", node.hash[0]);
	return (0);
}
