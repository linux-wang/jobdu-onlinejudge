//http://ac.jobdu.com/problem.php?pid=1515
//����N����ӡ1������Nλ����N=1����9
//N=2������99

#include<iostream>
#include<math.h>
using namespace std;

int get_max(int N)
{
	int max;
	max=0;
	if(N<=0)
		return 0;
	else
	{
		for(int i=0;i<N;i++)
		{
			max=9*pow(10,i)+max;
			
			//cout<<max<<endl;
		}
		return max;
	}
	
}

int main(void)
{
	int N;
	cin>>N;
	
	int max;
	max=get_max(N);
	
	if(max==0)
	{
		cout<<"wrong input"<<endl;
	}
	else
	{
	//	cout<<max<<endl;
		for(int i=1;i<=max;i++)
			cout<<i<<endl;
	}
		
} 
