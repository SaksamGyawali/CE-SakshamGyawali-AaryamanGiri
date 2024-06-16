
#include "insertion.h"

void insertionSort(std::vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        int key = arr[i];
        std::size_t j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            if (j == 0)
            {
                break;
            }
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
