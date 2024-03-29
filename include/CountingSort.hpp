#ifndef COUNTINGSORT_HPP
#define COUNTINGSORT_HPP

#include <string>
#include <vector>
#include "SortBase.hpp"

template <class T>
class CountingSort : public SortBase<T> {
public:
    void sort(std::vector<T>& arr) override;
    std::string getName() const override;
};

template <class T>
std::string CountingSort<T>::getName() const {
    return "Counting Sort";
}

template <class T>
void CountingSort<T>::sort(std::vector<T>& arr) {
    T max = arr[0];
    T min = arr[0];
    size_t size = arr.size();

    for (size_t i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    int range = max - min + 1;

    std::vector<T> count(range, 0);

    for (size_t i = 0; i < size; i++) {
        count[arr[i] - min]++;
    }

    size_t index = 0;
    for (size_t i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[index] = i + min;
            index++;
            count[i]--;
        }
    }
}

#endif