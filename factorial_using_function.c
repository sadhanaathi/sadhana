#include <iostream>
using namespace std;
int  fact(int);
int main() {
	int n,i,f;
	cin>>n;
	f=fact(n);
	cout<<"The factorial of "<<n <<" is "<<f;
	return 0;
}
	int fact(int n)
	{
		if (n!=0)
		return (n*fact(n-1));
		else 
		return 1;
			}
