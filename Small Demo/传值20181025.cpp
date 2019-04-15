        #include <QCoreApplication>
        #include <iostream>
        using namespace std;

        void swap_int(int a , int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        void swap_str(char*a , char*b)
        {
            char*temp = a;
            a = b;
            b = temp;
        }

        int main(int argc, char *argv[])
        {
            QCoreApplication aa(argc, argv);

            int a = 10;
            int b = 5;
            char*str_a = "hello world";
            char*str_b = "world hello";
            swap_int(a , b);
            swap_str(str_a , str_b);//这里传递的是字符串地址  所以为进行值交换   如要进行值交换可以传递指针的地址进行交换
            printf("%d %d %s %s\n",a,b,str_a,str_b);
            return aa.exec();
        }

