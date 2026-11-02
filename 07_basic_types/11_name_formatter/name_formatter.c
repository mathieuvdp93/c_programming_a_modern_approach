#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void empty_stdin(void);

int main(void) {

  printf("Enter a first and last name: ");
  // to make sure the printf statement without '\n' goes out before the read
  // input call
  fflush(stdout);

  /*
   * scanf solution
  char first_name[20];
  char last_name[20];
scanf(" %19s %19s", first_name, last_name);

empty_stdin();
printf("%s, %c.\n", last_name, first_name[0]);
  */

  char buf[50];
  if (fgets(buf, 50, stdin) == NULL) {
    printf("fgets failed\n");
    exit(1);
  }
  if (strchr(buf, '\n') == NULL) {
    empty_stdin();
  }

  int j = 0;
  int k = 0;
  // the {{0}} creates a zero filled array, if you don't put that there the
  // strings won't be '\0' terminated
  char names_array[2][20] = {{0}};

  // you can use other things then 'i <>= x' to check if the loop can stop!!!!!
  // that fucking genius!!!!!!!! remember this !!!!!!
  for (size_t i = 0; buf[i] != '\0' && j < 2; i++) {
    char c = buf[i];

    if (!isspace(c)) {
      if (k < 19) {
        names_array[j][k++] = c;
      }
    } else if (k > 0) {
      j++;
      k = 0;
    }
  }
  if (j < 2 && k > 0) {
    j++;
  }
  printf("%s %c\n", names_array[1], names_array[0][0]);

  return 0;

  // not needed anymore with loop declaration above
  //_Bool first_name_not_empty = 0;
  // if (buf[i] == '\0') {
  // break;
  //}
  //
  /*
   * first try
if (j == 0 && first_name_not_empty) {
j++;
}
if (!isspace(buf[i])) {
names_array[j][k] = buf[i];
k++;
first_name_not_empty = 1;
} else {
k = 0;
}
  */
}

void empty_stdin(void) {
  int ch;
  while (((ch = getchar()) != '\n') && (ch != EOF)) {
    // just to check if it works, normally you would use an empty loop body
    // here
    printf("%c\n", ch);
  }
}
