#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

void push(int32_t digit, int32_t op_stack[], int8_t *current_top);
int32_t pop(int32_t op_stack[], int8_t *current_top);

int main(void) {
  int32_t operands_stack[STACK_SIZE];
  static int8_t top = 0;

  printf("Enter an RPN expression: ");
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF) {

    if (isdigit(ch)) {
      push((int32_t)ch - '0', operands_stack, &top);
    } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
      int32_t op1 = pop(operands_stack, &top);
      int32_t op2 = pop(operands_stack, &top);

      switch (ch) {
      case '+':
        push(op2 + op1, operands_stack, &top);
        break;
      case '-':
        push(op2 - op1, operands_stack, &top);
        break;
      case '*':
        push(op2 * op1, operands_stack, &top);
        break;
      case '/':
        if (op1 == 0) {
          printf("division by 0\n");
          exit(EXIT_FAILURE);
        }
        push(op2 / op1, operands_stack, &top);
        break;
      }
    } else if (ch == '=') {
      int32_t result = pop(operands_stack, &top);
      if (top != 0) {
        printf("Too many operands in expression\n");
        exit(EXIT_FAILURE);
      }
      printf("Value of expression: %d\n", result);
    } else if (ch != ' ') {
      printf("invalid input\n");
    }
  }
}

void push(int32_t num, int32_t *operands_stack, int8_t *top) {
  printf("num = %d\n", num);
  if (*top == STACK_SIZE) {
    // stack overflow
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
  }
  operands_stack[(*top)++] = num;
  printf("pushtop = %d\n", *top);
}

int32_t pop(int32_t operands_stack[], int8_t *top) {
  if (*top == 0) {
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
  }
  return operands_stack[--(*top)];
}
