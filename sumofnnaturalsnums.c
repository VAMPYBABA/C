#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter last naturals number you want sum of : ");
    scanf("%d", &num);
    /*1 way*/
    sum = (num * (num + 1)) / 2;
    /*2nd way*/
    /*for (int i = 0; i <= num; i++)
    {
        sum = sum +i;
    }*/
    printf("Sum of first %d natural numbers is : %d \n", num, sum);

    return 0;
}