#include<vector>
#include<iostream>
using namespace std;

int ugly_number(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		vector<int> v;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				v.push_back(i);
			}
		}
		int i=0;
		for(;i<v.size();)
		{
			if(i==2||i==3||i==5)
			{
				i++;
			}
			else
			{
				return 0;
				break;
			}//break;
			
		}
		if(i==v.size())
		{
			return 1;
		}
		
	}
}

int main(void)
{
	int n;
	cin>>n;
	
	cout<<ugly_number(n)<<endl;
}
