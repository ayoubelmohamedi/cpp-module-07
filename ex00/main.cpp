

#include "whatever.hpp"


int main()
{
    int a = 3;
    int b = 6;
    int res = ::min(a, b);
    std::cout << "min = " << res << std::endl;

    int res2 = ::max(a, b);
    std::cout << "max = " << res2 << std::endl;

    swap(a, b);
    std::cout << "val a = " << a << "\nval b = " << b << std::endl;
    
    int res1 = ::min(1, 2);
    std::cout << "min = " << res1 << std::endl;


    std::string s1 = "apple", s2 = "banana";
    std::cout << "min(string) = " << ::max(s1, s2) << std::endl;

    char c1 = 'a', c2 = 'z';
    std::cout << "max(char) = " << ::max(c1, c2) << std::endl;
    
    return (0);
}