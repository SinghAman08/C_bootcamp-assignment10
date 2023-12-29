// Date-> 12/23/23 ,Author Name = Aman Singh

// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
/*
Formula of calculating permuatation -->
==>  (n!) / (n-r)!
*/
#include <stdio.h>
int perm(int, int);
int fact(int x)
{
    int num = 1;
    for (int i = 1; i <= x; i++)
        num = num * i;
    return num;
}
int main()
{
    int n, r;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &r);
    printf("Permutation = %d\n\n", perm(n, r));
    return 0;
}

int perm(int x, int y)
{
    return (fact(x)) / (fact(x - y));
}