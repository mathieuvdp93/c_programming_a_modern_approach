#include <stdio.h>

int main(void) {

  printf("Enter a first and last name: ");
  // to make sure the printf statement without '\n' goes out before the read
  // input call
  fflush(stdout);

  char *first_name;
  char *last_name;

  scanf(" %s %s ", first_name, last_name);

  printf("%s, %c.\n", last_name, first_name[0]);

  return 0;
}
