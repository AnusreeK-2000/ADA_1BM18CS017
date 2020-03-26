/* Modified bubble sort which runs in the order of 'n' time for the best case*/

#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

void modbubble(int arr[], int n) {  
    int i, j;  
    for (i = 0; i < n - 1; i++) {
        int flag = 0;
        for (j = 0; j < n - i - 1; j++)  
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag++;
            }
        if (flag == 0) break;
    }
}

int main() 
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=rand()%n;
	auto start=high_resolution_clock::now();
	modbubble(a,n);
	auto stop=high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start); 
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	cout<<"Time taken : "<<duration.count()<<" microseconds"<<endl;
	return 0;
    
}

/* output
Enter the size of the array
10
Sorted array is
1
2
3
3
5
5
6
6
7
9
Time taken : 1 microseconds
*/
