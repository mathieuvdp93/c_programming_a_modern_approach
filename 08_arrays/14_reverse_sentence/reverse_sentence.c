#include <ctype.h>
#include <stdio.h>

#define MAX_SENTENCE_LENGTH 200

int main(void) {
  char sentence[MAX_SENTENCE_LENGTH];
  int end_of_sentence = 0;

  printf("Enter a sentence: ");
  fflush(stdout);

  for (int i = 0; i < MAX_SENTENCE_LENGTH; i++) {

    char ch = fgetc(stdin);
    if (ch == '?' || ch == '.' || ch == '!') {
      sentence[i] = ch;
      end_of_sentence = i;
      break;
    }
    sentence[i] = ch;
  }

  // - 1 to avoid including the '.', '!' or '?'
  int end_of_word = end_of_sentence - 1;
  for (int i = end_of_sentence; i >= 0; i--) {

    if (isspace(sentence[i])) {
      int word_length = end_of_word - i;
      printf("%.*s ", word_length, sentence + (i + 1));
      end_of_word = i - 1;
    }
    if (i == 0) {
      printf("%.*s", end_of_word + 1, sentence);
      printf("%c\n", sentence[end_of_sentence]);
    }
  }
  return 0;
}
