#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number whose multiplication table is to be printed :- ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d \n", num, i+1, num * (i+1));
    }
    return 0;
}