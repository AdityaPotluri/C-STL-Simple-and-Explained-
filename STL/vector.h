#include <cstdlib>

template <typename T>
class vector {
    private:
        T* in;
        int size;
        int capacity;
    public:
        vector(int size);
        ~vector();
        void operator=(vector<T> v);
        void operator[](int n);
        void assign( int count, const T& value );
        void push_back(T& object);
        void resize(int n);

};