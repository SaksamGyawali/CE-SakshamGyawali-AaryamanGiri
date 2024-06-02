#include <iostream>
#include "quicksort.h"
#include <vector>
#include <random>

void printArray(std::vector<int>array, int size){
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
        std::cout << std::endl;
    }
}

int main(){
    std::random_device rd;
    std::mt19937 engine(rd());
    std::uniform_int_distribution<> dis(0,999);

    srand(time_t(NULL));

    std::vector<int>array;
    for(int a = 0; a < 7; a++){
        array.push_back(rand()%100);
    }

    std::cout << "Original array: " << std::endl;
    printArray(array, array.size());

    quicksort(array, 0, (array.size()-1));

    std::cout << "Array after sorting: " << std::endl;
    printArray(array, array.size());

    return 0;
}