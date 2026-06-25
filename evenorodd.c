#include <stdio.h>
int main()
{
    int n,even=0,odd=0;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter values:\n");
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        if((array[i]%2)==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even number's is/are %d\nOdd number's is/are %d\n",even,odd);
    return 0;
}