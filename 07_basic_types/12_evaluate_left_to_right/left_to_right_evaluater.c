#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("Enter an expression: ");
  fflush(stdout);

  float total_value = 0.0;
  float value_two = 0.0;
  char op;

  scanf("%f", &total_value);
  if (scanf("%c", &op) != 1) {
    op = '\n';
  }

  while (op != '\n') {
    if (scanf("%f", &value_two) != 1) {
      printf("missing or invalid operand\n");
      exit(EXIT_FAILURE);
    }
    switch (op) {
    case '+':
      total_value += value_two;
      break;
    case '*':
      total_value *= value_two;
      break;
    case '-':
      total_value -= value_two;
      break;
    case '/':
      total_value /= value_two;
      break;
    default:
      printf("Not a valid operator\n");
      exit(EXIT_FAILURE);
    }
    if (scanf("%c", &op) != 1) {
      break;
    }
  }

  printf("%f\n", total_value);
  return 0;
}
