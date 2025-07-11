#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define MAX_VAL 750

void compare(Array<int>& numbers, Array<int>& mirror)
{
    if (mirror.size() != numbers.size())
        return ;
    for (size_t i = 0; i < mirror.size(); i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            break;
        }
    }
    return ;
}

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    Array<int> testcopy(numbers);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    // compare values 
    std::cout << "Compare two Arrays: " << std::endl;
    compare(numbers , testcopy);

    // count nbr of values
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = i;
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    // test copy and leaks too 
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
  
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "access out of bound index : " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "access MAX_VAL : " <<  e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}