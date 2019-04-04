// ExampleSwitch.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"	 
#include <iostream>
#include "string.h"

#define INT_MIN     (-2147483647 - 1) /* minimum (signed) int value */

using namespace std;
#define  f(x)  x*x 
int Function(unsigned int n) {
	n = ( n & 0x55555555 ) + ( ( n >> 1 ) & 0x55555555 );
	n = ( n & 0x33333333 ) + ( ( n >> 2 ) & 0x33333333 );
	n = ( n & 0x0f0f0f0f ) + ( ( n >> 4 ) & 0x0f0f0f0f );
	n = ( n & 0x00ff00ff ) + ( ( n >> 8 ) & 0x00ff00ff );
	n = ( n & 0x0000ffff ) + ( ( n >> 16 ) & 0x0000ffff );
	return n;
}

struct A
{
	unsigned int a;
	char b [2];
	double c;
	short d;
	long double e;
};

struct MyStruct
{
	char a;
	int b;
	long double c;
};
struct C{
};

struct E{
	int a;
	
	float c;
	double b; //注意成员a和b位置调换后结构体所占的位数有所不同；理解这其中的缘故。
};


//定义全局变量m_gparam;
int m_param;
int _tmain1(int argc , _TCHAR* argv[])
{
	int i;
	for (i = 0; i < 3; i++){
		switch (i){
		case 0:printf("%d" , i);
		case 2:printf("%d" , i);
		default:printf("%d" , i);
		}
	}

	int n = Function(217); 

	int a = 6 , b = 2 , c;
	c = f(a) / f(b);
	a = f(a);
	b = f(b);
	printf("%d" , c);

	A struct_st;
	E struct_ste;
	int m = sizeof(struct_ste);
	int m1 = sizeof(struct_st.d);

	short m_sshort;
	int  m2 = sizeof(m_sshort);
	int m_param = 3;      //定义局部变量并赋值	   
	cout << "m_param = " << m_param << endl;
	::m_param = 2;    //给全局变量赋值  
	cout << "m_param = " << ::m_param << endl;

	signed char x = 0xff;
	printf("%d\n" , ++x);

	int mm = 5;
	if (mm++ > 5)
		cout << mm << endl;
	else cout << --mm;	 
	signed char y = 0x05;
	cout << y << endl;

	
	system("Pause");
	return 0;
}

int binary_search(const Ordered_list<int> &the_list ,
	const Key &target)
	/*Post: If an entry in the_list is equal to target, then return the position
	of this entry.
	Otherwise return -1
	*/
{
	int position;
	int data;
	int bottom = 0 , top = the_list.size() - 1;
	while (bottom <= top){
		position = ( bottom + top ) >> 1;
		the_list.retrieve(position , data);
		if (data == target)
			return position;
		if (data<target)bottom = position + 1;
		else top = position - 1;
	}
	return -1;
}

int _tmain(int argc , _TCHAR* argv[])
{

	//char a[] = "ABCDEF";//数组中占7位
	//char b[] = { 'A' , 'B' , 'C' , 'D' , 'E' , 'F','\0' }; //数组中占6位
	//int i = sizeof(a);



	char ccString1[] = "Is Page Fault??";
	char ccString2[] = "No Page Fault??";
	strcpy(ccString1 , "No");
	if (strcmp(ccString1 , ccString2) == 0)
		cout << ccString2;
	else
		cout << ccString1;



	//int i = 0 , a = 1 , b = 2 , c = 3;
	//i = ++a || ++b || ++c;
	//printf("%d %d %d %d" , i , a , b , c);

	int i = INT_MIN;
	printf("%d,%d,%d,%d" , ~i , -i , 1 - i , -1 - i);

	system("Pause");
	return 0;
}
