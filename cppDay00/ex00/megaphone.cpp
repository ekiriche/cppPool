#include <iostream>
#include <cctype>

int main(int argc, char** argv) {

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    int i = 1;

    while (argv[i]) {
        for (int j = 0; j < (int)strlen(argv[i]); j++) {
            std::cout << (char)toupper(argv[i][j]);
        }
        i++;
    }
    std::cout << std::endl;
}