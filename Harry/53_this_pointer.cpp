#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A o1;
    o1.setData(2);
    o1.getData();
    return 0;
}