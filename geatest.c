#include <stdio.h>
int main()
{
    int n, value = 0;
    printf("Enter size:");
    scanf("%d", &n);
    printf("Enter values:\n");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        
    }
    value = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > value)
        {
            value=array[i];
        }
    }
    printf("Greatest number is %d\n", value);
    return 0;
}