#ifndef DATAGENERATOR_HPP
#define DATAGENERATOR_HPP

#include <cstddef>
#include <vector>

class DataGenerator {
public:
    DataGenerator(size_t size);
    std::vector<int> generate_vector();

private:
    const size_t vector_size;
};

#endif