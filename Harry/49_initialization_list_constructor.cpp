#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    Test(int i, int j):a(i), b(j+a)
    // Test(int i, int j) : b(j),a(i+b) //error because a is initialized first
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};

int main()
{
    Test o1(4,6);
    return 0;
}