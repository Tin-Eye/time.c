#include <stdio.h>


int main(void) {
    int hour;
    int min;
    printf("Enter a time in xx:xx form :");
    scanf("%d:%d", &hour, &min);

    if (hour == 12) {
        printf("the time is 12:%02d pm \n", min);
    } else if (hour == 0) {
        printf("The time is 12:%02d am\n", min);
    } else if (hour > 0 && hour < 12) {
        printf("The time is %02d:%02d am\n", hour, min);
    } else {
        printf("time is %02d:%02d pm\n", hour % 12, min);
    }





    return 0;
}