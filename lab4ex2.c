#include "stdio.h"
int main() {
int i,s,k;

printf("\nВиберіть яким способом виконати программу\n");
printf("1-(цикл for), 2-(цикл while), 3-(цикл do while), 4 - Вийти: ");
printf("Введіть: ");
scanf("%d",&k);

if (k == 1) {
  s=0;
  for(i=20;i<=30;i++) {
    if (i%2 != 0) {
      s+=i*i;
    }
  }
  printf("%d Цикл For\n",s);

}
else if (k==2) {
  s=0;
  i=20;
  while(i<=30) {
    if (i%2 != 0) {
      s+=i*i;
    }
    i++;
  }
  printf("%d Цикл while\n",s);
}
else if (k==3) {
  s=0;
  i=20;
  do {
    if (i%2 != 0) {
      s+=i*i;
    }
    i++;
  } while(i<=30);

  printf("%d Цикл do while\n",s);
}

return 0;

}
