/*Sort a given set of N integer elements using Selection Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.*/

#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

int main()
{
	int n;
	clock_t time_req;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	auto start = high_resolution_clock::now(); 
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
	
	auto stop = high_resolution_clock::now(); 
	auto duration = duration_cast<microseconds>(stop - start); 
	
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	cout << "Time taken : "<< duration.count() << " microseconds" << endl;
  
	return 0;
}


/* output
Enter the size of the array
10
Sorted array is
15
21
35
49
77
83
86
86
92
93
Time taken : 1 microseconds
*/
	
