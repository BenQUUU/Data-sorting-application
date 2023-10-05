#ifndef DATAGENERATOR_HPP
#define DATAGENERATOR_HPP

#include <vector>

class DataGenerator{
private:
    unsigned int vector_size = 0;
public:
    DataGenerator(unsigned int size);
    int generate_number_to_vector();
    std::vector<int> generate_vector();
};


#endif