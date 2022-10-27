#include<stdio.h>

int main()
{
    int num,i,m=0,temp=0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    m=num/2;
    for(i=2; i<=m; i++)
    {   
        if(num%i==0)
        {
            
            temp=1;
        }

    }

    if(temp==0)
    {
        printf("number is prime");

    }
    else{
        printf("numbrer is not prime");
    }
}