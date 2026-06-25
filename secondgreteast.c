#include <stdio.h>
int main()
{
    int n, value = 0, new = 0;
    printf("Enter size:");
    scanf("%d", &n);
    printf("Enter values:\n");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (i == 0)
        {
            value = array[i];
        }
        else if (array[i] > value)
        {
            value = array[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            new = array[i];
        }
        else if (value > array[i] && array[i] > new)
        {
            new = array[i];
        }
    }
    printf("2nd greatest number is %d\n", new);
    return 0;
}