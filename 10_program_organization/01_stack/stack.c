#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

char contents[STACK_SIZE];
int top = 0;
bool stack_underflow_occurred = false;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {

  printf("Enter parentheses and/or braces: ");

  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF) {
    if (ch == '(' || ch == '{') {
      push(ch);
    }
    if (ch == ')' || ch == '}') {
      char popped_char = pop();
      switch (ch) {
      case ')':
        if (popped_char != '(') {
          printf("not nested properly\n");
          exit(EXIT_SUCCESS);
        }

        break;
      case '}':
        if (popped_char != '{') {
          printf("not nested properly\n");
          exit(EXIT_SUCCESS);
        }
        break;
      }
    }
  }

  if (is_empty() && !(stack_underflow_occurred)) {
    printf("parentheses/braces are nested properly.\n");
  } else {
    printf("parentheses/braces not nested properly.\n");
  }

  return 0;
}

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }
bool is_full(void) { return top == STACK_SIZE; }
void push(char ch) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = ch;
  }
}

char pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}

void stack_underflow(void) {
  fprintf(stderr, "stack underflow occurred: terminating\n");
  exit(EXIT_FAILURE);
}

void stack_overflow(void) {
  fprintf(stderr, "stack overflow occurred: terminating\n");
  exit(EXIT_FAILURE);
}
