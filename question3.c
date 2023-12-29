// Date-> 12/22/23 ,Author Name = Aman Singh

// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int cheak_EvenOdd(int);
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if (cheak_EvenOdd(num) == 1)
        printf("%d is a even number\n", num);
    else
        printf("%d is a odd number", num);
    return 0;
}
int cheak_EvenOdd(int number)
{
    return !(number % 2);
}
