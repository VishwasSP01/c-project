#include <stdio.h>

void biggest3() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    // Read input from the user and check if successful
    if (scanf("%d %d %d", &num1, &num2, &num3) == 3) {
        if (num1 >= num2 && num1 >= num3) {
            printf("%d is the largest number.\n\n", num1);
        } else if (num2 >= num1 && num2 >= num3) {
            printf("%d is the largest number.\n\n", num2);
        } else {
            printf("%d is the largest number.\n\n", num3);
        }
    } else {
        printf("Invalid input.\n\n");
    }

//    return 0;
}

