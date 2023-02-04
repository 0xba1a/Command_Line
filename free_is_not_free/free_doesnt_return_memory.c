#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FOUR_KB (4*1024)

int main()
{
   int *p = malloc(FOUR_KB);
   free(p);

   return 0;
}
