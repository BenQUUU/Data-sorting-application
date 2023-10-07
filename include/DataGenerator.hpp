#ifndef DATAGENERATOR_HPP
#define DATAGENERATOR_HPP

#include <vector>

class DataGenerator{
private:
    size_t vector_size = 0;
public:
    DataGenerator(size_t size);
    int generate_number_to_vector();
    std::vector<int> generate_vector();
};


#endif