#include<stdio.h>

int max(num1, num2) {
  return num1 > num2 ? num1 : num2;
}

int main() {
  int num1 = 10;
  int num2 = 20;
  int max_num = max(num1, num2);
  printf("The max of %d and %d is %d\n", num1, num2,max_num);
}