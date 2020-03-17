//find nth fibonacci number
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	cout<<"Enter n value"<<endl;
	cin>>n;
	cout<<"Nth fibonacci no. is : "<<fib(n)<<endl;
	return 0;
}

/* output
Enter n value
6
Nth fibonacci no. is : 5
*/
