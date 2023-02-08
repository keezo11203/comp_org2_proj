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
