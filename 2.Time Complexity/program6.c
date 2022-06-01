// This is a partially implemented code snippet
#include<stdio.h>
int isPrime(int n)
{

    if (n == 1)
    {
        return 0;
    }

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number\n", n);
            return 0;
        }  
        else{
            printf("%d is a prime number\n", n);
            return 1;
        }
    }


    return 1;
}
int main(){
    isPrime(17);
    return 0;
}