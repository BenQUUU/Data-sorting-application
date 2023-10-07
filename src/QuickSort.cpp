#include <iostream>
#include <vector>

#include "../include/QuickSort.hpp"

std::vector<int> QuickSort::sort(std::vector<int> arr, size_t left, size_t right){
    if(right <= left){
        return arr;
    }
    
    size_t i = left - 1;
    size_t j = right + 1;
    size_t pivot = arr[(left + right) / 2];

    while(1){
        while(pivot > arr[++i]);

        while(pivot < arr[--j]);

        if(i <= j){
            std::swap(arr[i], arr[j]);
        }
        else break;
    }

    if(j > left){
        arr = sort(arr, left, j);
    }
    if(i < right){
        arr = sort(arr, i, right);
    }

    return arr;
}