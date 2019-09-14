#include "Human.hpp"

Human::Human(): _brain(*(new Brain)) {

}

Human::~Human() {

}

Brain& Human::getBrain() {
    return (Brain&) _brain;
}

std::string Human::identify() {
    return _brain._address;
}