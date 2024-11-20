#include<stdio.h>

int main(){
    int number;
    printf("grade calculater\n");

    printf("enter your marks:");
    scanf("%d",&number);

    if (number >= 95 && number <=100)
        printf("A+");
    else if(number >=90 && number < 95)
        printf("A");
    else if(number >=85 && number < 90)
        printf("B+");
    else if(number >=80 && number < 85)
        printf("B");
    else if(number >=70 && number < 80)
        printf("C");
    else if(number >=60 && number < 70)
        printf("D");
    else if(number >=40 && number < 60)
        printf("E");
    else if(number >= 0 && number < 40)
        printf("F");
    else if(number < 0)
        printf("numbers cant be negative.");
    else
        printf("your marks is invalid plz correct it.");
    return 0;
}