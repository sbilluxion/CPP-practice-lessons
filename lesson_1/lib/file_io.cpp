#include <iostream>
#include <fstream>
#include "file_io.h"

void read() {
    std::cout << "Hello, World!\n";
}

ReadResult readNumbers(const char* file_name) {
    std::ifstream fin(file_name, std::ios::in);
    ReadResult n;
    fin >> n.number1 >> n.number2;
    return n;
}

void write_result(const char* file_name, int result) {
    std::ofstream fout(file_name);
    fout << result;
}