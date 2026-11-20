#include <stdio.h>

int calculate_power(int n, int x);

int main(void) {

  int x, n;
  printf("enter the base: ");
  fflush(stdout);

  scanf("%d", &x);

  printf("enter the exponent: ");
  fflush(stdout);

  scanf("%d", &n);

  printf("the result is: %d\n", calculate_power(x, n));

  return 0;
}

int calculate_power(int x, int n) {

  if (n == 0) {
    return 1;
  }
  int half = calculate_power(x, n / 2);
  if (n % 2 == 0) {
    return half * half;
  } else {
    return x * half * half;
  }
}
