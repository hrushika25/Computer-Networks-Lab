#include<stdio.h>

int compute(int a, int m, int n)
{
    int r,y;
    y=1;
    while(m > 0)
    {
        r = m % 2;
        if(r==1)
        {
            y = (y*a) %n;
        }
        a= (a*a) % n;
        m = m/2;
    }
    return y;
}
int main()
{
    int p,g,a,b,A,B,keyA,keyB;

    p=23;
    g=5;

    a=6;
    b=15;

    A= compute(g,a,p);
    B = compute(g,b,p);

    keyA = compute(B,a,p);
    keyB = compute(A,b,p);
    printf("Alice's secret key is: %d \nBob's secret key: %d\n",keyA,keyB);
    
}