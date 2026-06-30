//code to rotate arrow left
#include <stdio.h>

int main()
{
    int a[100], n, i, first;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Store the first element
    first = a[0];

    // Shift elements to the left
    for(i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Place the first element at the end
    a[n - 1] = first;

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}