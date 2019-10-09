#include <stdio.h>

int main() {

    char A[50] = "Hello World";
    
    int i = 0;
    while(A[i]) {
        i++;
    }

    printf("The length of the array is %d\n", i);
    return 0;
}