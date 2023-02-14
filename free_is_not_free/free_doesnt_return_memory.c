#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
   int *p = NULL;
   int size = 0;
   printf("%d\n", getpid());
   scanf("%d", &size);

   p = malloc(size);
   p = malloc(size);
   p = malloc(size);
   p = malloc(size);
   printf("%lu\n", (unsigned long)p);
   scanf("%d", &size);

   free(p);
   printf("After free\n");
   scanf("%d", &size);

   return 0;
}
