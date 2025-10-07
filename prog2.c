#include<stdio.h>

int main()
{
    int num, count=0;

    printf("Enter a num: ");
    scanf("%d", &num);

    for(; num != 0; num /= 10)
    {
        count++;
    }
    printf("Total digit is: %d", count);

    return 0;    
}