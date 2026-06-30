//code to second largest element
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = secondLargest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d\n", secondLargest);

    return 0;
}