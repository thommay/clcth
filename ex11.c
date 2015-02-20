#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = argc;

  while(i > 1) {
    i--;
    printf("arg %d: %s\n",i, argv[i] );
  }

  char *states[] = {"Cali","Ore","Wash","Tex"};

  int num_states = 4;
  i = 0;

  while(i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}

