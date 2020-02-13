/*Sort a given set of N integer elements using Bubble Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.*/

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
		a[i]=rand()%100000;
	}
	auto start = high_resolution_clock::now(); 
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
20
Sorted array is
2362
13926
16649
20059
30886
36915
38335
41421
47793
55736
60492
68690
80540
83426
85386
89172
89383
90027
92777
97763
Time taken : 3 microseconds
*/
