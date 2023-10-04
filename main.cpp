#include <iostream>
#include <vector>
#include "DataGenerator.hpp"


int main(){
    unsigned int size = 10;
    DataGenerator cosik(size);
    std::vector<int> data = cosik.generate_vector();
    for(int i = 0; i < size; i++){
        std::cout << data[i] << " ";
    }

    return 0;
}