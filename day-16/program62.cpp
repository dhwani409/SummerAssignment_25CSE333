//code to find maximum frequecy element
#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int maxCount = 0, maxElement;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        // Skip if element is already counted
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
                break;
        }

        if(j != i)
            continue;

        // Count frequency
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxElement = a[i];
        }
    }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);

    return 0;
}