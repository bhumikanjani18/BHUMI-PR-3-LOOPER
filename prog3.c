#include<stdio.h>

int main()
{
    int num,firstDigit,lastDigit,sum;

    printf("Enter a num: ");
    scanf("%d",&num);

    lastDigit = num%10;

    while(num>=10)
    {
        num = num / 10;

    }

    firstDigit = num;
    sum = firstDigit + lastDigit;

    printf("Sum of First and Last digit is: %d",sum);
    return 0;
    
}