
#include <cstddef>

template <typename A, typename F>
void iter(A arr, size_t len, F func)
{
    if (!arr || !func)
        return;
    
    for (size_t i = 0;  i < len; i++)
        func(arr[i]);
}