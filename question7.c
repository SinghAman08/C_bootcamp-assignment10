// Date-> 12/23/23 ,Author Name = Aman Singh

// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
/*

formula of calculatin combination-->

==>  (n!) / r!(n-r)!

*/

#include <stdio.h>
int comb(int,int);
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
    printf("Combinatation = %d\n\n", comb(n, r));
    return 0;
}

int comb(int x, int y)
{
    return (fact(x)) / (fact(y) * (fact(x - y)));
}