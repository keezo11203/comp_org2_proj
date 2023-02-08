#include <iostream>
#include <chrono>
#include <cmath>

int main()
{
// Start timer
std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
  
  // Float operations
double result = 0.0;
for (int i = 0; i < 1000000000; i++) 
{
    result += i;
}
