

#include "whatever.hpp"


int main()
{
    int a = 3;
    int b = 6;
    int res = min(a, b);
    std::cout << "min = " << res << std::endl;  

    int res2 = max(a, b);
    std::cout << "max = " << res2 << std::endl;  

    swap(a, b);
    std::cout << "val a = " << a << "val b = " << b << std::endl;

    return (0);
}