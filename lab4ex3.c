#include "stdio.h"
#include "math.h"

int main() {
  float j, i, s, p = 0;
  for (i = 2; i <= 7; i++) {
    for (s = 1, j = 1; j <= i-1; j++) {
      s *= i/j;
    }
    p += s;
  }
  printf("\n***Результати***\n");
  printf("Відповідь: ");
  printf("%.f\n", p);
  return 0;
}
