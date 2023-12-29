// Date-> 12/22/23 ,Author Name = Aman Singh

// 2. Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

float simple_interest(float principal, float rate, float year)
{
    return (principal * rate * year) / 100;
}
int main()
{
    float p, r, y, s_interest;
    printf("Enter the Principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of simple interest: ");
    scanf("%f", &r);
    printf("Enter the year: ");
    scanf("%f", &y);

    s_interest = simple_interest(p, r, y);
    printf("Simple interest is %.1f\n", s_interest);
    
    return 0;
}