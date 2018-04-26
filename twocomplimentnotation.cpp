//Name: James Rodriguez
//Date: April 2018

#include <iostream>
using namespace std;

int main()
{
	int n,x;
	cout << "Enter a number: ";
	cin >> n;
	
	if(n<0)
	{
		cout << "\n1";
		x=32+n;
	}
	else
	{
		cout << "\n0";
		x=n;
	}

	int b=16;
	while(b>0.5)
	{
		if(x>=b)
			cout << "1";
		else
			cout << "0";
		x=x%b;
		b=b/2;
	}
	cout <<"\n";
	return 0;	
}
