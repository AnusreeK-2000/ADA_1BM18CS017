/*a) Write a recursive program to
i) Solve Towers-of-Hanoi problem*/

#include<iostream>
using namespace std;

void tower(int n,char src,char temp,char dest)
{
	if(n==1)
	{
		cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl; 
	}
	else
	{
		tower(n-1,src,dest,temp);
		cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl; 
		tower(n-1,temp,src,dest);
	}
}
int main()
{
	int num;
	cout<<"Enter the no. of discs"<<endl;
	cin>>num;
	tower(num,'A','B','C');
	return 0;
}

/* output
Enter the no. of discs
3
Move 1 from A to C
Move 2 from A to B
Move 1 from C to B
Move 3 from A to C
Move 1 from B to A
Move 2 from B to C
Move 1 from A to C
*/
