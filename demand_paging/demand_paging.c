#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define ALLOC_SIZE 8000

int main()
{
	printf("%d\n", getpid());
	int *p = malloc(ALLOC_SIZE);
	printf("After malloc\n");
	getchar();

	memset(p, 0xba, ALLOC_SIZE);
	printf("After memset\n");
	getchar();

	printf("%x\n", p[4]);
	free(p);
}
