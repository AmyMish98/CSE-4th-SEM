//To write a program to define a friend function which adds meters, centimeters and feet, inches and gives answer in feet and inches.
#include<iostream>
using namespace std;

class mcm
{
public:
    float dist2;
    float met, centim;
    mcm(float d)
    {
        dist2=d;
        met=(int)dist2;
        centim = (dist2-met)*100;
    }
};

class ftin
{
public:
    float dist1;
    float ft, inch;
    ftin(){}
    ftin(float d)
    {
    dist1=d;
    ft = (int)dist1;
    inch = (dist1 - ft)*12;
    }
    ftin friend calcdist(ftin obj1, mcm obj2);
    void display()
    {
        cout<<"\n Distance: "<<ft<<" feet "<<inch<<" inches";
    }
};

ftin calcdist(ftin obj1, mcm obj2)
{
    float d1=(obj2.dist2)*3.28084;
    ftin x1(d1);
    float d = x1.dist1+obj1.dist1;
    ftin res(d);
    return res;
}

int main()
{
    int d;
    cout<<"\n Enter Distance (in m): ";
    cin>>d;
    mcm obj2(d);
    cout<<"\n Enter Distance (in ft): ";
    cin>>d;
    ftin obj1(d);
    ftin result = calcdist(obj1, obj2);
    result.display();
    return 0;
}
