#include<iostream>
using namespace std;

class A
{
    int x,y;
public:
    void getdata()
    {
        cout<<"\n Enter x: ";
        cin>>x;
        cout<<"\n Enter y: ";
        cin>>y;
    }
    void display()
    {
        cout<<"\n x: "<<x;
        cout<<"\n y: "<<y;
    }
    friend A swapped(A obj);
};

A swapped(A obj)
{
        A next;
        next.x=obj.y;
        next.y=obj.x;
        return next;
}

int main()
{
    A obj1, obj2;
    obj1.getdata();
    obj2 = swapped(obj1);
    cout<<"\n Original Data : ";
    obj1.display();
    cout<<"\n Swapped Data : ";
    obj2.display();
    return 0;
}
