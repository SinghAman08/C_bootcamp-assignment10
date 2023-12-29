// Date-> 12/29/23 ,Author Name = Aman Singh

// 9. Write a function to check whether a given number contains a given digit or not.(TSRS)

#include <stdio.h>
int CheakDigit(int num);
int main()
{
    int num, NumOfDigit;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Your Number is %d\n", num);

    printf("Now Enter a number to cheak this number of digit are contained which you enterd number before: ");
    scanf("%d", &NumOfDigit);

    if (CheakDigit(num) == NumOfDigit)
        printf("\nYes, Your Number is %d and number of digit is %d which you told right.\n\n", num, NumOfDigit);
    else
        printf("\nNO, Your number is %d but number of digit is diffrent as you enterd number of digit %d\n\n", num,NumOfDigit);

    return 0;
}
int CheakDigit(int num)
{
    int var = 1;
    while (num >= 10)
    {
        // num = num / 10;
        num /= 10;
        var++;
    }
    return var;
}