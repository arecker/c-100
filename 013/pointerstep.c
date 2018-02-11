#include <stdio.h>

struct employee {
  int id;
  char name[12];
};

int main(void) {
  struct employee employees[4] = {
    {1, "Thomas"},
    {2, "Christopher"},
    {3, "Andrew"},
    {4, "Benjamin"}
  };

  struct employee *iter = employees;

  for (int i = 0; i < 4; i++) {
    printf("At address %p, %s #%d\n", iter, iter->name, iter->id);
    iter++;
  }

  return 0;
}
