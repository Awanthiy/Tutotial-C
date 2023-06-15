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
