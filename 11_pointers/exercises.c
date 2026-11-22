#include <stdio.h>

int main(void) {

  /*
   * EXERCISE 1:
   * If i is a variable and p points to 8, which of the following expressions
   * are aliases for i? a. *p b. &p c. *&p d. &*p e. *i f. &i g. *&i h. &*i
   */

  /*
   * 1st attempt:
   * a and g
   */

  /*
   * EXERCISE 2:
   * If i is an int variable and p and q are pointers to int, which of the
   * following assignments are legal? a. p = i; b. *p = &i; c. &p = q; d. p =
   * &q; e. p = *&q; f. p = q; g. p = *q; h. *p = q; i. *p = *q;
   */

  /*
   * 1st attempt:
   * c, d, e, f,i
   *
   * correction: c and d are illegal, &p is an lvalue so can't be on the left
   * side just like 4 = x is impossible. for d &q is of type int ** not int * so
   * they can't be assigned to eachother.
   */

  /*
   * EXERCISE 3:
   * The following function supposedly computes the sum and average of the
   * numbers in the array a, which has length n, avg and sum point ot vaiables
   * that the function should modify. Unfortunately, the function contains
   * several errors; find and correct them.
   *
   * void avg_sum(double a[], int n, double *avg, double *sum) {
   * 	int i;
   * 	sum = 0.0;
   * 	for (i = 0; i < n; i++) {
   * 		sum += a[i];
   * 	}
   * 	avg = sum / n;
   * }
   */

  /*
   * 1st attempt:
   * void avg_sum(double a[], int n, double *avg, double *sum) {
   * 	int i;
   * 	*sum = 0.0;
   * 	for (i = 0; i < n; i++) {
   * 		*sum += a[i];
   * 	}
   * 	*avg = *sum / n;
   * }
   */

  /*
   * EXERCISE 4:
   * Write the following function:
   * void swap(int *p, int *q);
   * When passed the addresses of two variables, swap should exchange the values
   * of the variables: swap(&i, &j);
   */

  /*
   * 1st attempt:
   * void swap(int *p, int *q) {
   * 	int tmp = *p;
   * 	*p = *q;
   * 	*q = tmp;
   * 	}
   */

  /*
   * EXERCISE 5:
   * Write the following function:
   * void split_time(long total_sec, int *hr, int *min, int *sec);
   * total_sec is a time represented as the number of seconds since midnight, hr
   * , min and sec are pointers to variables in which the function will store
   * the equivalent time in hours(0-23), minutes(0-59), and seconds(0-59),
   * respectively.
   */

  /*
   * 1st attempt:
   * void split_time(long total_sec, int *hr, int *min, int *sec) {
   *
   * *hr = total_sec / 3600;
   * int leftover_time = total_sec % 3600;
   * *min = leftover_time / 60;
   * leftover_time %= 60;
   * *sec = leftover_time;
   * }
   *
   * it works correctly but could be written shorter like this:
   * *hr = total_sec / 3600;
   * *min = total_sec / 60 % 60;
   * *sec total_sec % 60;
   */

  /*
   * EXERCISE 6:
   * Write the following function:
   * void find_two_largest(int a[], int n, int *largest, int *second_largest);
   * When passed an array a of length n, the function will search a for largest
   * and second largest elements, storing them in the variable pointed to by
   * largest and second_largest, respectively.
   */

  /*
   * 1st attempt:
   * void find_two_largest(int a[], int n, int *largest, int *second_largest){
   * 	if(n <= 1 ){
   * 		fprintf(stderr, "array less then 2 elements");
   * 		exit(EXIT_FAILURE);
   * 	}
   *
   * 	*largest = INT_MIN;
   * 	for (int i = 0; i < n; i++) {
   * 		if( a[i] > *largest) {
   * 			*second_largest = *largest;
   * 			*largest = a[i];
   * 		}else if (a[i] > *second_largest) {
   * 			*second_largest = a[i];
   * 		}
   * 	}
   * }
   */

  /*
   * EXERCISE 7:
   * Write the following function:
   * void split_date(int day_of_year, int year, int *month, int *day);
   * day_of_year is an integer between 1 and 366, specifying a particular day
   * within the year designated by year,month and day point variables in which
   * the function will store the equivalent month(1-12) and day within that
   * month(1-31).
   */

  /*
   * 1st attempt:
   * void split_date(int day_of_year, int year, int *month, int *day) {
   * *month = (day_of_year / 31) + 1;
   * *day = day_of_year % 31;
   * }
   *
   * correction: way to simple, need to take in account different length months
   * etc.
   *
   *
   * void split_date(int day_of_year, int year, int * month, int *day) {
   *
   * 	int days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   *
   * 	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
   * 		days_per_month[1] = 29;
   * 	}
   *
   * 	int num_months = 0;
   * 	while (day_of_year > days_per_month[num_months]) {
   * 		day_of_year -= days_per_month[num_months];
   * 		num_months++;
   * 	}
   *
   * 	*month = num_months + 1;
   * 	*day = day_of_year;
   * }
   *
   */

  /*
   * EXERCISE 8:
   * Write the following function:
   * int *find_largest(int a[], int n);
   * When passed an array a of length n, the function will return a pointer to
   * the array's largest element.
   */

  /*
   * 1st attempt:
   * int *find_largest(int a[], int n) {
   * 	int index_largest = 0;
   * 	int largest = INT_MIN;
   *
   * 	for (int i = 0; i < n; i++) {
   * 		if (a[i] > largest) {
   * 			largest = a[i];
   * 			index_largest = i;
   * 		}
   * 	}
   * 	return &a[index_largest];
   * }
   *
   * version above works and is correct, but this one is better:
   * int *find_largest(int a[], int n) {
   * 	int *max = &a[0];
   * 	for (int i = 0; i < n; i++) {
   * 		if (a[i] > *max) {
   * 			max = &a[i];
   * 		}
   * 	}
   * 	return max;
   * }
   */

  return 0;
}
