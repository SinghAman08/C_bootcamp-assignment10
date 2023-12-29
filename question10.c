// Date-> 12/29/23 ,Author Name = Aman Singh

// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
void AllPrimeFactors(int num)
{
    printf("\nAll prime factors of %d are below ------>\n");
    int var = 2;
    while (num >= var)
    {
        if (num % var == 0)
        {
            printf("%d ", var);
            num /= var;
        }
        else
            var++;
    }
    printf("\n\n");
}
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    AllPrimeFactors(num);
    return 0;
}
