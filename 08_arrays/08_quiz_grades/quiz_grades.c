#include <stdio.h>

int main(void) {
  int student_grades[5][5] = {{0}};

  for (int i = 0; i < 5; i++) {
    printf("Enter student %d's points:", i + 1);
    fflush(stdout);

    scanf("%d %d %d %d %d", &student_grades[i][0], &student_grades[i][1],
          &student_grades[i][2], &student_grades[i][3], &student_grades[i][4]);
  }

  int total_score_students[5] = {0};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      total_score_students[i] += student_grades[i][j];
    }
  }

  float average_score_students[5] = {0.0f};
  for (int i = 0; i < 5; i++) {
    average_score_students[i] = total_score_students[i] / 5.0f;
    printf("%-15s %d: %f\n", "the average of student", i,
           average_score_students[i]);
  }

  float average_score_quiz[5] = {0.0f};
  int max_scores_quiz[5];
  int min_scores_quiz[5];

  for (int j = 0; j < 5; j++) {
    int total_score_quiz = 0;
    int max_score_quiz = 0;
    int min_score_quiz = 100;
    for (int i = 0; i < 5; i++) {
      total_score_quiz += student_grades[i][j];
      if (student_grades[i][j] < min_score_quiz) {
        min_score_quiz = student_grades[i][j];
      }
      if (student_grades[i][j] > max_score_quiz) {
        max_score_quiz = student_grades[i][j];
      }
    }
    average_score_quiz[j] = total_score_quiz / 5.0f;
    max_scores_quiz[j] = max_score_quiz;
    min_scores_quiz[j] = min_score_quiz;
  }

  for (int i = 0; i < 5; i++) {
    printf("quiz %d:\n", i + 1);
    printf("average: %f\n", average_score_quiz[i]);
    printf("min: %d\n", min_scores_quiz[i]);
    printf("max: %d\n", max_scores_quiz[i]);
  }
  return 0;
}
