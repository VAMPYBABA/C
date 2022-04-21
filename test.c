#include <stdio.h>
void main()
{
    int i,j,temp;
    int a[9]={11,5,18,14,1,8,42,21,29};
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        {   
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];dw
                a[j] = temp;    
            }
        }
    }
        printf("Printing Sorted element list\n"); 
        for(i=0;i<9;i++)
        {
            printf("%d \n",a[i]);
        }
} 