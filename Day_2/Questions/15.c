#include<math.h>
#include<stdio.h>

int main()
{
    int num,square;
    printf("Enter a number: ");
    scanf("%d",&num);
    square=pow(num,2);
    printf("The sqaure of %d is %d\n",num,square);
}