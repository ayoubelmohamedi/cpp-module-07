




#include <string>
#include <iostream>
#include "Array.hpp"

#include "Array.tpp"

int main() {
    Array<int> a(5);
    for (size_t i = 0; i < a.size(); i++)
        a[i] = static_cast<int>(i * 10);
    
    // can be access with brakets 
    std::cout << a[4] << std::endl;
    

    std::cout << "Array a: " << std::endl;
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << std::endl;

    std::cout << "========" << std::endl;
    std::cout << "Array b (after copy and modify): " << std::endl;

    Array<int> b = a; // Copy constructor
    b[0] = 99;

    for (size_t i = 0; i < b.size(); i++)
        std::cout << b[i] << std::endl;
    
    std::cout << "========" << std::endl;


    std::cout << "Array a (should be unchanged): " << std::endl;
    for (size_t i = 0; i < a.size(); ++i)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    return 0;
}