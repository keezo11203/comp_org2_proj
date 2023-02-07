#include <iostream>
#include <chrono>

int main() 
{
 //Start timer
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    
 // Initialize a variable to store the result
    int result = 0;
 // Loop through the range from 0 to 10^10
    for (int i = 0; i < 10000000000; i++) 
{
 // Add the current value of i to the result
    result += i;
}
 
  // Loop through the range from 0 to 5*10^9
    for (int i = 0; i < 500000000; i++) 
    {
  // Calculate the product of i and the current value of result
        result *= i;
    }
    for (int i = 0; i < 2000000000; i++) 
    {
        if (i != 0) 
      {
        result /= i;
      }
    }
