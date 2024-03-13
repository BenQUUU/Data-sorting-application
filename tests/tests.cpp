#include <gtest/gtest.h>

#include <BubbleSort.hpp>
#include <CountingSort.hpp>
#include <HeapSort.hpp>
#include <MergeSort.hpp>
#include <QuickSort.hpp>

struct AlgorithmsTest: ::testing::Test {
    std::vector<int> v {2, 4, 1, 9, 3, 8, 12, 10};
    std::vector<int> vSorted {1, 2, 3, 4, 8, 9, 10, 12};
};

TEST_F(AlgorithmsTest, BubbleSortTestPassed) {
    std::vector testVector = v;

    BubbleSort<int> bubble_sort;
    bubble_sort.sort(testVector);

    EXPECT_EQ(vSorted, testVector);
}

TEST_F(AlgorithmsTest, CountingSortTestPassed) {
    std::vector testVector = v;

    CountingSort<int> counting_sort;
    counting_sort.sort(testVector);

    EXPECT_EQ(vSorted, testVector);
}

TEST_F(AlgorithmsTest, HeapSortTestPassed) {
    std::vector testVector = v;

    HeapSort<int> heap_sort;
    heap_sort.sort(testVector);

    EXPECT_EQ(vSorted, testVector);
}

TEST_F(AlgorithmsTest, MergeSortTestPassed) {
    std::vector testVector = v;

    MergeSort<int> merge_sort;
    merge_sort.sort(testVector);

    EXPECT_EQ(vSorted, testVector);
}

TEST_F(AlgorithmsTest, QuickSortTestPassed) {
    std::vector testVector = v;

    QuickSort<int> quick_sort;
    quick_sort.sort(testVector);

    EXPECT_EQ(vSorted, testVector);
}

