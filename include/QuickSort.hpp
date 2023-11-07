#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <vector>
#include <string>
#include "SortBase.hpp"

template<class T>
class QuickSort : public SortBase<T>{
private:
    void sort(std::vector<T>& arr, size_t low, size_t high);
public:
    void sort(std::vector<T>& arr) override{
        sort(arr, 0, arr.size() - 1);
    }
    std::string getName() const override;
};

template<class T>
std::string QuickSort<T>::getName() const{
    return "Quick Sort";
}

template<class T>
void QuickSort<T>::sort(std::vector<T>& arr, size_t left, size_t right){
    if (left < right) {
        size_t i = left;
        size_t j = right;
        size_t pivot = arr[left + (right - left) / 2];

        while (i <= j) {
            while (arr[i] < pivot) i++;
            while (arr[j] > pivot) j--;

            if (i <= j) {
                std::swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }

        if (left < j) {
            sort(arr, left, j);
        }
        if (i < right) {
            sort(arr, i, right);
        }
    }
}

#endif