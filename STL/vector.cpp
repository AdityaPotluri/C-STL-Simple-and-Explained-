#include "vector.h"

template<typename T> 
vector<T>::vector(int size)
    : size(size) , capacity(size)
{
    in = new T[size];
}
