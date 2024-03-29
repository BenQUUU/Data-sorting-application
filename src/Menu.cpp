#include "../include/Menu.hpp"
#include "../include/BubbleSort.hpp"
#include "../include/CountingSort.hpp"
#include "../include/DataGenerator.hpp"
#include "../include/HeapSort.hpp"
#include "../include/MergeSort.hpp"
#include "../include/QuickSort.hpp"
#include "../include/SortBase.hpp"

size_t Menu::askForVectorSize_() {
    size_t size = 0;
    std::cout << "What capacity should a vector have: ";
    std::cin >> size;

    if (!std::cin.good()) {
        throw std::invalid_argument("Invalid data type!");
    }

    return size;
}

void Menu::menuInitialization() {
    size_t size = 0;
    try {
        size = askForVectorSize_();
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    DataGenerator dataGenerator(size);
    std::vector<int> originalData = dataGenerator.generate_vector();

    BubbleSort<int> bubbleSort;
    QuickSort<int> quickSort;
    MergeSort<int> mergeSort;
    CountingSort<int> countingSort;
    HeapSort<int> heapSort;

    std::vector<SortBase<int>*> algorithms {&bubbleSort, &quickSort, &mergeSort, &countingSort, &heapSort};

    for (const auto& algorithm : algorithms) {
        std::vector<int> data = originalData;
        auto start = std::chrono::high_resolution_clock::now();
        algorithm->sort(data);
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

        std::cout << "Algorithm sorting time " << algorithm->getName() << ": " << duration.count() << " microseconds" << std::endl
                  << std::endl;
    }
}