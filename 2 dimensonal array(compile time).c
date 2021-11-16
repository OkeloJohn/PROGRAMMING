#include<stdio.h>
int main()
{
    int a[3][3]={10,20,30,40,50,60,70,80,90}; //compile time initialization
    int i,j;
    printf("elements of array are:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \n",a[i][j]);
            printf("\n");
        }
    }
}
