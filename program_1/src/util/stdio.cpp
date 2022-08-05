#include "stdio.h"
#include <iostream>

std::string util::StdIOReaderWriter::read_line() {
    std::string line;
    std::getline(std::cin, line, '\n');

    return std::move(line);
}

void util::StdIOReaderWriter::write_line(char * data) {
    std::cout << data << '\n';
}

void util::StdIOReaderWriter::write_line(std::string data) {
    write_line(data.data());
}
