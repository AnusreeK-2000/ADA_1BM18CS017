/*Write an efficient program for printing k largest elements in an array. Elements in the array can be in any order. It is given that all array elements are distinct.*/

#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		int small=a[i];
		int pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				small=a[j];
				pos=j;
			}
		}
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	cout<<"Enter k value"<<endl;
	cin>>k;
	cout<<"k largest elements are"<<endl;
	for(int i=n-k;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
/* output
Enter the size of the array
10
enter the elements of the array
5 3 6 8  12 7 9 11 44 23
Enter k value
5
k largest elements are
9
11
12
23
44
*/
