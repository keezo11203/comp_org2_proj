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
  
for (int i = 0; i < 500000000; i++) 
{
    result *= i;
}

  for (int i = 0; i < 2000000000; i++)
{
    result /= i;
}
  
// Stop timer
std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();

