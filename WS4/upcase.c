#include <stdio.h>

int upcase(char str1[], char str2[]) {
    int i = 0;
    while(str2[i]) {
        char c = str2[i];
        if(i % 2 == 0) {
            if(c <= 122 && c >= 97) {
                c -= 32;
            }
        }
        str1[i] = c;
        i++;
    }
    return i;
}

int main() {
    char A[50];
    int x;
    x = upcase(A, "Hello!");
    printf("After %d replacements, A holds %s\n",x, A);
    return 0;
}