#include <stdckdint.h>
#include <stdio.h>
// #include <stdlib.h>

void find_max_factorial_short(void);

int main(void) {

  find_max_factorial_short();

  return 0;
}

void find_max_factorial_short() {

  _Bool overflow = 0;
  short tmp_factorial = 1;

  for (int i = 1; !overflow; i++) {
    overflow = ckd_mul(&tmp_factorial, tmp_factorial, i);
    if (overflow) {
      printf("The max value that can be factorialed for short is: %d\n", i);
    }
  }
}
/*
 * userinputversion
int user_integer;
printf("Enter a positive integer: ");
fflush(stdout);

if ((scanf("%d", &user_integer) != 1) || (user_integer < 0)) {
printf("Not a valid entry\n");
return EXIT_FAILURE;
}
*/
