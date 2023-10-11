#ifndef MERGESORT_HPP
#define MERGESORT_HPP

#include <vector>
#include <string>
#include "SortBase.hpp"

template<class T>
class MergeSort : public SortBase<T>{
private:
    void merge(std::vector<T>& arr, int left, int middle, int right);
    void sort(std::vector<T>& arr, int left, int right);
public:
    void sort(std::vector<T>& arr) override {
        sort(arr, 0, arr.size() - 1);
    }
    std::string getName() const override;
};

template<class T>
std::string MergeSort<T>::getName() const{
    return "Merge Sort";
}

template<class T>
void MergeSort<T>::merge(std::vector<T>& arr, int left, int middle, int right){
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<T> leftArr(n1);
    std::vector<T> rightArr(n2);


    for(size_t i = 0; i < n1; i++){
        leftArr[i] = arr[left + i];
    }

    for(size_t i = 0; i < n2; i++){
        rightArr[i] = arr[middle + 1 + i];
    }

    int i = 0; 
    int j = 0; 
    int k = left;

    while(i < n1 && j < n2){
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        } else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

template<class T>
void MergeSort<T>::sort(std::vector<T>& arr, int left, int right){
    if(left < right){
        int middle = left + (right - left) / 2;

        sort(arr, left, middle);
        sort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}


#endif