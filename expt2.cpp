#include<iostream>
using namespace std;

class complexNumber
{
private: int realPart, imaginaryPart;
public: void readNumber()
	{
	cout<<"\n Enter the value of Real Part: ";
	cin>>realPart;
	cout<<"\n Enter the value of Imaginary Part: ";
	cin>>imaginaryPart;
	}

	void showNumber()
	{
	cout<<"\n Complex Number = "<<realPart<<" + "<<imaginaryPart<<"i";
	}

	complexNumber add(complexNumber b)
	{
	complexNumber sum;
	sum.realPart = realPart + b.realPart;
	sum.imaginaryPart = imaginaryPart + b.imaginaryPart;
	return sum;
	}
	
	complexNumber subtract(complexNumber b)
	{
	complexNumber difference;
	difference.realPart = realPart - b.realPart;
	difference.imaginaryPart = imaginaryPart - b.imaginaryPart;
	return difference;
	}

	complexNumber multiply(complexNumber b)
	{
	complexNumber product;
	product.realPart = realPart * b.realPart - 				   imaginaryPart * b.imaginaryPart;
	product.imaginaryPart = realPart * b.imaginaryPart + 
				realPart * b.imaginaryPart;
	return product;
	}

	complexNumber divide(complexNumber b)
	{
	complexNumber quotient;
	quotient.realPart =(realPart * b.realPart - 				    imaginaryPart * b.imaginaryPart)/ 		(b.realPart*b.realPart + b.imaginaryPart*b.imaginaryPart);
	quotient.imaginaryPart =(realPart * b.imaginaryPart + 
				 realPart * b.imaginaryPart)/
	(b.realPart*b.realPart + b.imaginaryPart*b.imaginaryPart);
	return quotient;
	}
};

int main()
{
complexNumber a, b, c;
int choice;
cout<<"\n MENU \n 1. ADDITION \n 2. SUBTRACTION \n 3. MULTIPLICATION \n 4. DIVISION \n ENTER YOUR CHOICE : ";
cin>>choice;

switch (choice)
{
case 1:
cout<<"\n Operation Selected : ADDITION";	
a.readNumber();
b.readNumber();
c = a.add(b);
c.showNumber();
break;

case 2:
cout<<"\n Operation Selected : SUBTRACTION";
a.readNumber();
b.readNumber();
c = a.subtract(b);
c.showNumber();
break;

case 3:
cout<<"\n Operation Selected : MULTIPLICATION";
a.readNumber();
b.readNumber();
c = a.multiply(b);
c.showNumber();
break;

case 4:
cout<<"\n Operation Selected : DIVISION";
a.readNumber();
b.readNumber();
c = a.divide(b);
c.showNumber();
break;

default : cout<<"\n WRONG OPTION!!! TRY AGAIN";
}
return 0;
}
