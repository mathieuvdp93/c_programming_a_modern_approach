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
  printf("%s\n", sentence);
  printf("%d\n", end_of_sentence);

  for (int i = end_of_sentence; i >= 0; i--) {

    // - 1 to avoid including the '.', '!' or '?'
    int end_of_word = end_of_sentence - 1;

    if (isspace(sentence[i])) {
      int word_length = end_of_word - i;
      printf("%.*s", word_length, sentence[i]);
      end_of_word = i;
    }
  }
  printf("%c\n", sentence[end_of_sentence]);
  return 0;
}
