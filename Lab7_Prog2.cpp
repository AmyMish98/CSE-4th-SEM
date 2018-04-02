//23. Write a program for calculating interest amount making use of default arguments.

#include<iostream>
using namespace std;

class interest
{
  public:
  float amt, prin, rate;
  int time;
       interest(){}
       interest(float p, float r=0.25, int t=1)
       {
            prin=p;
            rate=r;
            time=t;
            float SI = (prin*rate*time)/100;
            amt = prin + SI;
            cout<<"\n Simple Interest: "<<SI;
            cout<<"\n Amount: "<<amt;
       }
};

int main()
{
    float p, r;
    int t;
    cout<<"\n Principal Amount: ";
    cin>>p;
    cout<<"\n Rate of Interest: ";
    cin>>r;
    cout<<"\n Time: ";
    cin>>t;
    interest x1(p,r,t);
    interest x2(p);
    interest x3(p,r);
    return 0;
}
