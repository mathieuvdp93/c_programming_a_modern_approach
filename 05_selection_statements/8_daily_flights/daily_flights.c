#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// int compare_ints(const void *, const void *);
int main(void) {

  int32_t user_input_hours, user_input_min;

  printf("Enter a 24 hour time: ");
  scanf("%d:%d", &user_input_hours, &user_input_min);

  int32_t total_mins_since_midnight = (user_input_hours * 60) + user_input_min;

  int32_t flight_departures_in_mins[8] = {
      (8 * 60),  (9 * 60) + 43,  (11 * 60) + 19, (12 * 60) + 47,
      (14 * 60), (15 * 60) + 45, (19 * 60),      (21 * 60) + 45};

  int32_t difference_in_mins[8];

  char *string_flight_departures[8] = {
      "8:00 am , arriving at 10:16 pm\n", "9:43 am, arriving at 11:52 pm\n",
      "11:19 am, arriving at 1:31 pm\n",  "12:47 pm, arriving at 3:00 pm\n",
      "2:00pm, arriving at 4:08 pm\n",    "3:45 pm, arriving at 5:55 pm\n",
      "7:00 pm, arriving at 9:20 pm\n",   "9:45 pm, arriving at 11:58 pm\n"};

  printf("Closest departure is ");

  for (size_t i = 0; i < sizeof(flight_departures_in_mins) /
                             sizeof(flight_departures_in_mins[0]);
       i++) {
    if (total_mins_since_midnight <=
        (flight_departures_in_mins[i] +
         ((flight_departures_in_mins[i + 1] - flight_departures_in_mins[i]) /
          2))) {
      printf("%s\n", string_flight_departures[i]);

      break;
    }
  }

  /*
qsort(difference_in_mins,
    sizeof(difference_in_mins) / sizeof(difference_in_mins[0]),
    sizeof(difference_in_mins[0]), compare_ints);
                                  */
  return 0;
}
