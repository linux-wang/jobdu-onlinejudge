/*
url:http://t.jobdu.com/thread-8114-1-1.html
思路是同时用一个矩阵存相应的数据矩阵是否被访问过
 注意边界条件 
*/

#include<iostream>
#define MAX 1000
using namespace std;


int main(void)
{
	int m,n;
	cout<<"a"<<endl;
	static int a[MAX][MAX];
	static int b[MAX][MAX];
	
	cin>>m>>n;
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int t;
			cin>>t;
			a[i][j]=t;
			b[i][j]=0;
		}
	}
	
	int i,j;
	int q;
	
	q=0;
	i=0;j=0;
	
	while(q<m*n)
	{
		while(j<n-1&&(b[i][j]==0))
		{
			cout<<a[i][j]<<" ";
			b[i][j]=1;
			j++;
			q++;
		}
		cout<<endl;
	
		
		while(i+1<m&&(b[i][j]==0))
		{
			cout<<a[i][j]<<" ";
			b[i][j]=1;
			i++;
			q++;
		}
		cout<<endl;

		
		while(j-1>=0&&(b[i][j]==0))
		{
			cout<<a[i][j]<<" ";
			b[i][j]=1;
			j--;
			q++;
		}
		cout<<endl;
		
		
		while(i-1>=0&&(b[i][j]==0))
		{
			cout<<a[i][j]<<" ";
			b[i][j]=1;
			i--;
			q++;
		}
		cout<<endl;
		
	}
	
	
}
