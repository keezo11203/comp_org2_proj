#include <iostream>
#include <fstream>
#include <chrono>

// function to read data from a binary file in chunks of 100 bytes
void read_file(const std::string &filename) 
{
    // open the file with binary mode
    std::ifstream file(filename, std::ios::binary);
    // create a buffer to store 100 bytes of data
    char chunk[100];
    // read 100 bytes of data from the file and store it in the buffer
    while (file.read(chunk, 100)) {}
}

// function to write 10^9 bytes of data to a binary file in chunks of 100 bytes
void write_file(const std::string &filename) 
{
    // open the file with binary mode
    std::ofstream file(filename, std::ios::binary);
    // write 100 bytes of data to the file in chunks of 100 bytes
    for (int i = 0; i < 1000000000 / 100; ++i) {
        file.write("0", 100);
    }
}

std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

write_file("words.txt");
read_file("words.txt");

std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

std::chrono::microseconds difference = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
std::cout << "Hardrive Benchmark 1 time: " << difference.count() / 1000000.0 << " seconds" << std::endl;

return 0;
}