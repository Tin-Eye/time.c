#include <stdio.h>


int main(void) {

    int number;

    printf("Enter a number that has up to 4 digits :");
    scanf("%d", &number);

    if (number <= 9) {
        printf("One digit number");

    } else if (number <= 99) {
        printf("Two digit number");

    } else if (number <= 999) {
        printf("Three digit number");

    } else if (number <= 9999) {
        printf("four digits number");
    }else {
        printf("too many digits or just wrong.");
    }




    return 0;
}