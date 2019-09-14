//
// Created by Evgeniy KIRICHENKO on 2019-06-26.
//
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc == 4) {
        std::string inputFileName = (std::string) argv[1];
        std::string s1 = (std::string) argv[2];

        if (s1.empty()) {
            std::cout << "Please, provide second parameter that has length more than 0" << std::endl;
            return (0);
        }

        std::string s2 = (std::string) argv[3];
        std::string buf;
        std::string outputFilename = inputFileName + ".replace";
        std::ifstream reader(inputFileName);

        if (reader.fail()) {
            std::cout << "Something is messed up with provided file" << std::endl;
            return 0;
        }

        std::ofstream outer(outputFilename);

        while (std::getline(reader, buf)) {
            while (buf.find(s1) != std::string::npos) {
                buf.replace(buf.find(s1), s1.length(), s2);
            }
            outer << buf << std::endl;
        }
    } else {
        std::cout << "Wrong input" << std::endl;
    }

    return 0;
}