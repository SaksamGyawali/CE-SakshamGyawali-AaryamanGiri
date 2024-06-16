
#include <iostream>
#include "insertion.h"
#include <vector>
#include <random>
#include <chrono>
#include <iomanip>

void printArray(const std::vector<int> &array)
{
    for (const int &num : array)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
{ //Finding random number for different arrays
    std::random_device rd;
    std::mt19937 engine(rd());
    std::uniform_int_distribution<> dis(0, 100000);

    int numarr = 6;                                         // Number of different array sizes
    int arraysize[6] = {100, 500, 1000, 2000, 5000, 10000}; // Array sizes

    for (int i = 0; i < numarr; ++i)
    {
        std::vector<int> array;
        array.reserve(arraysize[i]); // Reserve memory to avoid reallocations
        for (int a = 0; a < arraysize[i]; a++)
        {
            array.push_back(dis(engine));
        }

        std::cout << "Original array of size " << arraysize[i] << ": " << std::endl;

        const int repetitions = 10;
        std::chrono::duration<double, std::milli> total_duration(0);

        for (int r = 0; r < repetitions; ++r)
        {
            std::vector<int> array_copy = array; 

            auto start = std::chrono::high_resolution_clock::now();
            insertionSort(array_copy);
            auto end = std::chrono::high_resolution_clock::now();

            total_duration += end - start;
        }

        double average_duration = total_duration.count() / repetitions;

        std::vector<int> sorted_array = array;
        insertionSort(sorted_array);

        std::cout << "Array after sorting: " << std::endl;

        std::cout << "Average execution time for array " << i + 1 << ": "
                  << std::fixed << std::setprecision(6) << average_duration
                  << " milliseconds for array of size " << arraysize[i] << std::endl;
    }

    return 0;
}
