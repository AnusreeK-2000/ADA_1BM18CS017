#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int a[20][20],n,visited[20],flag=0;
void dfs(int v)
{
	//s.push(v);
	
	visited[v]=1;
	cout<<v<<" ";
	
	for(int i=0;i<n;i++)
	{
		if(a[v][i]==1 && !visited[i])
		{
			
			
			dfs(i);
		}
		
	}
	/*while(!s.empty()){
		s.pop();
		dfs(s.top());
	}*/
	
	
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

	for(int i=0;i<n;i++)
		visited[i]=0;
	for(int i=0;i<n;i++)
	{
		if(!visited[i]){
			
			
			dfs(i);
		}
	}
	return 0;
}
	
