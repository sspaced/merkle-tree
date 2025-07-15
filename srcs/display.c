#include "../headers/header.h"

void display_hash(unsigned char hash[SHA256_DIGEST_LENGTH])
{
	int i;
	i = 0;

	while (i < SHA256_DIGEST_LENGTH)
	{
		printf("%02x", hash[i]);
		i++;
	}
	printf("\n");
}
