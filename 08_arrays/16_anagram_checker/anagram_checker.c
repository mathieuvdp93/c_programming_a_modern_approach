#include <ctype.h>
#include <stdio.h>

#define ALPHABET_LENGTH 26

int main(void) {

  int letter_counter[ALPHABET_LENGTH] = {0};
  char *first_word;
  char *second_word;

  printf("Enter first word: ");
  fflush(stdout);

  scanf("%s", first_word);

  for (size_t i = 0; i < sizeof(first_word); i++) {

    char ch = tolower(first_word[i]);
    if (isalpha(ch)) {
      letter_counter[ch - 'a']++;
    }
  }

  printf("Enter second word: ");
  fflush(stdout);

  scanf("%s", second_word);

  for (size_t i = 0; i < sizeof(second_word); i++) {

    char ch = tolower(second_word[i]);
    if (isalpha(ch)) {
      letter_counter[ch - 'a']--;
    }
  }

  for (int i = 0; i < ALPHABET_LENGTH; i++) {
    if (letter_counter[i] != 0) {
      printf("The words are not anagrams.\n");
      break;
    } else {
      printf("The words are anagrams.\n");
    }
  }
  return 0;
}
