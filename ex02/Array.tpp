

#include "Array.hpp"



template <typename T>
Array<T>::Array(const Array<T> &copy) : _sz(copy._sz)
{
    if (_sz > 0)
    {
        _items = new T[_sz];
        for (size_t i = 0; i < _sz; ++i)
            _items[i] = copy._items[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy) {
    if (this != &copy) {
        delete[] _items;
        _sz = copy._sz;
        if (_sz > 0)
        {
            _items = new T[_sz];
            for (size_t i = 0; i < _sz; ++i)
                _items[i] = copy._items[i];         
        }
        else
            _items = 0;
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](size_t idx) {
    if (idx >= _sz) throw std::out_of_range("Index out of range");
    return _items[idx];
}

template <typename T>
Array<T>::~Array()
{
    if (_items)
        delete [] _items;
}