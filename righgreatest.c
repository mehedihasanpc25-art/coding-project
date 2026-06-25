#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int array[n];
    printf("Enter values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]); 
    }                                                           
    for(int i=0;i<n;i++)
    {
        if(array[i]<array[i+1])
        {
            printf("%d\n",array[i+1]);
        }                                                             
    }
    return 0;
}