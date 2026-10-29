#include <math.h>
#include <stdckdint.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i, n;
  printf("THis program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  // this is a c23 function that checks for overflow
  int result;
  if (ckd_mul(&result, n, n)) {
    printf("This n causes overflow\n");
    exit(1);
  }

  /* second more concise way to check for overflow
        // might have rounding errors and doesn't check for negative values for
  n if (n > sqrt(INT32_MAX)) { printf("this n value will cause overflow\n");
    exit(1);
  }
        */

  // int previous_square = 0;

  for (i = 1; i <= n; i++) {
    int current_square = i * i;

    /*
     * first way i found to check for overflow
if (current_square < previous_square) {
printf("it overflowed\n");
break;
}
previous_square = current_square;
    */

    printf("%20d%20d\n", i, current_square);
  }
  // it overflows at n = the squareroot of the intXX_MAX + 1
  printf("%d\n", INT32_MAX);

  return 0;
}
