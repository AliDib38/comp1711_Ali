#include<stdio.h>

int main () {
    int a;
    printf("What is your number?\n");
    scanf("%d", &a);
if (a / 5 && a /4)
    printf("The number is divisble by both 4 and 5\n");
else 
    printf("The number is not divisible by 4 and 5\n");
    return 0;
}