#include <stdio.h>
#include <math.h>


int main() {
  //Оголошення змінних
  int m, c = 0;
  int x, y;
  float a;

  printf("\n^^^^^^^^^^^^^^^^^^^^^^\n");
  printf("Запустити програму - 1\n");
  printf("Вийти з програми - 2\n");
  printf("^^^^^^^^^^^^^^^^^^^^^^\n");

  while (1) {
    if (c == 0) {
      printf("\nВвести: ");
      scanf("%d", &m);
      c++;
    }
    else {
      printf("\n\n^^^^^^^^^^^^^^^^^^^^^^\n");
      printf("Ви можете спробувати ще раз - 1 \nВийти з програми - 2\n");
      printf("^^^^^^^^^^^^^^^^^^^^^^\n");
      printf("Ввести: ");
      scanf("%d", &m);
    }

    if (m==1) {
      //Введення даних
      printf("\nВведіть значення x: ");
      scanf("%d", &x);
      printf("Введіть значення y: ");
      scanf("%d", &y);

      a = (1+y) * ((x + (y / (pow(x,2) + 4))) / (exp(-x-2) + (1 / (pow(x,2) + 4))));
      // Виведення
      printf("\nВідповідь: a = %.2f", a);

    }

    else{
      break;
    }
  }
  return 0;
}
