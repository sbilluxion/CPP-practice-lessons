#include <iostream>
#include "file_io.h"

int main() {
    read();
    ReadResult n = readNumbers("input.txt");
    write_result("output.txt", n.number1 + n.number2);
    return 0;
}