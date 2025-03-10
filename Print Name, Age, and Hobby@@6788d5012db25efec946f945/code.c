#include<stdio.h>
int main(){
    char Name[100], favorite_hobby[100];
    int age;
    scanf("%s%d%s", &Name, &age, &favorite_hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", Name, age, favorite_hobby );

}