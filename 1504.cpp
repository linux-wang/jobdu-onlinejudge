/*
http://ac.jobdu.com/problem.php?pid=1504
*/

#include<iostream>
#include<vector>
using namespace std;

int get_n(int n)
{
	int i=0;
	while(n)
	{
		i++;
		n=n/10;
	}
//	cout<<"n:"<<n<<endl;
	return i;
}

void get_min(vector<int> v)
{
	int max;
	max=0;
	
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>v[max])
			max=i;
	}
//	cout<<"max:"<<max<<"  "<<"v[max]:"<<v[max]<<endl;
	
	int t_max=get_n(v[max]);
//	cout<<"t_max:"<<t_max<<endl;
	cout<<"****************************"<<endl;
	vector<int> v1;
	for(int i=0;i<v.size();i++)
	{
		
		if(v[i]<v[max])
		{
//			cout<<"test"<<endl;
			int t=get_n(v[i]);
			int vi=v[i];
			int t1=t_max-t;
			while(t1)
			{
				vi=vi*10;
				t1--;
			}
			
			v1.push_back(vi);
		}
		else
		{
			v1.push_back(v[i]);
		}
		cout<<"v1[i]"<<v1[i]<<endl;
	}

	int min;
	vector<int> v2;
	cout<<"*********************"<<endl;
	
	for(int i=0;i<v1.size();i++)
	{
		v2.push_back(i);
	}
	
	for(int i=0;i<v1.size();i++)
	{
	
		for(int j=i;j<v1.size();j++)
		{
			if(v1[i]>v1[j])
			{
				
				int t;
				
				t=v1[i];
				v1[i]=v1[j];
				v1[j]=t;
				
				int q;
				
				q=v2[i];
				v2[i]=v2[j];
				v2[j]=q;
			}			
		}
		
	//	v2.push_back(min);
	}
	
	cout<<"**************************"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<endl;
	}
	
	cout<<"**************************"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		cout<<v[v2[i]];
	}
	
	
}

int main(void)
{
	vector<int> v;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	
	get_min(v);
}


