//code to frequency of an element
#include <stdio.h>

int main()
{
    int a[100], n, i, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}