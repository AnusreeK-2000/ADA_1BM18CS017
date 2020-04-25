#include<bits/stdc++.h>
using namespace std;
int a[20][20],n;
bool visited[20];
bool hascycle(int v,int parent)
{
	
		visited[v]=true;
		
		for(int i=0;i<n;i++)
		{
			if(a[v][i]==1){
				if(!visited[i]){
					if(hascycle(i,v))
						return true;
				}
				
				else if(i!=parent)
					return true;
			}
		}
	
	return false;
}

bool isCyclic()
{
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
		
	}
	for(int i=0;i<n;i++)
	{
		if(!visited[i]){
		if(hascycle(i,-1)){
			return true;
		}
		}
	}
	return false;
}

int main()
{
	int v;
	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	if(isCyclic())
	{
		cout<<"Present"<<endl;
	}
	else
		cout<<"not present"<<endl;

	
	
	return 0;
}

/*output
Enter the no of vertices
4
Enter the adjacency matrix
0 1 0 0
1 0 1 0
0 1 0 1
0 0 1 0
not present
anusree@anusree:~/Documents/ADA$ ./a.out
Enter the no of vertices
4
Enter the adjacency matrix
0 1 0 0
1 0 1 1
0 1 0 1
0 1 1 0
Present
*/
