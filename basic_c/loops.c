#include<stdio.h>

int main(){
    printf("LOOPS for 1 to 10\n");
    printf("while loops----------\n");
    int n = 0;
    while(n!=11){
        printf("%d\n",n);
        n++;
    }

    printf("for loops------------\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}