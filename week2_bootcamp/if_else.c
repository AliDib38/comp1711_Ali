#include<stdio.h>

int main() {
    int mark;
    printf("what was your mark?\n");
    scanf("%d", &mark);

if (mark < 0 && mark > 100) {
    printf("Mark is invalid");
}
else if (mark >= 40) {
printf("congratulations\n The mark of %d is a pass\n");
}
else if (mark < 40)
printf("sorry\n The mark of %d is a fail\n");
return 0;
}