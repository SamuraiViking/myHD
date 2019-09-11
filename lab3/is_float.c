#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

float printSign(float num) {
  if(num > 0) {
    printf("%f is positive\n", num);
  } else if(num == 0) {
    printf("%f is zero\n", num);
  } else {
    printf("%f is negative\n", num);
  }
  return num;
}

bool isInt(float num) {
  return (int)num == num;
}

void printIsInt(float num) {
  printf(isInt(num) ? "%f is an integer\n" : "%f is not an integer\n", num);
}


int main() {

  printSign(7.3);
  printIsInt(10.00);

  return 0;

}

