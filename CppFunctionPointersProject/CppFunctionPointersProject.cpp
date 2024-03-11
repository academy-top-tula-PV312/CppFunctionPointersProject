#include <iostream>

template <typename T>
T Sum(T a, T b)
{
    return a + b;
}

template <typename T>
T Mult(T a, T b)
{
    return a * b;
}

int Power(int x, int n)
{
    int power{ 1 };
    for (int i{}; i < n; i++)
        power *= x;
    return power;
}

template <typename T>
T Calc(T a, T b, T(*oper)(T, T))
{
    return oper(a, b);
}

int main()
{
    int* iptr;
    float* fptr;

    int(*funcptr)(int, int);
    
    std::cout << Calc(5, 10, Sum) << "\n";
    std::cout << Calc(5.7, 10.9, Sum) << "\n";
    std::cout << Calc(5, 10, Mult) << "\n";
    std::cout << Calc(5, 10, Power) << "\n";
}
