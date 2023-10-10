#include <iostream>
#include <vector>
#include "../include/BubbleSort.hpp"
#include "../include/DataGenerator.hpp"
#include "../include/QuickSort.hpp"
#include "../include/HeapSort.hpp"
#include "../include/CountingSort.hpp"

/**
 * /author Michał Kolczak
*/


int main(){
    unsigned int size = 10;
    DataGenerator cosik(size);
    std::vector<int> data = cosik.generate_vector();
    //std::vector<char> data = {'b', 'a', 'y', 'f'};
    // for(auto element: data){
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;

    // BubbleSort<int> cos;
    // std::vector<int> arr = cos.sort(data);
    //  for(auto element: arr){
    //     std::cout << element << " ";
    // }

    // QuickSort<int> cos;
    // cos.sort(data, 0, size - 1);

    for(auto element: data){
        std::cout << element << " ";
    }

    std::cout << std::endl;

    // HeapSort<char> cos;
    // cos.sort(data);

    CountingSort<int> cos;
    cos.sort(data);

    for(auto element: data){
        std::cout << element << " ";
    }

    std::cout << std::endl;

    return 0;
}