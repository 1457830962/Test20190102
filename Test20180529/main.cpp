#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
using namespace std;











////===================================分割线
void change(int*a, int&b, int c)
{
    c=*a;
    b=30;
    *a=20;
}


//网上遍历二维数组的方法总结
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    using int_array=int[4];

    cout<<"用for each实现遍历"<<endl;
    for(auto &i:ia)           //for(auto &a :b) 循环的另一种用法    https://blog.csdn.net/iv__vi/article/details/79806683
    {
        for(int &j:i)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"用指针实现遍历"<<endl;
    for(int(*s)[4]=begin(ia);s!=end(ia);s++)
    {
        for(int*is=begin(*s);is!=end(*s);is++)
        {
            cout<<*is<<" ";
        }
        cout<<"\n";
    }

    cout<<"用下标实现遍历"<<endl;
    for(size_t i=0;i<sizeof(ia)/sizeof(*ia);i++)
    {
        for(size_t j=0;j<sizeof(ia[i])/sizeof(int);j++)
        {
            cout<<ia[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"一维数组实现遍历"<<endl;
    int my_array[5] = {1, 2, 3, 4, 5};
    // 每个数组元素乘于 2
    for (auto &x : my_array)
    {
        x *= 2;
        cout << x <<" ";
    }
    cout<<"\n";
    // auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
    for (auto &x : my_array) {
        x *= 2;
        cout << x  <<" ";
    }
    cout << endl;

//    char b[10];
//    strcpy(b,"HELLO!");
//    cout<<b<<endl;
//    char *p="HELL!";
//    strcpy(b,"HELL!");
//    cout<<b<<endl;
//    char c[10]={'H','E','L', 'L','O', '!', '\0'};
//    cout<<c<<endl;

    int a=10, b=20, c=30;
    change(&a,b,c);
    printf("%d,%d,%d,",a,b,c);

    return a.exec();
}

//////=====================================分割线=============================================

//void myfunction (int i) {
//    cout << " " << i;
//}

//struct myclass {
//    void operator() (int i) {cout << " " << i;}
//} myobject;


////C++中实现foreach方式遍历的实现方法
//int main2(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);
//    vector<int> myvector;
//    myvector.push_back(10);
//    myvector.push_back(20);
//    myvector.push_back(30);
//    myvector.push_back(11);
//    myvector.push_back(22);
//    myvector.push_back(33);

//    //stl里面的for_each函数实现遍历的方式
//    cout << "myvector contains:";
//    for_each (myvector.begin(), myvector.end(), myfunction);

//    // or:
//    cout << "\nmyvector contains:";
//    for_each (myvector.begin(), myvector.end(), myobject);

//    cout << endl;

//    return a.exec();
//}




////C++中实现foreach循环  详见博客：https://blog.csdn.net/rainloving/article/details/47030221
//#define foreach(container,it) \
//    for(typeof((container).begin()) it = (container).begin();it!=(container).end();++it)    //自定义宏实现foreach遍历并进行排序

//int main3(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);
//    set<string> s;
//    s.insert("w");
//    s.insert("5");
//    s.insert("z");
//    s.insert("1");
//    s.insert("x");
//    s.insert("b");


//    foreach(s,it)
//    {
//        cout<<*it<<endl;
//    }

//    map<unsigned,string> m;
//    m[0]="x";
//    m[1]="w";

//    foreach(m,it)
//    {
//        cout<<it->first<<","<<it->second<<endl;
//    }

//    return a.exec();
//}
