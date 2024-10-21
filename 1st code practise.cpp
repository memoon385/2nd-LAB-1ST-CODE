#include<iostream>
using namespace std;

template < class T>
void Swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    float f1 = 12.3, f2 = 39.4;
    char c1 = 'A', c2 = 'B';

    cout << "Before  swapping " << endl;
    cout << " a=  " << a << "   " << "b=" << b << endl;
    cout << " f1=  " << f1 << "   " << "f2=" << f2 << endl;
    cout << " c1=" << c1 << "   " << "c2=" << c1 << endl;
    cout << endl;


    Swap(a, b);
    Swap(f1, f2);
    Swap(c1, c2);


    cout << "After swapping " << endl;
    cout << endl;
    cout << " a=  " << a << "   " << "b=" << b << endl;
    cout << " f1=  " << f1 << "   " << "f2=" << f2 << endl;
    cout << " c1=" << c1 << "   " << "c2=" << c1 << endl;

    return 0;
}