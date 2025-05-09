// Различные системы исчисления
// По умолчанию все стандартные целочисленные литералы представляют числа в привычной нам десятичной системе. 
// Однако C++ также позволяет использовать и числа в других системах исчисления.
//Чтобы указать, что число - шестнадцатеричное, перед числом указывается префикс 0x или 0X
int num1{ 0x1A};        // 26 - в десятичной
int num2{ 0xFF };       // 255 - в десятичной
int num3{ 0xFFFFFF };   //16777215 - в десятичной

//Чтобы указать, что число - восьмеричное, перед числом указывается ноль 0. Например:
int num1{ 034};        // 26 - в десятичной
int num2{ 0377 };       // 255 - в десятичной

//Бинарные литералы предваряются префиксом 0b или 0B:
num1{ 0b11010};         // 26 - в десятичной
int num2{ 0b11111111 };     // 255 - в десятичной

//в С++ есть оператор sizeof(), который возвращает размер памяти в байтах, которую занимает переменная:
#include <iostream>
 
int main()
{
    long double number {2};
    std::cout << "sizeof(number) =" << sizeof(number);
}

//Кроме того, в C++ можно использовать специальные управляющие последовательности, 
//которые предваряются слешем и которые интерпретируются особым образом. Например, "\n" представляет перевод строки, а "\t" - табуляцию.
//Спецификатор auto
//Иногда бывает трудно определить тип выражения. В этом случае можно предоставить компилятору самому выводить тип объекта. 
//И для этого применяется спецификатор auto. При этом если мы определяем переменную со спецификатором auto,
//эта переменная должна быть обязательно инициализирована каким-либо значением
auto number = 5;        // number имеет тип int
auto sum {1234.56};    // sum имеет тип double
auto distance {267UL};  // distance имеет тип unsigned long
//На основании присвоенного значения компилятор выведет тип переменной. Неинициализированные переменные со спецификатором auto не допускаются

//CONST
//Но кроме переменных в языке программирования C++ можно определять константы. 
//Их значение устанавливается один раз и впоследствии мы его не можем изменить. 
//Константа определяется практически так же, как и переменная за тем исключением, что в начале определения константы идет ключевое слово const. Например:
const int n {22};
// или 
// const int n = 22;

//И также в процессе программы мы сможем обращаться к значению константы:
#include <iostream>
 
int main()
{
    const int age {22};
    std::cout << "Age = " << age << "\n";
}

//В качестве значения константам можно передавать как обычные литералы, так и динамически вычисляемые значения, например, значения переменных или других констант:
int a {10};
const int b {7};
const int d {b};
const int x {a};

//Обычно в качестве констант определяются такие значения, которые должны оставаться постоянными в течение работы всей программы и не могут быть изменены. 
//Например, если программы выполняет математические операции с использованием числа PI, то было бы оптимально определить данное значение как константу,
//так как оно все равно в принципе неизменно:
const float pi {3.14};
