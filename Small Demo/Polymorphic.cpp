#include<iostream>
#include <stdlib.h>
using namespace std;


//*****************多态实现及其原理*****************//
//形成多态的三大条件:
//****1.子类继承父类,
//****2子类重写父类虚函数,
//****3父类指针或者引用指向子类对象,达成以上3个条件就形成了多态
class CA
{
public:
    void f()
    {
        cout << "CA f()" << endl;
    }
    virtual void ff()
    {
        cout << "CA ff()" << endl;
        f();
    }
};

class CB : public CA
{
public :
    virtual void f()
    {
        cout << "CB f()" << endl;
    }
    void ff()
    {
        cout << "CB ff()" << endl;
        f();
        CA::ff();
    }
};
class CC : public CB
{
public:
    virtual void f()
    {
        cout << "C f()" << endl;
    }
};

/*********数量掌握C++多态************/
int main()
{
    CB b;
    CA *ap = &b;
    CC c;
    CB &br = c;//父类指针或者引用指向子类对象
    CB *bp = &c;//父类指针或者引用指向子类对象

    ap->f();
    cout << endl;

    b.f();
    cout << endl;

    br.f();
    cout << endl;

    bp->f();
    cout << endl;

    ap->ff();
    cout << endl;

    bp->ff();//理解类中函数调用依据
    cout << endl;


    return 0;
}



