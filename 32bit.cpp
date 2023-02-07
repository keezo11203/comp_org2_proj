#include <iostream>
#include <chrono>

int main() 
{
    // Start timer
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();

    // Integer operations
    int result = 0;
    for (int i = 0; i < 1010; i++) {
        result += i;
    }
    for (int i = 0; i < 500000000; i++) {
        result *= i;
    }
    
    for (int i = 0; i < 2000000000; i++) {
    if (i != 0) {
        result /= i;
    }
}
    // Stop timer
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();

    std::chrono::microseconds execution_time = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
    std::cout << "32 bit execution time: " << execution_time.count() << " microseconds" << std::endl;

    return 0;
}