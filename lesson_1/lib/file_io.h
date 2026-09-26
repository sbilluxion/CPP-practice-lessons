#pragma once


struct ReadResult {
    int number1;
    int number2;
};

void read();

ReadResult readNumbers(const char* file_name);
void write_result(const char* file_name, int result);