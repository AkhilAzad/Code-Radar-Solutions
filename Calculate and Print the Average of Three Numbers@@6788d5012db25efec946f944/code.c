#include<stdio.h>
int main(){
    int a, b, c, Avg;
    scanf("%d %d %d", &a, &b, &c, &Avg);
    
    Avg = (a + b + c)/3;
    printf("Average: %f", Avg);

}