#include <iostream>
#include "Integer.h"
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Integer a;                 
    Integer b(15);              
    Integer c(b);              

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    Integer num1(10), num2(5);

    Integer sum = num1 + num2;        
    cout << num1 << " + " << num2 << " = " << sum << endl;

    Integer neg = -num1;             
    cout << "унарний мінус для " << num1 << " = " << neg << endl;

    cout << "префіксний інкремент (++num2): " << ++num2 << endl; 
    cout << "постфіксний інкремент (num2++): " << num2++ << endl; 
    cout << "num2 після постфіксного інкременту: " << num2 << endl;

    string strVal = (string)num1;
    cout << "Як рядок: \"" << strVal << "\"" << endl;

    Integer statArr[3] = { Integer(1), Integer(2), Integer(3) };
    cout << "\nстатичний масив: ";
    for (int i = 0; i < 3; i++) cout << statArr[i] << " ";
    cout << endl;

    Integer* dynArr = new Integer[2];
    dynArr[0] = Integer(44);
    dynArr[1] = Integer(55);
    cout << "\nдинамічний масив: " << dynArr[0] << " " << dynArr[1] << endl;
    delete[] dynArr;

    cout << "розмір класу БЕЗ #pragma pack(1): " << sizeof(IntegerNormal) << " байт(ів)." << endl;
    cout << "розмір класу З  #pragma pack(1): " << sizeof(IntegerPacked) << " байт(ів)." << endl;

    Integer inputObj;
    cout << "\nвведіть ціле число: ";
    cin >> inputObj;
    cout << "ви ввели: " << inputObj << endl;

    return 0;
}