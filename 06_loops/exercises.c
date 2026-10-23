#include <stdio.h>

int main(void) {

  int i;
  int j;
  int sum;

  /*
   * EXERCISE 1:
   * What output does the following program fragment produce?
   */

  /*
i = 1;
while (i <= 120) {
printf("%d ", i);
i *= 2;
}
  */

  /*
   * 1st attempt: it will produce 1 2 4 8 16 32 64.
   */

  /*
   * EXERCISE 2:
   * What output does the following program fragment produce?
   */

  /*
i = 9384;
do {
printf("%d ", i);
i /= 10;
} while (i > 0);
  */

  /*
   * 1st attempt: it will produce 4 numbers, first 9384 then 938, 93, 9.
   */

  /*
   * EXERCISE 3:
   * What output does the following program fragment produce?
   */

  /*
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
printf("%d ", i);
}
  */

  /*
   * 1st attempt: it will produce 5 4 3 2 . because when the loop starts with i
   * = 2 the body will be executed and then expression 3 will be executed and j
   * = 0 after that so the new loop starts and checks if i > 0 , j > 0, j is not
   * so the loop will stop.
   */

  /*
   * EXERCISE 4:
   * Which one of the following statements is not equivalnet to the other 2
   * (assuming that the loop bodies are the same)?
   *
   *
   * (a) for ( i = 0; i < 10; i++) ...
   * (b) for (i = 0; i < 10; ++i) ...
   * (c) for ( i = 0; i++ < 10;) ...
   *
   * 1st attempt: c is different because the incrementing happens at a different
   * step (and the result will be that the loop in c stops one iteration
   * earlier)
   *
   * correction: c is correct answer but reasoning is wrong, it will not stop
   * one iteration earlier, it will do the same amount of iterations but the i
   * value the body of the loop sees will be different. in a and b it will see 0
   * - 9 and in c it will see 1 - 10. and after the loop is done in a and b i
   * will be 10 and in c it will be 11.
   */

  /*
   * EXERCISE 5:
   * Which one of the following statements is not equivalnet to the other 2
   * (assuming that the loop bodies are the same)?
   *
   * (a) while (i < 10) ...
   * (b) for (; i < 10;) ...
   * (c) do ... while ( i < 10);
   *
   *
   * 1st atttempt: c is different because in a and b if i is 10 or larger before
   * the first execution of the loop they will not be executed but c would be
   * executed once.
   */

  /*
   * EXERCISE 6:
   * EXERCISE 7:
   *
   * Translate the program fragment of ex 1 and 2 into a single for statement.
   *
   * 1st attempt:


  for (i = 1; i <= 120; i *= 2) {
    printf("%d ", i);
  }

  for (i = 9384; i > 0; i /= 10) {
    printf("%d ", i);
  }
        */

  /*
   * EXERCISE 8:
   * What output does the following for statement produce?
   */

  /*
for (i = 10; i >= 1; i /= 2) {
printf("%d ", i++);
}
  */

  /*
   * 1st attempt: it will print 10 5 3 2 1 1 1 ... it will keep printing 1
   * because once i = 1 the loop looks like this i >= 1 check passes so body
   * gets executed, print 1 and i becomes 2 then i = 2/2 so  i is 1 again at the
   * end of the body and it starts over.
   */

  /*
   * EXERCISE 9:
   * Translate the for statement of exercise 8 into an equivalent while
   * statement. You will need one statement on addition to the while loop
   * itself.
   *
   * 1st attempt:
   */

  /*
i = 10;
while (i >= 1) {
printf("%d ", i++);
i /= 2;
}
*/

  /*
   * EXERCISE 10:
   * Show how to replace a continue statement by an equivalent goto statement.
   *
   * 1st attempt: you put an identifier just before the the loops start and then
   * where you would put the continue statement you now put the goto statement
   * that goes to that identifier.
   *
   * correction: it should not be before the loop start because that will also
   * execute the initialization if there is one, it should be a the end of the
   * loops body( with a null statement) so that the next step will be for the
   * loop to start the next iteration by checking the condition statement
   */

  /*
   * EXERCISE 11:
   * What output does the following program fragment produce?
   */

  /*
sum = 0;
for (i = 0; i < 10; i++) {
if (i % 2) {
continue;
}
sum += i;
}
printf("%d\n", sum);
  */

  /*
   * 1st attempt: it will return the sum of all even numbers between 0 and 10
   * so 20.
   */

  /*
   * EXERCISE 12:
   * The following prime testing loop appeared in section 6.4 as an example:
   *
   * for (d = 2; d < n; d++) {
   * 	if	(n % d ==0){
   * 		break;
   * 		}
   * 		}
   *
   * 		This loop isn't very efficient. IT's not necessary t odivide n
   * by all numbers between 2 and n - 1 to determine whether it's prime. In fact
   * we need only check devisors up to the square root of n. Modify the loop to
   * take advantage of this fact. Hint: don't try to compute the square root of
   * n, instead ,compute d * d with n.
   */

  /*
int d, n;
for (d = 2; d * d <= n; d++) {
if (n % d == 0) {
break;
}
}
  */

  /*
   * EXERCISE 13:
   * Rewrite the following loop so that its body is empty:
   * for ( n = 0; m > 0; n++) {
   * 	m /= 2;
   * 	}
   *
   * 1st attempt :
   * for (; m > 0; m /=2) {
   * ;
   * }
   *
   * correction: my attempt ignores the n value which makes it not a rewrite
   * because not the complete behavior of the first for loop gets copied.
   *
   * 2nd attempt:
   * for ( n =0 ; m > 0; n++, m /= 2) ...
   */

  /*
   * EXERCISE 14:
   * Find the error in the following program fragment and fix it.
   * if ( n % 2 ==0);
   * 	printf("n is even\n");
   *
   *
   * 	1st attempt: the mistake is the semicolon after the if statement which
   * means that i practice the printf will always execute.
   */

  return 0;
}
