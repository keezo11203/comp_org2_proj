#include <iostream>
#include <chrono>

int main() {
    // record the starting time
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    
    // allocate an array of ints
    int *arr = new int[5 * 10000000];
    
 // loop to fill and access the array
    for (int i = 0; i < 5 * 10000000; ++i) 
    {
        arr[i] = i;
        int x = arr[i];
    }

    // record the end time
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
    
    // calculate the execution time in seconds
    double execution_time = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() / 1000000.0;

    // print the execution time
    std::cout << "Memory benchmark execution time: " << execution_time << " seconds" << std::endl;
