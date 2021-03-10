#include<stdio.h>
#include<string.h>

int checksum(int fl)
{
    char in[100];
    int temp,n,sum=0,i;

    scanf("%s",in);

    if(strlen(in) % 2 !=0)
    {
        n = (strlen(in)+1)/2;
    }
    else
        n = (strlen(in))/2;

    for(i=0;i<n;i++)
    {
        temp = in[i*2];
        temp = (temp * 256) +in[(i*2)+1];
        sum = sum+temp;
    }

    if(fl == 1)
    {
        printf("Enter checksum: ");
        scanf("%x",&temp);
        sum = sum + temp;
    }

    if(sum % 65536 != 0)
    {
        n = sum % 65536;
        sum = (sum/65336) + n;
    }
    sum = 65535 - sum;
    printf("%x",sum);
    return sum;
}

int main()
{
    int ch,check;
    do{
        printf("\n1.Encode\n2.Decode\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("Enter string");
                    check =  checksum(0);
                    printf("The checksum is : %x",check);
                     break;
            case 2: printf("Enter string");
                    check = checksum(1);

                    if(check != 0)
                    {
                        printf("Some error occured or corruption of data");
                    }
                    else
                        printf("The checksum is valid");
                    break;
            case 3: break;
            default: printf("Error in input try again");
        }

    }while(ch!=3);
    return 0;
}