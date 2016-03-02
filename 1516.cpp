/*  url:http://ac.jobdu.com/problem.php?pid=1516


*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> sort_num(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i]%2!=0)
		{
			for(int j=i-1;j>=0;)
			{
				if(v[j]%2==1)
				{
					int t;
					t=v[i];
					for(int m=i;m>j;m--)
					{
						v[m]=v[m-1];
					}
					v[j+1]=t;
					break;
				}
				else
				{
					j--;
				}
			}
		}
	}
	
	return v;
}

int main(void)
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	
	v=sort_num(v);
	
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
}
