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
static complexNumber add(complexNumber a, complexNumber b);
static complexNumber subtract(complexNumber a, complexNumber b);
static complexNumber multiply(complexNumber a, complexNumber b);
static complexNumber divide(complexNumber a, complexNumber b);
};

int main()
{
complexNumber a, b, c, d;
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
d = complexNumber::add(a,b);
c.showNumber();
d.showNumber();
break;

case 2:
cout<<"\n Operation Selected : SUBTRACTION";
a.readNumber();
b.readNumber();
c = a.subtract(b);
d = complexNumber::subtract(a,b);
cout<<"\n Through Member Function \n";
c.showNumber();
cout<<"\n Through Static Function \n";
d.showNumber();
break;

case 3:
cout<<"\n Operation Selected : MULTIPLICATION";
a.readNumber();
b.readNumber();
c = a.multiply(b);
d = complexNumber::multiply(a,b);
cout<<"\n Through Member Function \n";
c.showNumber();
cout<<"\n Through Static Function \n";
d.showNumber();
break;

case 4:
cout<<"\n Operation Selected : DIVISION";
a.readNumber();
b.readNumber();
c = a.divide(b);
d = complexNumber::divide(a,b);
cout<<"\n Through Member Function \n";
c.showNumber();
cout<<"\n Through Static Function \n";
d.showNumber();
break;

default : cout<<"\n WRONG OPTION!!! TRY AGAIN";
}
return 0;
}

static complexNumber add(complexNumber a, complexNumber b)
{
	complexNumber sum;
	sum.realPart = realPart + b.realPart;
	sum.imaginaryPart = imaginaryPart + b.imaginaryPart;
	return sum;
}

static complexNumber subtract(complexNumber a, complexNumber b)
{
	complexNumber difference;
	difference.realPart = realPart - b.realPart;
	difference.imaginaryPart = imaginaryPart - b.imaginaryPart;
	return difference;
}

static complexNumber multiply(complexNumber a, complexNumber b)
{
	complexNumber product;
	product.realPart = realPart * b.realPart - 				   imaginaryPart * b.imaginaryPart;
	product.imaginaryPart = realPart * b.imaginaryPart + 
				realPart * b.imaginaryPart;
	return product;
}

static complexNumber divide(complexNumber a, complexNumber b)
{
	complexNumber quotient;
	quotient.realPart =(realPart * b.realPart - 				    imaginaryPart * b.imaginaryPart)/ 		(b.realPart*b.realPart + b.imaginaryPart*b.imaginaryPart);
	quotient.imaginaryPart =(realPart * b.imaginaryPart + 
				 realPart * b.imaginaryPart)/
	(b.realPart*b.realPart + b.imaginaryPart*b.imaginaryPart);
	return quotient;
}
