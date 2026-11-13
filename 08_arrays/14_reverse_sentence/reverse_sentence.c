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
}
