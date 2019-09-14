#include <iostream>

template<typename T>
void iter(T * array, size_t size, void(*func)(T &)) {
    for (size_t i = 0; i < size; i++) {
        (*func)(array[i]);
    }
}

template<typename T>
void myFunc(T & data) {
    std::cout << data << std::endl;
}

int main(void){
    int nums[] = { 1, 2, 3, 42 };
    std::string strings[] = { "a", "ab", "abc", "abcd" };

    iter<int>(nums, 4, &myFunc<int>);
    iter<std::string>(strings, 4, &myFunc<std::string>);

    return (0);
}