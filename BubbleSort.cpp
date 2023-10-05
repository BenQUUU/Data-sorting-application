#include "BubbleSort.hpp"
#include <iostream>
#include <vector>


std::vector<int> BubbleSort::sort(std::vector<int> arr){
    int n = arr.size();
    std::vector<int> new_arr = arr;
        for(std::size_t i = 0; i < n - 1; i++) {
            for(std::size_t j = 0; j < n - i - 1; j++) {
                if (new_arr[j] > new_arr[j + 1]) {
                    std::swap(new_arr[j], new_arr[j + 1]);
                }
            }
        }
        return new_arr;
}

