#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
using namespace std;











////===================================�ָ���
void change(int*a, int&b, int c)
{
    c=*a;
    b=30;
    *a=20;
}


//���ϱ�����ά����ķ����ܽ�
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    using int_array=int[4];

    cout<<"��for eachʵ�ֱ���"<<endl;
    for(auto &i:ia)           //for(auto &a :b) ѭ������һ���÷�    https://blog.csdn.net/iv__vi/article/details/79806683
    {
        for(int &j:i)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"��ָ��ʵ�ֱ���"<<endl;
    for(int(*s)[4]=begin(ia);s!=end(ia);s++)
    {
        for(int*is=begin(*s);is!=end(*s);is++)
        {
            cout<<*is<<" ";
        }
        cout<<"\n";
    }

    cout<<"���±�ʵ�ֱ���"<<endl;
    for(size_t i=0;i<sizeof(ia)/sizeof(*ia);i++)
    {
        for(size_t j=0;j<sizeof(ia[i])/sizeof(int);j++)
        {
            cout<<ia[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"һά����ʵ�ֱ���"<<endl;
    int my_array[5] = {1, 2, 3, 4, 5};
    // ÿ������Ԫ�س��� 2
    for (auto &x : my_array)
    {
        x *= 2;
        cout << x <<" ";
    }
    cout<<"\n";
    // auto ����Ҳ�� C++11 �±�׼�еģ������Զ���ȡ����������
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

//////=====================================�ָ���=============================================

//void myfunction (int i) {
//    cout << " " << i;
//}

//struct myclass {
//    void operator() (int i) {cout << " " << i;}
//} myobject;


////C++��ʵ��foreach��ʽ������ʵ�ַ���
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

//    //stl�����for_each����ʵ�ֱ����ķ�ʽ
//    cout << "myvector contains:";
//    for_each (myvector.begin(), myvector.end(), myfunction);

//    // or:
//    cout << "\nmyvector contains:";
//    for_each (myvector.begin(), myvector.end(), myobject);

//    cout << endl;

//    return a.exec();
//}




////C++��ʵ��foreachѭ��  ������ͣ�https://blog.csdn.net/rainloving/article/details/47030221
//#define foreach(container,it) \
//    for(typeof((container).begin()) it = (container).begin();it!=(container).end();++it)    //�Զ����ʵ��foreach��������������

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
