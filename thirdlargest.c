#include <stdio.h>
int main()
{
    int n,first,second,third;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter value:\n");
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(i==0)
        {
            first=second=third=array[i];
        }
        else if(array[i]>first)
        {
            third=second;
            second=first;
            first=array[i];
        }
        else if(array[i]>second && array[i]!=first)
        {
            third=second;
            second=array[i];
        }
        else if(array[i]>third && array[i]!=first && array[i]!=second)
        {
            third=array[i];
        }
    }
    printf("Top 3 number's are:%d<%d<%d\n",third,second,first);
    return 0;
}