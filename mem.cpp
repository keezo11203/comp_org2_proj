#include <iostream>
#include <chrono>

int main() {
    // record the starting time
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    
    // allocate an array of ints
    int *arr = new int[5 * 10000000];
