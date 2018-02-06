#include <stdio.h>

#define NO_OF_GAMES 5
#define NO_OF_PLAYERS 4

void populate_stats_table(void);
void populate_averages();
int find_best_average(void);

int stats[NO_OF_GAMES][NO_OF_PLAYERS];
float averages[NO_OF_PLAYERS];

int main(void) {
  populate_stats_table();
  populate_averages();

  int best = find_best_average();

  printf("Player %d has the best average, %.2f\n", best + 1, averages[best]);

  return 0;
}

void populate_stats_table(void) {
  for (int i = 0; i < NO_OF_GAMES; i++) {
    printf("GAME %d.\n---\n", i + 1);

    for (int j = 0; j < NO_OF_PLAYERS; j++) {
      printf("Player %d: ", j + 1);
      scanf("%d", &stats[i][j]);
    }

    printf("\n");
  }
}

void populate_averages(void) {
  int total;
  float average;

  for (int i = 0; i < NO_OF_PLAYERS; i++) {
    total = 0; average = 0;
    for (int j = 0; j < NO_OF_GAMES; j++) {
      total += stats[j][i];
    }
    averages[i] = total / NO_OF_GAMES;
  }

  return;
}

int find_best_average(void) {
  int best = 0;
  for (int i = 1; i < NO_OF_PLAYERS; i++) {
    if (averages[best] < averages[i]) {
      best = i;
    }
  }
  return best;
}
