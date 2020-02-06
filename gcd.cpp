/* a) Write a recursive program to ii) To find GCD*/
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;

	else
		return gcd(b,a%b);
}

int main()
{
	int x,y;
	cout<<"Enter the two numbers"<<endl;
	cin>>x>>y;
	cout<<gcd(x,y)<<endl;
	return 0;
}



/* output
Enter the two numbers
15 6
3
 */
	 
