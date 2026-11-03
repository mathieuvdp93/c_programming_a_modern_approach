#include <stdio.h>
#include <string.h>

int main(void) {
  float total_word_length = 0.0f;
  int word_counter = 0;
  char next;

  printf("Enter a sentence: ");
  fflush(stdout);

  char word[40] = {0};

  while (scanf("%39s%c", word, &next) == 2) {
    word_counter++;
    total_word_length += strlen(word);
    if (next == '\n') {
      break;
    }
  }

  float average = 0.0f;
  if (word_counter > 0) {
    average = (float)total_word_length / word_counter;
  }
  printf("%.1f\n", average);

  return 0;
}
