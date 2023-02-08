#include <iostream>
#include <chrono>
#include <fstream>

int main()
{
    // Start timer
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    
    // Hard drive operations
    std::ofstream f("file.txt", std::ios::binary);
    for (int i = 0; i < 1000000000 / 10000; i++) 
    {
        f.write("0", 10000);
    }
    f.close();
    
    std::ifstream f_in("file.txt", std::ios::binary);
    char x[10000];
    for (int i = 0; i < 1000000000 / 10000; i++) {
        f_in.read(x, 10000);
    }
    f_in.close();
