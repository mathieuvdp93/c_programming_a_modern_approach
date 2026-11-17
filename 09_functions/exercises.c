#include <stdio.h>

int main(void) {

  /*
   * EXERCISE 1:
   * The following function, which computes the area of a triangle, contains two
   * errors. Locate the errors and show how to fix them
   *
   * double triangle_area(double base, height)
   * double product;
   * {
   * product = base * height;
   * return product / 2;
   * }
   */

  /*
   * 1st attempt:
   * the type of height should also be mentioned in the function declaration and
   * product is declared in between the function declaration and the function
   * body.
   */

  /*
   * EXERCISE 2:
   * Write a function check (x,y,n) that returns 1 if both x and y fall between
   * 0 and n - 1, inclusive. The function should return 0 otherwise. Assume that
   * x, y, and n are all of type int.
   */

  /*
   * 1st attempt:
   *
   * bool check(int x, int y, int n) {
   *
   * 	bool x_correct = ((x >= 0) && (x < n));
   * 	bool y_correct = ((y >= 0) && (y < n));
   *
   * 	return x_correct && y_correct;
   * 	}
   */

  /*
   * EXERCISE 3:
   * Write a function gcd(m, n) that calculates the greatest common divisor of
   * the integers m and n.
   */

  /*
   * 1st attempt:
   * int gcd( int m, int n) {
   * 	int tmp;
   *
   * while ( n != 0) {
   *
   * 	tmp = m % n;
   * 	m = n;
   * 	n = tmp;
   * 	}
   *
   * 	return m;
   * 	}
   */

  /*
   * EXERCISE 4:
   * Write a function day_of_year(month, day, year) that returns the day of the
   * year ( an integer between 1 and 366) specified by the three arguments.
   */

  /*
   * 1st attempt:
   * int day_of_year( int month, int day, int year) {
   * 	int num_days = 0;
   * 	int days_in_months[12] = { 31, 28, 31, 30, 31,30,31,31,30,31,30,31};
   *
   * 	if (((year % 4 == 0) && (year % 100 != 0)) || ( year % 400 == 0)) {
   * 		days_in_months[1] = 29;
   * 		}
   *
   * 	for (int i = 0; i < month - 1; i++) {
   *
   * 	num_days += month[i];
   * 	}
   *
   * 	num_days += day;
   *
   * 	return num_days;
   * 	}
   */

  /*
   * EXERCISE 5:
   * Write a function that returns the the number of digits in n ( a positive
   * integer).
   */

  /*
   * 1st attempt:
   * int num_digits(int n) {
   * 	int num_digits = 0;
   *
   * 	while (n != 0) {
   * 		n /= 10;
   * 		num_digits++;
   * 		}
   * 		}
   */

  /*
   * EXERCISE 6:
   * Write a function digit(n, k) that returns the kth digit (from the right) in
   * n (a positive integer). For example, digit( 829, 1) returns 9, digit(829,
   * 2) returns 2 and digit(829,3) returns 8. If k is greater the number of
   * digits in n, have the function return 0.
   */

  /*
   * 1st attempt:
   * int digit( int n, int k) {
   *
   * 	for( int i = 0; i < k - 1; i++) {
   * 		n /= 10;
   * 		}
   *
   * 	return n % 10;
   *	}
   */

  /*
   * EXERCISE 7:
   * Suppose that the function f has the following definition:
   * int f(int a, int b) { ... }
   * Which of the following statements are legal? (Assume that i has type
   * integer and x type double). a. i = f(83, 12); b. x = f(83, 12); c. i =
   * f(3.15, 9.28); d. x = f(3.15, 9.28); e. f(83, 12);
   */

  /*
   * 1st attempt:
   * a is legal i has the correct type and both arguments are also int. b legal
   * the resulting int will be promoted to double when assigning it to x. in
   * c89: c and d illegal if the compiler has not seen a prototype of the
   * function before the call, because then the function will be called with
   * doubles as arguments which is undefined behavior, in c 89 and 99 legal: if
   * the compiler has seen a prototype before it will convert the arguments to
   * int in this case. e is legal the resulting int is just thrown away.
   */

  /*
   * EXERCISE 8:
   * WHich of the following would be valid prototypes for a function that
   * returns nothing and has one double parameter? a. void f(double x); b. void
   * f(double); c. void f(x); d. f(double x);
   */

  /*
   * 1st attempt:
   * a, b and d are correct.
   *
   * correction: d incorrect in c89 no return type specified means it returns
   * int and in c99 it's illegal
   */

  /*
   * EXERCISE 9:
   * What will be the output of the following program?
   * #include <stdio.h>
   *
   * void swap(int a, int b);
   *
   * int main(void) {
   *
   * 	int i = 1, j = 2;
   *
   * 	swap(i,j);
   * 	printf("i = %d, j = %d\n", i,j);
   * 	return 0;
   * }
   * void swap(int a, int b) {
   * 	int temp = a;
   * 	a = b;
   * 	b = temp;
   * }
   */

  /*
   * 1st attempt:
   * the output of the printf statement will be "i = 1, j = 2" and a newline,
   * because arguments in c are pass by value so in the swap function only the
   * local varialbes a and b are swapped, nothing ever touches i or j. the
   * program will output status code 0.
   */

  /*
   * EXERCISE 10:
   * Write functions that return the following values. (Assume that a and n are
   * parameters, where a is an array of int values and n is the length of the
   * array.) a. The largest element in a. b. The average of all elements in a.
   * c. The number of positive elements in a.
   */

  /*
   * 1st attempt:
   * a.
   * int largest_element(int a[], int n) {
   * 	int max = INT_MIN;
   *
   * 	for( int i = 0; i < n; i++) {
   * 		if (a[i] > max) {
   * 			max = a[i];
   * 			}
   * 		}
   * 	return max;
   * }
   *
   * b.
   * float average(int a[], int n) {
   * 	float average = 0;
   * 	int sum = 0;
   *
   * 	for( int i = 0; i < n; i++) {
   * 		sum += a[i];
   * 		}
   *
   * 	average = (float)sum / n;
   *
   * 	return average;
   * }
   *
   * c.
   * int num_pos_elements(int a[], int n) {
   * 	int num_pos = 0;
   *
   * 	for( int i = 0; i < n; i++) {
   * 		if( a[i]) >= 0) {
   * 			num_pos++;
   * 			}
   * 		}
   * 	return num_pos;
   * 	}
   */

  /*
   * EXERCISE 11:
   * Write the following function:
   * float compute_GPA(char grades[], int n);
   * The grades array will contain letter grades (A, B, C, D or F, either
   * upper-case of lower-case): n is the length of the array. The function
   * should return the average of the grades (Assume that A = 4, B = 3, C = 2, D
   * = 1, and F = 0).
   */

  /*
   * 1st attempt:
   * float compute_GPA( char grades[], int n) {
   * 	int total_score = 0;
   *
   * 	for( int i = 0; i < n; i++) {
   * 		int grade = toupper(grades[i]);
   *
   * 		switch (grade){
   * 		case 'A':
   * 			total_score += 4;
   * 			break;
   * 		case 'B':
   * 			total_score += 3;
   * 			break;
   * 		case 'C':
   * 			total_score += 2;
   * 			break;
   * 		case 'D':
   * 			total_score += 1;
   * 			break;
   * 		default:
   * 			break;
   * 			}
   * 		}
   * 	return (float)total_score / n;
   * }
   */

  /*
   * EXERCISE 12:
   * Write the following function:
   * double inner_product(double a[], double b[], int n);
   * The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n - 1] * b[n
   * - 1].
   */

  /*
   * 1st attempt:
   * double inner_product( double a[], double b[], int n) {
   *
   * 	double product = 0;
   *
   * 	for(int i = 0; i < n; i++) {
   * 		product += a[i] * b[i];
   * 	}
   * 	return product;
   * 	}
   */
