/*
http://ac.jobdu.com/problem.php?pid=1371
*/

#include<vector>
#include<iostream>
using namespace std;

vector<int> bubble_sort(vector<int> a, int k)
{
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<a.size();j++)
		{
			if(a[i]>a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	return a;
}

void get_min_k(vector<int> v, int k)
{
	for(int i=0;i<k;i++)
	{
		cout<<v[i]<<" ";
	}
}

int main(void)
{
	int n,k;
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	v=bubble_sort(v,k);
	get_min_k(v,k);
}
