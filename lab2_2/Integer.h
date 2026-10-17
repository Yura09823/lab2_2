#pragma once
#include <iostream>
#include <string>

class Integer {
private:
    int value;

public:
    Integer();
    Integer(int v);
    Integer(const Integer& other);

    ~Integer();

    int getValue() const;
    void setValue(int v);

    Integer& operator=(const Integer& other);

    explicit operator std::string() const;

    Integer& operator++();       
    Integer operator++(int);     

    friend Integer operator-(const Integer& obj);

    friend Integer operator+(const Integer& lhs, const Integer& rhs);

    friend std::ostream& operator<<(std::ostream& os, const Integer& obj);
    friend std::istream& operator>>(std::istream& is, Integer& obj);
};

class IntegerNormal {
private:
    int value;
    char flag; 
};

#pragma pack(push, 1) 
class IntegerPacked {
private:
    int value; 
    char flag; 
};
#pragma pack(pop) 