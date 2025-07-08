

#include "iter.hpp"
#include <string>
#include <iostream>


void print(std::string& item)
{
    std::cout << item << std::endl;
}

void print_int(int &n)
{
    std::cout << n << " ";;
}

void to_upper(std::string& s)
{
    for (size_t i = 0; i < s.size(); i++)
        s[i] = std::toupper(s[i]);
    std::cout << "toUpper : " << s << std::endl;
}

void flip(int &nbr)
{
    nbr = -nbr;
}

int main ()
{
    std::string arr[] = {"hello","there","you","are"};
    iter(arr, sizeof(arr) / sizeof(arr[0]), print);

    std::string str[] = {"Adam be like ,, hey guys!"};
    iter(str, sizeof(str) / sizeof(str[0]) , to_upper);

    int nums[] = {4,3,2,1};
    iter(nums, sizeof(nums)/ sizeof(nums[0]), flip);
    iter(nums, sizeof(nums)/ sizeof(nums[0]), print_int);
    std::cout << std::endl;

    return (0);
}