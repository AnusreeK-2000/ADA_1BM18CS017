/* Write recursive programs for the following:
a) Finding factorial of a given number*/

#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	cout<<"Enter n value"<<endl;
	cin>>n;
	cout<<"Factorial : "<<fact(n)<<endl;
	return 0;
}
/* output
Enter n value
5
Factorial : 120
*/
