// переменные
#include <iostream>
int main() //перезапись переменных
{
     int age = 22; //тут age = 22
    std::cout << "Age1 = " << age << "\n"; // выведет 22
    age = 23; // тут age = 23
    std::cout << "Age2 = " << age << "\n"; // выведет 23
    age = 38; // age = 38
    std::cout << "Age3 = " << age << "\n"; // выведет 38
}

// в c++ переменные можно объявлять как
// int age = 22.5;  тут выведет 22
// int age{28.5};    тут выведет ошибку
// int age(24.5);   тут выведет 24
// разница в том, что если ввести в них дробное значение, но при этом переменная int, что значит целое, то
// int age = 22.5; и int age(24.5); программа будет пытаться преобразовывать их float значение в int
