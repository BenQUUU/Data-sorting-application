#include "../include/DataGenerator.hpp"


DataGenerator::DataGenerator(size_t size)
    : vectorSize_(size) {}

std::vector<int> DataGenerator::generate_vector() {
    std::vector<int> data;
    data.reserve(vectorSize_);

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 1000);  // numbers 1 - 1000

    for (size_t i = 0; i < vectorSize_; i++) {
        int number = distribution(generator);
        data.push_back(number);
    }

    return data;
}
