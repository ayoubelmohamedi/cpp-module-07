

#include "iter.hpp"
#include <string>
#include <iostream>



void print(std::string& item)
{
    std::cout << item << std::endl;
}

int main ()
{
    std::string arr[] = {"hello","there","you","are"};
    iter(arr, arr->length() - 1, print);


    return (0);
}