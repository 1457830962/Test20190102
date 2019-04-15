#include <QCoreApplication>
#include <iostream>
using namespace std;
void SelectionSort_1(int *a,int n);
void SelectionSort_2(int *a,int n);

void SelectionSort_1(int *a,int n)
{
    int min;
    int temp;
    int i,j;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
void SelectionSort_2(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication aa(argc, argv);
/**************************************************************************
**选择排序原理是，先选取第一个数与其他所有数比较，把比较后的最小的数与第一个数交
** 换，这样每执行一次循环就会将最小的数排到最左边，并且下一次循环比较时就会从第
** 二个数再进行比较，也就是少比较一次，同冒泡排序的循环体一样，也分为外循环和内
** 循环，外循环每排出一个最小的数，内循环就会减少一次循环
****************************************************************************/
    int arr[]={2,1,6,3,8,4,9,5,7,0};
//    SelectionSort_1(arr,10);
    SelectionSort_2(arr,10);
    int k;
    for(k=0;k<10;k++)
    {
        printf("%d",arr[k]);
    }

    return aa.exec();
}

