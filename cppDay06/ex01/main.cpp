#include <iostream>
#include <ctime>

struct Data {
    std::string s1;
    std::string s2;
    int n;
};

void * serialize(void) {
    char * str = new char[17];
    std::string alphanum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i;

    srand(clock());

    for (i = 0; i < 8; i++) {
        str[i] = alphanum[rand() % 62];
    }

    str[i] = nums[(rand() % 10)];
    i++;

    int k;

    for (k = i; k < 17; k++) {
        str[k] = alphanum[rand() % 62];
    }

    str[k] = '\0';
    return reinterpret_cast<void*>(str);
}

Data * deserialize(void * raw) {
    char * str = reinterpret_cast<char*>(raw);
    Data * data = new Data;
    int i;

    for (i = 0; i < 8; i++) {
        data->s1 += str[i];
    }

    data->n = str[i++] - 48;

    for (int k = i; k < 17; k++) {
        data->s2 += str[k];
    }

    return data;
}

int main() {
    void *raw = serialize();
    std::cout << "Serialized data:: " << reinterpret_cast<char*>(raw) << std::endl;
    Data *dat = deserialize(raw);
    std::cout << "String 1: " << dat->s1<< std::endl;
    std::cout << "String 2: " << dat->s2 << std::endl;
    std::cout << "int n: " << dat->n << std::endl;

    void *raw1 = serialize();
    std::cout << "Serialized data:: " << reinterpret_cast<char*>(raw1) << std::endl;
    Data *dat1 = deserialize(raw1);
    std::cout << "String 1: " << dat1->s1<< std::endl;
    std::cout << "String 2: " << dat1->s2 << std::endl;
    std::cout << "int n: " << dat1->n << std::endl;
}