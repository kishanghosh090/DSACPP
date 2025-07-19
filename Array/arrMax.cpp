#include <limits.h>
#define MIN INT_MIN
int arrMax(int arr[])
{
    int a = MIN;

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    return a;
}