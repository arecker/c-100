#include <stdio.h>

struct coordinate {
  int x;
  int y;
};

struct rectangle {
  struct coordinate top_left;
  struct coordinate bottom_right;
};

struct coordinate prompt_for_coordinate(char *prompt);
int calculate_area(struct rectangle rect);

int main(void) {
  struct rectangle rect = {
    prompt_for_coordinate("Top left"),
    prompt_for_coordinate("Bottom right"),
  };

  printf("Area: %d\n", calculate_area(rect));

  return 0;
}

struct coordinate prompt_for_coordinate(char prompt[]) {
  struct coordinate point;
  printf("%s x: ", prompt);
  scanf("%d", &point.x);
  printf("%s y: ", prompt);
  scanf("%d", &point.y);
  return point;
}

int calculate_area(struct rectangle rect) {
  int width = rect.top_left.x - rect.bottom_right.x;
  int height = rect.top_left.y - rect.bottom_right.y;
  return (long) width * height;
}
