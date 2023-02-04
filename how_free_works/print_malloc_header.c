#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FOUR_KB (4*1024)

int main()
{
   int *p = malloc(FOUR_KB);
   int i = 1;
   memset(p, 0, FOUR_KB);
   printf("%lu\n", *(((unsigned long *)p)-1));
   free(p);

   return 0;
}
