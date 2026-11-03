#include <stdio.h>

int main(void) {

  printf("Enter an expression: ");
  fflush(stdout);

  float total_value = 0.0;
  float value_two = 0.0;
  int operand;

  scanf("%f", &total_value);
  scanf("%c", &operand);

  while (operand != '\n') {
    scanf("%f", &value_two);
    switch (operand) {
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
    }
    scanf("%c", &operand);
  }

  printf("%f\n", total_value);
}
