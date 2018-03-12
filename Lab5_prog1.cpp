#include<iostream>
using namespace std;

class fibonacci
{
    public:
    int f0, f1;
    fibonacci ()
    {
        f0=0;
        f1=1;
    }
    fibonacci (int num1, int num2);
    fibonacci (fibonacci &obj)
    {
        f0=obj.f0;
        f1=obj.f1;
    }
    void nextnum()
    {
        int next = f0+f1;
        cout<<next<<"\t";
        f0=f1;
        f1=next;
    }
};

fibonacci::fibonacci(int num1, int num2)
{
    f0=num1;
    f1=num2;
}

int main()
{
    int n;
    fibonacci first;
    fibonacci second(0,1);
    fibonacci third (first);
    cout<<"\n FIBONACCI SERIES";
    cout<<"\n How many numbers do you want: ";
    cin>>n;
    cout<<"\n Using Constructor defined inside the class : \n";
    cout<<first.f0<<"\t"<<first.f1<<"\t";
    for (int i=0;i<n-2;i++)
        first.nextnum();

    cout<<"\n Using Constructor defined outside the class : \n";
    cout<<second.f0<<"\t"<<second.f1<<"\t";
    for (int i=0;i<n-2;i++)
        second.nextnum();

    cout<<"\n Using copy Constructor : \n";
    cout<<third.f0<<"\t"<<third.f1<<"\t";
    for (int i=0;i<n-2;i++)
        third.nextnum();

    return 0;
}
