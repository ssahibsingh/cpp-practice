#include <iostream>
using namespace std;

class B1
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};

class B2
{
public:
    void greet()
    {
        cout << "Hi" << endl;
    }
};

class D : public B1, public B2
{
    public:
    // Ambiguity resolution
    void greet(){
        B1::greet();
    }
};
int main()
{
    B1 o1;
    B2 o2;
    D o3;
    o1.greet();
    o2.greet();
    o3.greet();
    return 0;
}