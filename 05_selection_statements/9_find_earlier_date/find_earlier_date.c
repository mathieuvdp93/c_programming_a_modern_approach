#include <stdint.h>
#include <stdio.h>

int main(void) {

  uint32_t year1, year2, month1, month2, day1, day2;

  printf("Enter first date (dd/mm/yy): ");
  scanf("%2d/%2d/%2d", &day1, &month1, &year1);

  printf("Enter second date (dd/mm/yy): ");
  scanf("%2d/%2d/%2d", &day2, &month2, &year2);

  /*
   * working solution with if-else cascading
if (year1 < year2) {
printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day1, month1,
     year1, day2, month2, year2);
} else if (year2 < year1) {
printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day2, month2,
     year2, day1, month1, year1);
} else if (month1 < month2) {
printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day1, month1,
     year1, day2, month2, year2);
} else if (month2 < month1) {
printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day2, month2,
     year2, day1, month1, year1);
} else if (day1 < day2) {
printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day1, month1,
     year1, day2, month2, year2);
} else {
printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day2, month2,
     year2, day1, month1, year1);
}
  */

  // going to ignore leap years and say all months are 30 days just to keep it
  // more readable
  int32_t date1_in_days = (year1 * 365) + (month1 * 30) + day1;
  int32_t date2_in_days = (year2 * 365) + (month2 * 30) + day2;

  (date1_in_days < date2_in_days)
      ? (printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day1,
                month1, year1, day2, month2, year2))
      : (printf("%02d/%02d/%02d is earlier then %02d/%02d/%02d.\n", day2,
                month2, year2, day1, month1, year1));

  return 0;
}
