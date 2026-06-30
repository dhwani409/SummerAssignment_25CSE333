//code to roate arrow right
#include <stdio.h>

int main()
{
    int a[100], n, i, last;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Store the last element
    last = a[n - 1];

    // Shift elements to the right
    for(i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    // Place the last element at the beginning
    a[0] = last;

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
