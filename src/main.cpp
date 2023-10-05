#include <iostream>
#include <vector>
#include "../include/BubbleSort.hpp"
#include "../include/DataGenerator.hpp"


int main(){
    unsigned int size = 10000;
    DataGenerator cosik(size);
    std::vector<int> data = cosik.generate_vector();
    // for(int i = 0; i < size; i++){
    //     std::cout << data[i] << " ";
    // }
    // std::cout << std::endl;

    BubbleSort cos;
    std::vector<int> arr = cos.sort(data);
     for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}