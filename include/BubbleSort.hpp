#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include <string>
#include <vector>
#include "SortBase.hpp"

template <class T>
class BubbleSort : public SortBase<T> {
public:
    void sort(std::vector<T>& arr) override;
    std::string getName() const override;
};

template <class T>
std::string BubbleSort<T>::getName() const {
    return "Bubble Sort";
}

template <class T>
void BubbleSort<T>::sort(std::vector<T>& arr) {
    int n = arr.size();
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
#endif