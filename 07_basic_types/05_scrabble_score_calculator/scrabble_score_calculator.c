#include <ctype.h>
#include <stdio.h>

int main(void) {
  static const int score[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                              1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");
  // used after a printf statement without '\n' because on some machines stdout
  // only gets flushed after a newline and this prevents that from happening,
  // otherwise it would look like your program was stuck and then after you put
  // a word in the stdout would get flushed and print enter a word.
  fflush(stdout);

  int ch;
  int word_score = 0;

  while ((ch = getchar()) != '\n' && ch != EOF) {
    // this if statement is necessary otherwise the later score[ch - 'A'] can
    // get out of the array bounds if ch is not a letter.
    if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')) {
      printf("word contains invalid character %c\n", ch);
      word_score = 0;
      break;
    }
    ch = toupper(ch);
    word_score += score[ch - 'A'];
  }

  printf("the total score is: %d\n", word_score);
  return 0;
}
