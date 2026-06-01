#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int idx, val;
    scanf("%d %d", &idx, &val);
    arr[n] = arr[n + 1];

    for (int i = n; i >= idx + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = val;

    printf("\n");

    for (int i = 0; i < n + 1; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}