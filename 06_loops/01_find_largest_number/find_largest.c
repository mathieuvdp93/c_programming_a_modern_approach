#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float validate_user_entry(void);

int main(void) {

  float max = 0;
  float user_number;

  do {
    // used scanf for quick test to see if the rest of the program works
    // printf("Enter a number: ");
    // scanf("%f", &user_number);

    user_number = validate_user_entry();

    if (user_number > max) {
      max = user_number;
    }
  } while (user_number > 0.0f);

  printf("The largest number entered was: %f\n", max);
}

float validate_user_entry(void) {

  // arbitrary magic number
  char buf[100];
  float user_entry_float;
  int success = 0;

  do {

    printf("Enter a number: ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) {
      printf("reading stdin failed\n");
      exit(1);
    }

    if (strchr(buf, '\n') == NULL) {
      printf("entry to long for buffer\n");
      int c;
      while ((c = getchar()) != '\n' && c != EOF) {
        ;
      }
      continue;
    }

    errno = 0;
    char *end_ptr;

    user_entry_float = strtof(buf, &end_ptr);

    if (errno == ERANGE) {
      printf("number not in float range\n");
      success = 0;
    } else if (buf == end_ptr) {
      printf("no conversion happened\n");
      success = 0;
    } else if (*end_ptr != '\0' && *end_ptr != '\n') {
      printf("not all input was converted\n");
      success = 0;
    } else {
      success = 1;
    }
  } while (success == 0);

  return user_entry_float;
}
