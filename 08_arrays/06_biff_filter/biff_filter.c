#include <ctype.h>
#include <stdio.h>

int main(void) {

  char user_input[81] = {0};

  printf("Enter message: ");
  fflush(stdout);

  scanf("%80[^\n]", user_input);

  for (size_t i = 0; i < sizeof(user_input) / sizeof(user_input[0]); i++) {

    switch (user_input[i]) {
    case 'a':
      printf("4");
      break;
    case 'b':
      printf("8");
      break;
    case 'e':
      printf("3");
      break;
    case 'i':
      printf("1");
      break;
    case 'o':
      printf("0");
      break;
    case 's':
      printf("5");
      break;
    default:
      printf("%c", toupper(user_input[i]));
    }
  }
  printf("!!!!!!!!!!!!!\n");

  return 0;
}
