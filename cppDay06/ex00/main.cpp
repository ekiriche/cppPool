#include <iostream>
#include <iomanip>

int countPrecision(char * str) {
    int flag = 0;
    int count = 0;

    for (size_t i = 0; i < strlen(str); i++) {
        if (flag && isdigit(str[i])) {
            count++;
        } else if (str[i] == '.') {
            flag++;
        }
    }

    return count;
}

int main(int argc, char ** argv) {
    int i;
    char c;
    float f;
    double d;

    if (argc != 2) {
        std::cout << "Enter only one parameter!" << std::endl;
        return 0;
    }

    i = std::atoi(argv[1]);
    d = std::atof(argv[1]);
    c = static_cast<char>(i);
    f = static_cast<float>(d);

    if (i != 0 || argv[1][0] == '0') {
        std::cout << "int: " << i << std::endl;

        if (isprint(c)) {
            std::cout << "char: '" << c << "'" << std::endl;
        } else {
            std::cout << "char: non-printable" << std::endl;
        }
    } else {
        std::cout << "int: impossible" << std::endl;

        if (strlen(argv[1]) == 1) {
            std::cout << "char: '" << argv[1] << "'" << std::endl;
        } else {
            std::cout << "char: impossible" << std::endl;
        }
    }

    if (d != 0 || argv[1][0] == '0') {
        int precision = countPrecision(argv[1]);
        if (precision == 0) precision = 1;

        std::cout << "float: " << std::fixed << std::setprecision(precision) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(precision) << d << std::endl;
    } else {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }

}