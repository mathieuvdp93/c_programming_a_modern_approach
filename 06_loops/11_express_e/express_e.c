#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int64_t calculate_factorial(int);

int main(void) {

  int user_int;
  float e = 0.0;

  printf("enter an integer: ");
  scanf("%d", &user_int);
  if (user_int > 20) {
    printf("calculating the factorial of numbers larger then 20 will cause "
           "overflow\n");
    exit(1);
  }

  for (int i = 1; i <= user_int; i++) {

    e += 1 / (float)calculate_factorial(i);
  }

  printf("%f\n", e);

  return 0;
}

int64_t calculate_factorial(int number) {

  int64_t result = 1;

  for (int i = number; i > 0; i--) {
    result *= i;
  }
  printf("result = %ld\n", result);
  if (result < 0) {
    printf("overflow from %d\n", number);
    exit(1);
  }

  return result;
}
