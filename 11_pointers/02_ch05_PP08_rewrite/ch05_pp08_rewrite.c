#include <stdint.h>
#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time);
int main(void) {

  int32_t user_input_hours, user_input_min, departure_time, arrival_time;

  printf("Enter a 24 hour time: ");
  scanf("%d:%d", &user_input_hours, &user_input_min);

  int32_t total_mins_since_midnight = (user_input_hours * 60) + user_input_min;

  char *string_flight_departures[8] = {
      "8:00 am , arriving at 10:16 pm\n", "9:43 am, arriving at 11:52 pm\n",
      "11:19 am, arriving at 1:31 pm\n",  "12:47 pm, arriving at 3:00 pm\n",
      "2:00pm, arriving at 4:08 pm\n",    "3:45 pm, arriving at 5:55 pm\n",
      "7:00 pm, arriving at 9:20 pm\n",   "9:45 pm, arriving at 11:58 pm\n"};

  find_closest_flight(total_mins_since_midnight, &departure_time,
                      &arrival_time);

  printf("%d %d\n", departure_time, arrival_time);

  return 0;
}

void find_closest_flight(int des_time, int *dep_time, int *arr_time) {

  int32_t flight_departures_in_mins[8] = {
      (8 * 60),  (9 * 60) + 43,  (11 * 60) + 19, (12 * 60) + 47,
      (14 * 60), (15 * 60) + 45, (19 * 60),      (21 * 60) + 45};

  int32_t flight_arrivals_in_mins[8] = {
      (10 * 60) + 16, (11 * 60) + 52, (13 * 60) + 31, (15 * 60),
      (16 * 60) + 8,  (17 * 60) + 55, (21 * 60) + 20, (23 * 60) + 58};

  for (int i = 0; i < 8; i++) {
    if (des_time <=
        flight_departures_in_mins[i] +
            (flight_departures_in_mins[i + 1] - flight_departures_in_mins[i]) /
                2) {
      *dep_time = flight_departures_in_mins[i];
      *arr_time = flight_arrivals_in_mins[i];
      break;
    }
  }
}
