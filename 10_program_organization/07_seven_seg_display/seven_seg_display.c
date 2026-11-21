#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

static const char *display_output[10][3];
int count = 0;

int main(void) {

  printf("Enter a number: ");
  fflush(stdout);

  int ch;
  int position = 0;
  while (((ch = getchar()) != '\n' && ch != EOF) && count < MAX_DIGITS) {
    if (isdigit(ch)) {
      process_digit(ch - '0', position);
      count++;
      position++;
    }
  }
  print_digits_array();

  clear_digits_array();
  print_digits_array();
  return 0;
}

void process_digit(int digit, int position) {
  static const char *display_segments[10][3] = {
      {" _ ", "| |", "|_|"}, {"   ", "  |", "  |"}, {" _ ", " _|", "|_ "},
      {" _ ", " _|", " _|"}, {"   ", "|_|", "  |"}, {" _ ", "|_ ", " _|"},
      {" _ ", "|_ ", "|_|"}, {" _ ", "  |", "  |"}, {" _ ", "|_|", "|_|"},
      {" _ ", "|_|", " _|"}};

  for (int i = 0; i < 3; i++) {
    display_output[position][i] = display_segments[digit][i];
  }
}

void clear_digits_array(void) {
  memset(display_output, 0, 30 * sizeof(char *));
  count = 0;
}

void print_digits_array(void) {

  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < count; i++) {
      printf("%s ", display_output[i][j]);
    }
    printf("\n");
  }
}
