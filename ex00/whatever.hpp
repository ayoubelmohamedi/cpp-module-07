#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T &a, T &b)
{
    return if (a > b) ? b : a; 
}

template <typename T>
T max(T &a, T &b)
{
    return if (a > b) ? a : b; 
}