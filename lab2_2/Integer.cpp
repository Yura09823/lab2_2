#include "Integer.h"

Integer::Integer() : value(0) {}

Integer::Integer(int v) {
    setValue(v);
}

Integer::Integer(const Integer& other) {
    this->value = other.value;
}

Integer::~Integer() {}

int Integer::getValue() const {
    return value;
}

void Integer::setValue(int v) {
    if (v < -1000000 || v > 1000000) {
        std::cerr << "Значення " << v << " виходить за дозволені межі, встановлено 0" << std::endl;
        value = 0;
    }
    else {
        value = v;
    }
}

Integer& Integer::operator=(const Integer& other) {
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

Integer::operator std::string() const {
    return std::to_string(value);
}

Integer& Integer::operator++() {
    value++;
    return *this;
}

Integer Integer::operator++(int) {
    Integer temp(*this);
    value++;
    return temp;
}

Integer operator-(const Integer& obj) {
    return Integer(-obj.value);
}

Integer operator+(const Integer& lhs, const Integer& rhs) {
    return Integer(lhs.value + rhs.value);
}

std::ostream& operator<<(std::ostream& os, const Integer& obj) {
    os << obj.value;
    return os;
}

std::istream& operator>>(std::istream& is, Integer& obj) {
    int temp;
    is >> temp;
    obj.setValue(temp);
    return is;
}