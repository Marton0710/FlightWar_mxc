#include <iostream>
#include <cstring>
using namespace std;


template<typename T>
inline T const& Max(T const& a, T const& b)
{
    return a > b ? a : b;
}


class A
{
public:
    typedef int SubType;

};
template<class T>
class B
{
public:
    typename T::SubType a = 1;
};

int lesson1_main()
{
    int a = 1;
    int b = 4;
    cout << Max(a, b) << endl;

    B<A> c;

    return 0;
}
