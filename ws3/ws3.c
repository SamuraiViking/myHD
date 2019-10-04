#include<stdio.h>



int input_array(int arr[], int size) {
  int i;
  for(i = 0; i < size; i++) {
    int input;
    scanf("%d", &input);
    if(&input == EOF) break;
    arr[i] = input;
  }
  return i;
}

int main() {

  int arr[5];
  int input_size;
  printf("Enter up to %d integer values: ", 5);
  printf("%d",input_array(arr, 5));

  return 0;
}