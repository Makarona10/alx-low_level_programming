#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t mid, x;
    int l, h;

    h = size - 1;
    l = 0;
    mid = size;

    for (; size > 0; size--)
    {
        printf("Searching in array: ");
        for (x = l; x <= h; x++)
        {
            if (x < h)
                printf("%d, ", array[x]);
            else
                printf("%d\n", array[x]);
        }
        mid = (h + l) / 2;
        if (array[mid] == value)
            return (mid);
        if (value < array[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }

    return (-1);

    // mid = size / 2;
    // current = array;
    // cur = current[mid];

    // if (current[mid] == value)
    //     return (mid);
    // if (size == 1)
    //     return (-1);

    // if (value > current[mid])
    // {
    //     if (size % 2 == 0)
    //         linear_search((current + mid + 1), ((size / 2) - 1), value);
    //     else
    //         linear_search((current + mid + 1), (size / 2), value);
    // }
    // else
    //     linear_search((current), (size / 2), value);
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 13, 15};
    int x = linear_search(arr, 10, 3);
    printf("%d\n", x);
    return 1;
}