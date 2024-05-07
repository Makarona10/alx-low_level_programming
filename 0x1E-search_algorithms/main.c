#include "search_algos.h"



int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 13, 15};
    int x = linear_search(arr, 10, 3);
    printf("%d\n", x);
    return 1;
}