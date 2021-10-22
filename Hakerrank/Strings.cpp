#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a, b;
    char A, B;
    cin >> a;
    cin >> b;
    cout << a.length() << " " << b.length() <<endl;
    cout << a << b <<endl;
    A = a[0];
    B = b[0];
    a[0] = B;
    b[0] = A;
    cout << a << " " << b <<endl;
    return 0;
}