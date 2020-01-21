Program2:-Write a program to sum of all digits of number.
Created by:Sudhanshu Joshi
Date:21/01/2020


#include <stdio.h>

int main()
{
     long int n;
    int sum,i;
    sum=0;
    
    printf("enter user input");
scanf("%ld",&n);
while(n!=0)
{
    i=n%10;
    sum=sum+i;
    n=n/10;
}
printf("sum of all digit number is: %ld" ,sum);
    

    return 0;
}

