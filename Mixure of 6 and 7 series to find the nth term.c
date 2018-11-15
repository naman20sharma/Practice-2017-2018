/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void Odd(int n)
{
    int i, x=0;
    for(int i = 0; i < 30; i++)
    {
        x = i * 7;
        if(i==n)
        break;
    }
    printf("%d", x);
}

void Even(int n)
{
    int i,arr[100] = {0},x = 0;
    for(int i = 0; i < 30; i++)
    {
        x = i * 6;
        if(i==n)
        break;
    }
    printf("%d", x);
}

int main(int argc, char* argv[])
{
    int i,j,arr[50], even=1, odd =1;
    int n = atoi(argv[1]);
    printf("The %dth term\n", n);
        if(n%2 == 0)
        {
            Even((n/2)-1);
        }
        else 
        {
            Odd(n/2);
        }
    return 0;
}
