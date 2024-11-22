#include<stdio.h>

void addition(int x,int y); // This is function prototype.

int main()
{
    int number_1,number_2;
    printf("FUNCTION\n");

    printf("number_1:");
    scanf("%d",&number_1);

    printf("number_2:");
    scanf("%d",&number_2);

    addition(number_1,number_2); // This is function call.
    return 0;
}

void addition(int x,int y) // This is function definition.
{ 
    int result = x+y;
    printf("addition is %d",result);
}