#include <stdio.h>

int main(void) {

  /*
   * EXERCISE 1:
   * We discussed using the expression sizeof (z) / sizeof(a[0]) to calculate
   * the number of elements in an array. THe expression sizeof (a) / sizeof (t),
   * where t is the type of a's elements, woud also work, but it's considered an
   * inferior technique . Why?
   *
   *
   * 1st attempt: because types don't have the same size on every machine, so
   * that could cause some problems. correction: it's because if you later in
   * the code change the type of the array, you would manually have to change it
   * everywhere and with the first expression it is automatically correct
   */

  /*
   * EXERCISE 2:
   * The Q&A section shows how to use a letter as an array subscript. Describe
   * how to use a digit ( in character form) as a subscript.
   *
   * 1st attempt: you subtract the value of the '0' character from the digits in
   * char to make them fall between 0 and 9.
   */

  /*
   * EXERCISE 3 and 4:
   * Write a declaration of an array named weekend containing seven bool values.
   * Include an initializer that makes the first and last values true; all other
   * values should be false.
   *
   * 1st attempt: bool weekend[7] = {[0] = true, [6] = true};
   */

  /*
   * EXERCISE 5:
   * The Fibonacci numbers are 0,1,1,2,3,5,8,13, ..., where each number is the
   * sum of the two preciding numbers. Write a program fragment that declares an
   * array named fib_numbers of length 40 and fills the array with the first 40
   * Fibonacci numbers. Hint: Fill the first two numbers individually, then use
   * a loop to compute the remaining numbers.
   *
   * 1st attempt:
   *
   * int fib_numbers[40] = {[1] = 1};
   *
   * for ( size_t i = 2; i < 40; i++) {
   * fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
   * }
   *
   * corrections: change int to long otherwise it will overflow, possibly
   * replace i < 40 by i < sizeof(fib_numbers) / sizeof(fib_numbers[0])
   */

  /*
   * EXERCISE 6:
   * Calculators, watches, and other electronic evices often rely on
   * seven-segment displays for numerical output. To form a digit, such devices
   * "turn on" some of the seven segments while leaving others "off". Suppose
   * that we want to set up an array that remembers which segments should be
   * "on" for each digit. let's number the segments as follows:
   * ...
   * Here's what the array might look like, with each row representing one
   * digit: const int segments[10][7] = { { 1,1,1,1,1,1,0}, {[1] = 1, [2] = 1 },
   * { 1,1,0,1,1,0,1}, { 1, 1, 1,1,0,0,1}, { 0,1,1,0,0,1,1}, { 1,0,1,1,0,1,1}, {
   * 1,0,1,1,1,1,1}, {1,1,1}, { 1,1,1,1,1,1,1}, { 1,1,1,1,0,1,1}};
   */

  /*
   * EXERCISE 8:
   * Write a declaration for a two-dimensional array named tmeperature_readings
   * that stores one month of hourly temperature readings. (For simplicity,
   * assume that a month has 30 days.) The rows of the array should represent
   * the days of the month; the columns should represent hours of the day.
   *
   * 1st attempt: float temperature_readings[30][24] = {0};
   */

  /* EXERCISE 9:
   * Using the array of exercise 8, write a program fragment tha computes the
   * average temperature for a month( averaged of all days of the month and all
   * hours of the day.
   *
   * 1st attempt:
   * for( int days = 0; days < 30; days++) {
   * 	for (int hours = 0; hours < 24; hours++) {
   * 		float sum_temp += temperature_readings[days][hours];
   * 		}
   * 		}
   * 		float average = sum_temp / (24 * 30);
   */

  /*
   * EXERCISE 10:
   * Write a declaration for an 8 * 8 char array named chess_board. Include an
   * initializer that puts the following daa into the array (one character per
   * array element);
   *
   * 1st attempt:
   * char chess_board[8][8] = {
   * 	{r,n,b,q,k,b,n,r},
   * 	{p,p,p,p,p,p,p,p},
   * 	{ ,., ,., ,., ,.},
   * 	{., ,., ,., ,., },
   * 	{ ,., ,., ,., ,.},
   * 	{., ,., ,., ,., },
   * 	{P,P,P,P,P,P,P,P},
   * 	{R,N,B,Q,K,B,N,R}
   * 	};
   *
   * 	correction: every char should be surrounded by ' ' quotes.
   */

  /*
   * EXERCISE 11:
   * Write a program fragment that declares an 8 * 8 char array naed
   * checker_board and then uses a loop to store the following data into the
   * array ( one character per array element). Hint: The element in row i,
   * collumn j, should be the letter B if i + j is even.
   *
   * 1st attempt:
   *
   * char checker_board[8][8] = {{0}};
   *
   * for (int i = 0; i < 8; i ++) {
   * 	for ( int j = 0; j < 8; j++) {
   * 		if ((( i + j) % 2) == 0) {
   * 			checker_board[i][j] = 'B';
   * 			} else {
   * 			checker_board[i][j] = 'R';
   * 			}
   * 			}
   * 			}
   */
}
