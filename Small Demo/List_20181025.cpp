#include <QCoreApplication>
#include <iostream>

using namespace std;
struct Item {
    char c;
    Item *next;
};

Item *Routine1(Item *x)
{
    Item *prev = NULL, *curr = x;
    while (curr) {
        Item *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void Routine2(Item *x) {
    Item *curr = x;
    while (curr) {
         cout << curr->c << " ";
         curr = curr->next;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication aa(argc, argv);

    Item *x, d = {'d', NULL}, c = {'c', &d}, b = {'b', &c}, a = {'a', &b};
    x = Routine1(&a);
    Routine2(x);
    return aa.exec();
}

