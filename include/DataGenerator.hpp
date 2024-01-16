#ifndef DATAGENERATOR_HPP
#define DATAGENERATOR_HPP

#include <vector>

class DataGenerator{
private:
    size_t vector_size{0};
public:
    DataGenerator(size_t size);
    std::vector<int> generate_vector();
};


#endif