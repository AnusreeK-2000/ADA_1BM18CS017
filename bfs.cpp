#include<iostream>
using namespace std;


void bfs(int v,int n,int visited[],int a[][20])
{
	int q[n];
	int f=0,r=-1;
	for(int i=0;i<n;i++)
	{
		if(a[v][i] && !visited[i])
		{
			q[++r]=i;
		}
	}
		if(f<=r)
		{ 
                 	visited[q[f]]=1; 
                 	bfs(q[f++],n,visited,a); 
                } 
}
int main()
{
	int n;
	cout<<"Enter the no. of vertices"<<endl;
	cin>>n;
	
	int a[20][20],visited[n],q[n];
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
	}
	for(int i=0;i<n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	cout<<"Enter the start vertex"<<endl;
	int v;
	cin>>v;
	bfs(v,n,visited,a);
	cout<<"ALl the nodes reachable from "<<v<<" are "<<endl;
	for(int i=0;i<n;i++)
	{
		if(visited[i])
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	return 0;
}

		
