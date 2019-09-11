#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

float printSign(float num) {
  if(num > 0) {
    printf("%f is positive", num);
  } else if(num == 0) {
    printf("%f is zero", num);
  } else {
    printf("%f is negative", num);
  }
  return num;
}


int main() {

  printSign(7.3);

  return 0;

}

