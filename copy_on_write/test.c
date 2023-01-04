#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *p = NULL;

int main()
{
   int a = 0;

   p = malloc(1024);

   a = fork();
   printf("%d %lx\n", getpid(), (unsigned long)&p);
   while(1);
   return 0;
}
