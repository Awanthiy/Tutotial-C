//7.	Input two numbers, swap the values and display the output. ( Before swap and after swap)
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function to swap the values
    swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
 #include <stdio.h>
#include <stdlib.h>



void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function to swap the values
    swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
