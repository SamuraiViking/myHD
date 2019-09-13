#include<stdio.h>
#include<math.h>

void printSqRootsUpToNum(num) {
  for(int i = 0; i <= num; i++) {
    float sqNum = sqrt(i);
    printf("%d: %f\n", i, sqNum);
  }
}

void printFactorial(num) {
  int factorial = 1;
  for(int i = 0; i < num; i++) {
    if(i == 0 || i == 1) {
      printf("%d: %d\n", i, factorial);
    } else {
    factorial *= i;
    printf("%d: %d\n", i, factorial);
    }
  }
}

int main() {
  // printSqRootsUpToNum(5);
  printFactorial(10);
  return 0;
}