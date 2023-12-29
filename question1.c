// Date-> 12/22/23 ,Author Name = Aman Singh

// 1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
float area_of_circul(float);
int main()
{
    float radius, area;
    printf("Enter the radius of a circul\n");
    scanf("%f", &radius);
    area = area_of_circul(radius);
    printf("Area of circul is %.1f", area);
    return 0;
}

float area_of_circul(float r)
{
    return 3.14 * (r * r);
}
