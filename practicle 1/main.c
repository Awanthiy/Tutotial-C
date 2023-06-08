#include <stdio.h>
#include <stdlib.h>
//1.	Display your name and school name in two separate lines

int main()
{
    printf("My Name is Awanthi. \n");
    printf("My School is ST/Agnes Girls school.\n");
    return 0;
}

/*2.	Display the following output using printf() statements
*
**
***
****
*****
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    return 0;
}

//3.	Input values for int,float,double and char data types and display the value of each of the variable.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    double c;
    char d;

    printf("Enter a positive number : \n");
    scanf("%d",&a);

    printf("Enter a Decimal Number : \n");
    scanf("%f",&b);

    printf("Enter a Float");
    scanf("%Enter a Decimal Number : \n");

    printf("Enter a character")
    return 0;
}

//4.	Input two integers and display the total
#include <stdio.h>
#include <stdlib.h>
 int main()
{
    int a,b,Sum;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);
    Sum=a+b;
    printf("Sum is %d\n",Sum);
    scanf("%d=%d+%d");
    return 0;
}

//5.	Input two numbers with decimals and display the average with decimals
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,avg;

    printf("Enter first no: ");
    scanf("%f",&a);

    printf("Enter second no: ");
    scanf("%f",&b);

    avg=(a+b)/2;
    printf("Average is %f",avg);
    scanf("%f=(%F+%f)/2");


}

//6.	Input a student name, birth year and display student name with age.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int BYear,Age;
    char Name;
    printf("Student Name: ");
    scanf("%c",&Name);

    printf("Student's Birth Year is : ");
    scanf("%d",&BYear);
    Age=2023-BYear;

    printf("%c You are %d years old",Name,Age);


    return 0;
}

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



