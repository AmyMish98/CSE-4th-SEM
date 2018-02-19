#include<iostream>
using namespace std;

class number
{
    int num;
    public: void readNumber()
            {
                cout<<"\n Enter an Integer number: ";
                cin>>num;
            }
            int getNumber()
            {
                return num;
            }
            friend void swapByValue(number n1, number n2);
            friend void swapByReference(number &n1, number &n2);
};

int main()
{
    number N1, N2;
    N1.readNumber();
    N2.readNumber();
    cout<<"\n Original Numbers : "<<N1.getNumber()<<" "<<N2.getNumber();
    swapByValue(N1, N2);
    cout<<"\n Original Numbers after Swapping By Value : "<<N1.getNumber()<<" "<<N2.getNumber();
    swapByReference(N1, N2);
    cout<<"\n Original Numbers after Swapped By Reference : "<<N1.getNumber()<<" "<<N2.getNumber();
    return 0;
}

void swapByValue(number n1, number n2)
{
    int temp=n1.num;
    n1.num=n2.num;
    n2.num=temp;
    cout<<"\n Formal parameters after Swapping By Value : "<<n1.getNumber()<<" "<<n2.getNumber();
}
void swapByReference(number &n1, number &n2)
{
    int temp=n1.num;
    n1.num=n2.num;
    n2.num=temp;
    cout<<"\n Formal parameters after Swapping By Value : "<<n1.getNumber()<<" "<<n2.getNumber();
}
