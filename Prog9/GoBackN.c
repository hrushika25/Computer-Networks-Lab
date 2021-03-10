#include<stdio.h>

int main()
{
    int w,i,f;
    int frames[50];

    printf("Enter size of window: ");
    scanf("%d",&w);

    printf("\nEnter no. of frames");
    scanf("%d",&f);

    printf("Enter %d frames",f);
    for(i=1;i<=f;i++)
        scanf("%d",&frames[i]);

    printf("\nThe frames are sent in the following order(assuming no corruption is occurring\n ");
    printf("After %d frames are sent acknowledgment is sent",w);

    for(i=1;i<=f;i++)
    {
        if(i % w == 0)
        {
            printf("%d",frames[i]);
            printf("ACK sent is recieved by the sender");


        }
        else
        {
            printf("%d",frames[i]);
        }
        

    }

    if(f % w != 0)
    {
        printf("ACK sent is recieved by sender");
    }
}