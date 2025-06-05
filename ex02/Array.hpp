



#pragma once
#include <stdexcept>
#include <cstddef>


template <typename T>
class Array 
{
    T *_items;
    size_t _sz;

public:
    Array() : _items(0), _sz(0) {}
    Array(unsigned int n) : _items(new T[n]) , _sz(n) {}
    Array(const Array &copy);
    ~Array();
    Array<T> &operator=(const Array &copy);
    T& operator[](size_t idx);
    size_t size() const { return (_sz);}
};

