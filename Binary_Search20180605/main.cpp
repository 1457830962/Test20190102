#include <QCoreApplication>
#define SIZE 7
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int arr[SIZE]={5,8,36,48,50,58,88};
    int key,low=0,high=SIZE-1;
    int mid,index=-1;
    printf("please enter a search number!");
    scanf("%d",&key);
     int Tier=1,Times=0;
    while(low<=high)
    {
        Tier++;
        Times++;
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            index=mid;
            break;
        }
        if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }


    if(index>=0)
    {
        printf("Array lookup location:a[%d]\n",index);
        printf("关键字比较次数Timesr:%d\n",Times);
        printf("树高Tier:%d\n",Tier);

    }
    else
        printf("Not found!\n");

    return a.exec();
}
