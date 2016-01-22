//http://ac.jobdu.com/problem.php?pid=1513
//基本问题是一个十进制数转化为二进制数的过程
//然后再去计算1的个数就好了
//略微需要动脑子的是负数该如何计算，补码，按位取反，末位+1
//所以需要分情况讨论
//看输入输出的例子正数都对，-1的输出是32，这里我的答案是1
//32的情况可能是因为有个默认的位数吧，然而他并没有给出来 =。= 
 
#include<vector>
#include<iostream>
using namespace std;

vector<int> ten_two(int n)
{
	
	vector<int> v;
	int t;
	t=n;
	
	if(n==0)
	{
		//cout<<"test"<<endl;
		v.push_back(0);
	}
	else
	{
		if(n<0)
			n=-1*n;
		while(n)
		{
			v.push_back(n%2);
			n=n/2;
		}
		if(t<0)
		{
			for(int i=0;i<v.size();i++)
			{
				if(v[i]==0)
					v[i]=1;
				else
					v[i]=0;
			}
			
			int i=0;
			for(;i<v.size();)
			{
				if(v[i]==1)
					i++;
				else
					break;
			}
			
			if(i==0)
				v[i]=1;
			else
			{
				if(i==v.size())
				{
					for(int j=0;j<v.size();j++)
					{
						v[j]=0;
					}
					v.push_back(1);
				}
				else
				{
					for(int j=0;j<i;j++)
					{
						v[j]=0;
					}
					v[i]=1;
				}
			}
		}
	
	}

	return v;
}

int count_one(vector<int> v)
{
	int s;
	s=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==1)
			s++;
	}
	return s;
}

int main(void)
{
	int n;
	cin>>n;
	
	vector<int> v;
	
	while(n)
	{
		int t;
		cin>>t;
		v.push_back(t);
		n--;	
	}	

	cout<<"**********************"<<endl;
	for(int i=0;i<v.size();i++)
		cout<<count_one(ten_two(v[i]))<<endl;

} 
