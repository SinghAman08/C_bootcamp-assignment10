// Date-> 12/22/23 ,Author Name = Aman Singh

// 4. Write a function to print first N natural numbers (TSRN)

void FirstNaturalNumber(int);
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to print first N natural numbers: ");
    scanf("%d", &n);

    FirstNaturalNumber(n);
    return 0;
}
void FirstNaturalNumber(int number)
{
    for (int i = 1; i <= number; i++)
        printf("%d ", i);
}