#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] == max)
            arr[i] = min;
        else if (arr[i] == min)
            arr[i] = max;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}