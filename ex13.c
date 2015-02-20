#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("ERROR: You need one argument\n");
    return 1;
  }

  char letter = argv[1][0];
  for (int i = 0; argv[1][i] != '\0'; i++, letter = argv[1][i])
  {
    if (letter >= 65 && letter <= 90) { letter += 32; }
    switch (letter) {
      case 'a':
        printf("%d: 'A'\n", i);
        break;
      case 'e':
        printf("%d: 'E'\n", i);
        break;
      case 'i':
        printf("%d: 'I'\n", i);
        break;
      case 'o':
        printf("%d: 'O'\n", i);
        break;
      case 'u':
        printf("%d: 'U'\n", i);
        break;
      case 'y':
        if (i > 2)
        {
          printf("%d: 'Y'\n", i);
          break;
        }
      default:
        printf("%d: %c is not a vowel\n", i, letter);
    }
  }
  return 0;
}