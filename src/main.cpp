#include <iostream>
#include <vector>
#include "../include/BubbleSort.hpp"
#include "../include/DataGenerator.hpp"
#include "../include/QuickSort.hpp"

/**
 * /author Michał Kolczak
*/


int main(){
    unsigned int size = 1000;
    DataGenerator cosik(size);
    std::vector<int> data = cosik.generate_vector();
    // for(int i = 0; i < size; i++){
    //     std::cout << data[i] << " ";
    // }
    // std::cout << std::endl;

    // BubbleSort cos;
    // std::vector<int> arr = cos.sort(data);
    //  for(int i = 0; i < size; i++){
    //     std::cout << arr[i] << " ";
    // }

    QuickSort cos;
    std::vector<int> arr = cos.sort(data, 0, size - 1);
    for(size_t i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}