#include<stdio.h>

int rotate(char * str1, char * str2)
{
    int i = 0;
    while(str2[i++]) {
        str1[i] = str2[i];
    }
    i--;
    str1[i] = str2[0];
    return i;
}

int main() {
   char A[50];
    int x;
    x = rotate(A, "Hello!");
    printf("After rotating %d characters, A[] holds %s\n",x, A);
    return 0;
}