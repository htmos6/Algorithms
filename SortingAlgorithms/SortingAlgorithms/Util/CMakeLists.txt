cmake_minimum_required(VERSION 3.8)

add_executable(Util src/main.cpp include/queue.h include/SortingAlgorithms.h include/SelectionSort.h include/BubbleSort.h include/QuickSort.h include/MergeSort.h include/RadixSort.h)

target_include_directories(Util PUBLIC include/)