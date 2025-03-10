#include<stdio.h>
int main(){
    float a, b, c, Avg;
    scanf("%f %f %f", &a, &b, &c, &Avg);
    
    Avg = (a + b + c)/3;
    printf("Average: %.2f", Avg);

}