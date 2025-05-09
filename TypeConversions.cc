// Статическая типизация и преобразования типов
// С++ является статически типизированным языком программирования. 
// То есть если мы определили для переменной какой-то тип данных, то в последующем мы этот тип изменить не сможем. 
// Соответственно переменная может получить значения только того типа, который она представляет. 
// Однако нередко возникает необходимость присвоить переменной значения каких-то других типов. 
// И в этом случае применяются преобразования типов.
#include <iostream>
 
int main()
{
    unsigned int age{25};
    std::cout << "age = " << age << std::endl;
}

// Здесь переменная age представляет тип unsigned int и условно хранит возраст. Эта переменная инициализируется числом 25,
//  а все целочисленные литералы без суффиксов по умолчанию 
// представляют тип int (signed int). Но компилятор знает как преобразовать значение 25 к типу unsigned int,
//  и каких-то проблем в данном случае не будет.
#include <iostream>
 
int main()
{
    unsigned int age{-25};
    std::cout << "age = " << age << std::endl;
}

//Здесь переменной age уже присваивается число -25 - отрицательное, 
//в то время как тип переменной - unsigned int предполагает лишь использование положительных чисел. 
//И в этом случае мы столкнемся с ошибкой компиляции.
//С точки зрения преобразований в операциях типы можно расположить следующим образом в порядке приоритета (от более высокого к более низкому):

// 1. long double

// 2. double

// 3. float

// 4. unsigned long long

// 5. long long

// 6. unsigned long

//  7. long

//  8. unsigned int

//  9. int


//Явные преобразования типов

//Для выполнения явных преобразований типов (explicit type conversion) применяется оператор static_cast
static_cast<type>(value)

//Данный оператор преобразует значение в круглых скобках - value к типу, который указан в угловых скобках - type. 
//Слово static в названии оператора отражает тот факт, что приведение проверяется статически, то есть во время компиляции.
#include <iostream>
 
int main()
{
    double sum {100.2};
    unsigned int hours {8};
    unsigned int revenuePerHour { static_cast<unsigned int>(sum/hours) };  // revenuePerHour = 12
    std::cout << "Revenue per hour = " << revenuePerHour<< std::endl;
}

//Здесь выражение static_cast<unsigned int>(sum/hours) вычисляет значение выражения sum/hours (а оно будет представлять тип double),
//и затем преобразует его в тип unsigned int