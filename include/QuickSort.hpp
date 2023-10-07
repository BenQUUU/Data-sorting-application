#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <vector>

class QuickSort{
public:
    std::vector<int> sort(std::vector<int> arr, size_t low, size_t high);
};

#endif