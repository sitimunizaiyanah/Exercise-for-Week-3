/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #3 Section 4
*/

#include<iostream>

using namespace std;

int main()
{
	int a,b,c,t;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	
	if (a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if (b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if (a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	cout<<"Numbers in ascending order:";

    cout << a << " " << b << " " << c << endl;

  return 0 ;
	  
}


