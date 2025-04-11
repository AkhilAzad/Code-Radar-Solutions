#include<stdio.h>
int main(){
    int a, b, shift;
    scanf("%d%d", &a, &b, &shift);
    int resultA = a << shift;
    int resultB = b << shift;
    printf("%d\n", a, shift, resultA);
    printf("%d\n", b, shift, resultB);
}