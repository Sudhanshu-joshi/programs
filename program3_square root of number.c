Program3:-Write a program to square root of any given number.
Created by:Sudhanshu Joshi
Date:21/01/2020


#include <stdio.h>

int main()
{
    int n;
    float sqrt,temp;
    sqrt=n/2;
    temp=0;
    printf("enter user input");
scanf("%d",&n);
while(sqrt!=temp)
{
    temp=sqrt;
    sqrt=(n/temp+temp)/2;
    
    
}

printf("square root of number is: %f" ,sqrt);
    

    return 0;
}
