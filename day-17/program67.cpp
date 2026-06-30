//code to intersection of arrays
#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n1, n2, i, j, k, found;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Intersection of arrays:\n");

    for(i = 0; i < n1; i++)
    {
        found = 0;

        // Check if already printed
        for(k = 0; k < i; k++)
        {
            if(a[i] == a[k])
            {
                found = 1;
                break;
            }
        }

        if(found)
            continue;

        // Check if present in second array
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}