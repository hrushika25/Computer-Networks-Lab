#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y) (x>y)?y:x

int main()
{
    int i,orate,nsec,cap,drop,count=0;
    int inp[10]={0};

    printf("Enter bucket size: ");
    scanf("%d",&cap);

    printf("Enter output rate: ");
    scanf("%d",&orate);

    int select=1;
    do{
        print("Enter value of no. of packets coming in at time %d",i+1);
        scanf("%d",&inp[i]);
        i++;

        printf("Enter 1 to continue & 0 to end");
        scanf("%d",&select);

    }while(select);

    nsec=i;
    printf("Second\trecieved\tsent\tdropped\tremained");

    for(i=0;count || i<nsec;i++)
    {
        printf("%d",i+1);
        printf("\t%d\t",inp[i]);
        printf("%d",MIN(inp[i]+count,orate));
    }


}