// Date-> 12/23/23 ,Author Name = Aman Singh

// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>

int fact(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("factorial of %d is %d", x, fact(x));
    return 0;
}

int fact(int x)
{
    int num = 1;
    for (int i = 1; i <= x; i++)
        num = num * i;
    return num;
}
/*
num = 1 * 1 == 1
i = 2;
num = 1 * 2 == 2
i = 3;
num = 2*3 == 6;
i = 4;
num = 6 * 4 == 24;
i = 5;
num = 24 * 5 == 120

*/