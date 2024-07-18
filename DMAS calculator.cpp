#include<iostream>
#include<conio.h>
using namespace std;

void DMAS(float a ,float b ,char dmas)
{
	float d;
	switch (dmas)
	{
	case '/':
		d=a/b;
		cout<<"Divison Of A and B is :: "<<d;
		break;
	case '*':
		d=a*b;
		cout<<"Multiplication Of A and B is :: "<<d;
		break;
	case '+':
		d=a+b;
		cout<<"Addition Of A and B is :: "<<d;
		break;
	case '-':
		d=a-b;
		cout<<"Subtraction Of A and B is :: "<<d;
		break;
	default :
		cout<<"Invalid Choose";

	}
}

int main()
{
	float a,b;
	char dmas;
	cout<<"Enter A's Value :: ";
	cin>>a;
	cout<<"Enter B's Value :: ";
	cin>>b;
	cout<<"Enter Opertor from (/,*,+,-) :: ";
	cin>>dmas;
	DMAS(a,b,dmas);
	getch ();
	return 0;
}