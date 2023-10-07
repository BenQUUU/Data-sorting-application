#include <iostream>
#include <vector>
#include <random>
#include "../include/DataGenerator.hpp"

DataGenerator::DataGenerator(size_t size): vector_size(size){}

int DataGenerator::generate_number_to_vector(){
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 1000); //numbers 1 - 100

    int random_number = distribution(generator);

    return random_number;
}

std::vector<int> DataGenerator::generate_vector(){
    std::vector<int> data;

    for(size_t i = 0; i < vector_size; i++){
        int number = generate_number_to_vector();
        data.push_back(number);
    }

    return data;
}