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
      printf("The max value that can be factorialed for short is: %d\n", i - 1);
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

/*
 * asked claude how to make it so i can pass it types without having to
rewrite the function for everytype, interesting answer, lots of things in
here i don't fully know or understand yet. found the float_mul_overflow
check very interesting
 * #include <stdio.h>
#include <stdckdint.h>
#include <math.h>

// Float version of the overflow check: multiply, then see if it became
infinity #define FLOAT_MUL_OVERFLOWS(r, a, b) (*(r) = (a) * (b),
isinf(*(r)))

#define DEFINE_FIND_MAX_FACTORIAL(T, MUL_OVERFLOWS)                  \
    void find_max_factorial_##T(void) {                              \
        T factorial = 1;                                             \
        int n = 1;                                                   \
        while (!MUL_OVERFLOWS(&factorial, factorial, n + 1))         \
            n++;                                                     \
        printf("Largest n where n! fits in " #T ": %d\n", n);        \
    }

DEFINE_FIND_MAX_FACTORIAL(short,  ckd_mul)
DEFINE_FIND_MAX_FACTORIAL(int,    ckd_mul)
DEFINE_FIND_MAX_FACTORIAL(float,  FLOAT_MUL_OVERFLOWS)
DEFINE_FIND_MAX_FACTORIAL(double, FLOAT_MUL_OVERFLOWS)

int main(void) {
    find_max_factorial_short();
    find_max_factorial_int();
    find_max_factorial_float();
    find_max_factorial_double();
}
*/
