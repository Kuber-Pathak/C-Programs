#include <iostream>
using namespace std;
template <class T>
void Max(T a, T b)
{
    if (a > b)
        cout << a << " is maximum" << endl;
    else
        cout << b << " is maximum" << endl;
}
template <class T>
void Max(T a, T b, T c)
{
    if ((a > b) && (a > c))
        cout << a << " is maximum" << endl;
    else if (b > c)
        cout << b << " is maximum" << endl;
    else
        cout << c << " is maximum" << endl;
}
int main()
{
    int a, b, c;
    cout << "Enter the values of a and b:" << endl;
    cin >> a >> b;
    Max(a, b);
    cout << "Enter three integer values:" << endl;
    cin >> a >> b >> c;
    Max(a, b, c);
    return 0;
}
