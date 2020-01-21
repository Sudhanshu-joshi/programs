Program1:- Write a program to print a star pattern.
Created by : Sudhanshu Joshi
Date : 21/01/2020 


#include <stdio.h>

int main()
{
    int i,j,k,n;

    printf("enter user input");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
k=1;
for(j=1;j<=n*2-1;j++)
if((j>=n+1-i) && (j<=n-1+i) &&k)
{
    printf("*");
    k=0;
}
else
{
 printf(" ");
 k=1;
}
printf("\n");
}
for(i=n;i>=1;i--)
{
k=1;
for(j=1;j<=n*2-1;j++)
if((j>=n+1-i) && (j<=n-1+i) &&k)
{
    printf("*");
    k=0;
}
else
{
 printf(" ");
 k=1;
}
printf("\n");
}


    return 0;
}


   

