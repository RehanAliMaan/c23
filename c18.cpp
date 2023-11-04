#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int eve,odd,r;
	cout<<"enter even number"<<endl;
	cin>>eve;
	cout<<"enter odd number"<<endl;
	cin>>odd;
	r=1000-((eve*5)-(odd*3));
	cout<<"the result is"<<r<<endl;
}