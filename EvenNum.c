#include<stdio.h>

void main()
{     
    int i,j,prime,count;
    
    for(i=1;i<=300;i++)
    {   count=i/2;
        prime=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            prime=prime+1;
            break;
        }
        if(prime==0)
        {
            printf("This Is Prime Number %d \n",i);
        }
    }


}
