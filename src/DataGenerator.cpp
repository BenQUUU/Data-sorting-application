#include <iostream>
#include <vector>
#include <random>
#include "../include/DataGenerator.hpp"

DataGenerator::DataGenerator(size_t size): vector_size(size) {}

std::vector<int> DataGenerator::generate_vector(){
    std::vector<int> data(vector_size);

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 1000); //numbers 1 - 1000

    for(size_t i = 0; i < vector_size; i++){
        int number = distribution(generator);
        data.push_back(number);
    }

    return data;
}