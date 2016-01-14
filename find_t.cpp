//http://ac.jobdu.com/problem.php?pid=1384
//这个题目遇到了栈溢出的问题，可以看我博客http://www.cnblogs.com/wswang/p/5127754.html
//至于如何查找就两种方法，这里没有具体写（懒
//还是要靠实践的，不然不知道会出什么问题，大家可以直接遍历查找，不过这样效率低
//也可以先查找在某行范围内，然后遍历这一行，想了想还是补充上吧

#include"header_file.h"
#define MAX 1000
using namespace std;

void find_t(int a[MAX][MAX],int m,int n,int t)
{		
	vector<int> v;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			v.push_back(a[i][j]);
		}
	}
	int i=0;
	for(;i<v.size();i++)
	{
		if(t==v[i])	
		{
			cout<<"yes"<<endl;
			break;
		}	
	}
	if(i==v.size())
	{
		cout<<"no"<<endl;
	}
}

int main(void)
{
	int m,n,t;
	//static int a[MAX][MAX];
	cin>>m>>n;
	cin>>t;
	int  (*p)[MAX] = new int[MAX][MAX]; 
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>p[i][j];
		}
	}
	
	find_t(p,m,n,t);
}
