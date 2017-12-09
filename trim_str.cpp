#include "stdio.h"
#include  "trim.h"

int main(int argc, char const *argv[])
{
   printf("%d Arguments\n", argc);
   char trimmed[STRLEN] = "no content";
   trim(argv[1], trimmed);

   for (int i = 0; i < argc; i++)
    {
      printf("Argumets # %d %s\n", i, argv[i]);
    }
    printf("trimmed: %s \n", trimmed);
}
