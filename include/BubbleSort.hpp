#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include <vector>

template<class T>
class BubbleSort{
public:
    void sort(std::vector<T>& arr);
};

template<class T>
void BubbleSort<T>::sort(std::vector<T>& arr){
    int n = arr.size();
    std::vector<T> new_arr = arr;
        for(size_t i = 0; i < n - 1; i++) {
            for(size_t j = 0; j < n - i - 1; j++) {
                if (new_arr[j] > new_arr[j + 1]) {
                    std::swap(new_arr[j], new_arr[j + 1]);
                }
            }
        }
}
#endif