// Date-> 12/22/23 ,Author Name = Aman Singh

// 5. Write a function to print first N odd natural numbers. (TSRN)

void FirstOddNumbers(int);
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number to print first N odd numbers: ");
    scanf("%d", &n);

    FirstOddNumbers(n);
    return 0;
}
void FirstOddNumbers(int number)
{
    int num = 1;
    for (int i = 1; i <= number; i++)
    {
        printf("%d ", num);
        num += 2;
    }
}