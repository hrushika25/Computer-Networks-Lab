#include<stdio.h>
#include<math.h>

int gcd(int a, int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    double p = 3,x;
    double q = 7;
    double n = p*q;
    double totient = (p-1)*(q-1);
    double k,d,e;
    e=2;
    while(e<totient)
    {
        x = gcd(e,totient);
        if(x==1)
        {

            break;
        }
        e++;

    }

    d=(1+(k*totient))/e;
    double m,c;
    double msg=12;
    c = pow(msg,e);
    m = pow(c,d);

    c = fmod(c,n);
    m = fmod(m,n);

     printf("Message data = %lf",msg);
    printf("\np = %lf",p);
    printf("\nq = %lf",q);
    printf("\nn = pq = %lf",n);
    printf("\ntotient = %lf",totient);
    printf("\ne = %lf",e);
    printf("\nd = %lf",d);
    printf("\nEncrypted data = %lf",c);
    printf("\nOriginal Message Sent = %lf",m);
}