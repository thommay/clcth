#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You're %d miles away\n", distance);
  printf("You've %f levels of power\n", power);
  printf("You've %f super powers\n", super_power);
  printf("I've an initial %c.\n", initial);
  printf("I've a first name %s.\n", first_name);
  printf("I've an surname %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
    initial,  first_name,  last_name);

  return 0;
}
