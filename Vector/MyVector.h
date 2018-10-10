#ifndef MYVECTOR_
#define MYVECTOR_
/*Defines a MyVector type which mirrors the STL vector class.  It uses templates and dynamic memory allocation*/

namespace HW4
{
typedef int T;
class MyVector
{
private:
    int vsize = 0;
    int capacity = 10;
    T* vec = nullptr;
    void resize( void );

public:
    MyVector();
    ~MyVector();
    T operator[] (int index);
    void pop_back( void );
    void push_back(T value);
    int size( void ); //returns the vector size
    bool empty( void );//determine if is empty
    int search(T Value);
};

}//namespace
#endif
