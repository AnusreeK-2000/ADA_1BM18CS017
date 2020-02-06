/* Given a sorted array with repeating integers. You need to find the first occurrence , last occurrence and count of a given key in the array. USE ONLY BINARY SEARCH. Your algorithm should run in LogN time.If element is not present print -1. */

#include<iostream>
using namespace std;

int first_occ(int a[],int f, int l, int key)
{
	int first=-1;
	while(f<=l)
	{
		int mid=(f+l)/2;
		if(a[mid]==key)
		{
			first=mid;
			l=mid-1;
		}
		else if(key>a[mid])
		{
			f=mid+1;
		}
		else 
		{
			l=mid-1;
		}
		
	}
	return first;
}
int last_occ(int a[],int f, int l, int key)
{
	int last=-1;
	while(f<=l)
	{
		int mid=(f+l)/2;
		if(a[mid]==key)
		{
			last=mid;
			f=mid+1;
		}
		else if(key>a[mid])
		{
			f=mid+1;
		}
		else 
		{
			l=mid-1;
		}
		
	}
	return last;
}
int main()
{
	int arr[100],n,k;
	cout<<"Enter the no.of elements and the key"<<endl;
	cin>>n>>k;
	cout<<"Enter the sorted elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int first=first_occ(arr,0,n-1,k); 
	int last=last_occ(arr,0,n-1,k);
	if(first!=-1 && last!=-1 )
	{
		cout<<"First occurrence = "<<first<<endl;
		cout<<"Last occurrence = "<<last<<endl;
		cout<<"Count = "<<(last-first+1)<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
	return 0;
}


/* output
Enter the no.of elements and the key
8
3
Enter the sorted elements of the array
1 2 3 3 3 4 5 6
First occurrence = 2
Last occurrence = 4
Count = 3
*/


		
		
