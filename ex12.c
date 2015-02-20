#include <stdio.h>

int main(int argc, char *argv[])
{

  if (argc == 1)
  {
    printf("You only have one arg.\n");
  }
  else if (argc > 1 && argc < 4) 
  {
    for (int i = 1; i < argc; i++)
    {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("You have too many args\n");
  }

  return 0;
}
