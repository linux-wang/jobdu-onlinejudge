//http://ac.jobdu.com/problem.php?pid=1388
//˼·������ٷ����൱�ڽ��Ԫһ�η���
//2x+y=n   x��y��ȡֵ��Χ������Ū���
//������������������ӣ���������5�������8��˵��λ�ò�һ����Ҳ�㲻һ��
//���Ǵ𰸾��ֱ����x��1 y��2���ж��ٸ���ͬ������
 

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
 
