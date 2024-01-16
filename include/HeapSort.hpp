#ifndef HEAPSORT_HPP
#define HEAPSORT_HPP

#include <string>
#include <vector>
#include "SortBase.hpp"

template <class T>
class HeapSort : public SortBase<T> {
private:
    void heapify(std::vector<T>& arr, int n, int i);

public:
    void sort(std::vector<T>& arr) override;
    std::string getName() const override;
};

template <class T>
std::string HeapSort<T>::getName() const {
    return "Heap Sort";
}

template <class T>
void HeapSort<T>::heapify(std::vector<T>& arr, int n, int i) {
    T largest{i};
    T left{2 * i + 1};
    T right{2 * i + 2};

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

template <class T>
void HeapSort<T>::sort(std::vector<T>& arr) {
    size_t n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

#endif