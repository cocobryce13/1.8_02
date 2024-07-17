#include <iostream>
#include <windows.h>

namespace Sum
{
    int func(int x, int y) 
    {
        return (x + y);
    }
}

namespace Subtraction 
{
    int func(int x, int y)
    {
        return (x - y);
    }
}

namespace Multiplication
{
    int func(int x, int y) 
    {
        return (x * y);
    }
}

namespace Division
{
    int func(int x, int y)
    {
        return (x / y);
    }
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x{ 6 };
    int y{ 9 };

    std::cout << "Сложение: " << Sum::func(x, y) << std::endl;
    std::cout << "Вычитание: " << Subtraction::func(x, y) << std::endl;
    std::cout << "Умножение: " << Multiplication::func(x, y) << std::endl;
    std::cout << "Деление: " << Division::func(x, y) << std::endl;

    return 0;
}