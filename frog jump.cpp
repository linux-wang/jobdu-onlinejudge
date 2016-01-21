//http://ac.jobdu.com/problem.php?pid=1388
//思路就是穷举法，相当于解二元一次方程
//2x+y=n   x和y的取值范围很容易弄清楚
//看了他的输入输出例子，发现输入5输出的是8，说明位置不一样，也算不一样
//于是答案就又变成了x个1 y个2共有多少个不同的排列
 

#include<iostream>
using namespace std;

int cni(int i,int n)
{
	int s;
	int s1;
	s1=1;
	int s2;
	s2=1;
	
	if(i==0)
	{
		s=0;
	}
	else
	{
		for(int m=0;m<i;m++)
		{
			s1=s1*(n-m);
			s2=s2*(m+1);
		}
		s=s1/s2;
	}
	
	return s;
}

int main(int argc,char *argv[])
{
	int n;
	cin>>n;
	int s=0;
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=(n/2);j++)
		{
			if((i+2*j)==n)	
			{
				s=s+cni(i,i+j);		
			} 
		}	
	}
	
	cout<<s<<endl;	
}
 
