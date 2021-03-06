/* Given a rod of length ‘n’ inches and an array of prices that contains prices of all pieces of size smaller than ‘n’. Determine the maximum value obtainable by cutting up the rod and selling the pieces. For example, if length of the rod is 8 and the values of different pieces are given as following, then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6)
‌
length | 1 2 3 4 5 6 7 8
price | 1 5 8 9 10 17 17 20
‌
And if the prices are as following, then the maximum obtainable value is 24 (by cutting in eight pieces of length 1)
‌
length | 1 2 3 4 5 6 7 8
price | 3 5 8 9 10 17 17 20
‌*/

#include<bits/stdc++.h>
using namespace std;


int cutRod(int price[], int n) 
{ 
	int val[n+1]; 
   	val[0] = 0; 
   	int i, j; 
  
   
   	for (i = 1; i<=n; i++) 
   	{ 
       		int maximum = -99; 
       		for (j = 0; j < i; j++) 
         		maximum = max(maximum, price[j] + val[i-j-1]); 
       		val[i] = maximum; 
   	} 
  
   	return val[n]; 
} 

int main()
{
	int n;
	cout<<"Enter the length of the rod"<<endl;
	cin>>n;
	int price[n];
	cout<<"Enter the price of each piece"<<endl;
	for(int i=0;i<n;i++)
		cin>>price[i];
	cout<<"The maximum obtainable value is : "<<cutRod(price,n)<<endl;
	return 0;
}

/*output
Enter the length of the rod
8
Enter the price of each piece
1 5 8 9 10 17 17 20
The maximum obtainable value is : 22
*/
