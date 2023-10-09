#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <vector>

template<class T>
class QuickSort{
public:
    void sort(std::vector<T>& arr, size_t low, size_t high);
};

template<class T>
void QuickSort<T>::sort(std::vector<T>& arr, size_t left, size_t right){
    if(right <= left){
        return;
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
        sort(arr, left, j);
    }
    if(i < right){
        sort(arr, i, right);
    }
}

#endif