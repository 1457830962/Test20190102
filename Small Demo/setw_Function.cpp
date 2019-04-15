#include<iostream>
#include <iomanip>
using namespace std;



//**********************//
//*▲setw(n)用法： 通俗地讲就是预设宽度
   如 cout<<setw(5)<<255<<endl;
   结果是:
   (空格)(空格)255
   ▲setfill(char c) 用法 : 就是在预设宽度中如果已存在没用完的宽度大小，则用设置的字符c填充
   如 cout<<setfill('@')<<setw<<255<<endl;
   结果是:
   @@255
   ▲setbase(int n) : 将数字转换为 n 进制.
   如 cout<<setbase(8)<<setw(5)<<255<<endl;
    cout<<setbase(10)<<setw(5)<<255<<endl;
    cout<<setbase(16)<<255<<endl;
   结果是:
   (空格)（空格)377
   (空格)(空格) 255
   (空格)(空格) ff
   ▲ setprecision用法
   使用setprecision(n)可控制输出流显示浮点数的数字个数。C++默认的流输出数值有效位是6。
   如果setprecision(n)与setiosflags(ios::fixed)合用，可以控制小数点右边的数字个数。setiosflags(ios::fixed)是用定点方式表示实数。
   如果与setiosnags(ios::scientific)合用， 可以控制指数表示法的小数位数。setiosflags(ios::scientific)是用指数方式表示实数。
   例如，下面的代码分别用浮点、定点和指数方式表示一个实数：

//**********************//
int main()
{
    double amount = 22.0/7;

    cout<<setw(5)<<3<<endl;   //setw设置空格
     cout<<setfill('@')<<setw(5)<<3<<endl;

    cout << amount << endl;
    cout << setprecision(0) << amount << endl
         << setprecision(1) << amount << endl
         << setprecision(2) << amount << endl
         << setprecision(3) << amount << endl
         << setprecision(4) << amount << endl;

    cout << setiosflags(ios::fixed);
    cout << setprecision(8) << amount << endl;
    cout << setiosflags(ios::scientific) << amount <<endl;
    cout <<setprecision(6); //重新设置成原默认设置

    return 0;
}



