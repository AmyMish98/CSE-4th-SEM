//18. Write a Program to perform the swapping of two data items of integer, floating point number and charactertype with the help of function overloading.

#include<iostream>
using namespace std;
class number
{
public:
int a1,b1;
float a2,b2;
char a3,b3;
void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

void swap(float &a, float &b)
{
    float temp = a;
    a=b;
    b=temp;
}

void swap(char &a, char &b)
{
    char temp = a;
    a=b;
    b=temp;
}
};

int main()
{
    number num;
    cout<<"\n Enter two integer numbers: ";
    cin>>num.a1>>num.b1;
    cout<<"\n Enter two floating-point numbers: ";
    cin>>num.a2>>num.b2;
    cout<<"\n Enter two characters: ";
    cin>>num.a3>>num.b3;
    cout<<"\n Swapping";
    num.swap(num.a1,num.b1);
    num.swap(num.a2,num.b2);
    num.swap(num.a3,num.b3);
    cout<<"\n Integer numbers: "<<num.a1<<" "<<num.b1;
    cout<<"\n Floating-point numbers: "<<num.a2<<" "<<num.b2;
    cout<<"\n Characters: "<<num.a3<<" "<<num.b3;
    return 0;
}
