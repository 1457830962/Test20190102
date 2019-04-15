#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication aa(argc, argv);
    /**************************************************************************
**插入排序的原理：始终定义第一个元素为 有序的，将元素逐个插入到有序排列之中，其特点 
**是要不断的移动数据，空出一个适当的位置，把待插入的元素放到里面去
****************************************************************************/
    int a[]={4,0,2,3,1},i,j,t;
    for(i=1;i<5;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0&&t>a[j])
        {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=t;
    }
    printf("a数组：");
        for (int i = 0; i < 5; i++)
        {
            printf(" %d ", a[i]);
        }
        printf("\n");
    return aa.exec();
}

