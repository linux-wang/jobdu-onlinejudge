//��Ŀ���ӣ� http://ac.jobdu.com/problem.php?pid=1389
//����˼·ʵ���ϲ����Լ��������ģ��ǵ���һ�����۵�����ÿ��1��2��ѡ
//���ڸĳ���1-n��ѡ������ʵ������һ����
//˼·����һ���ģ�������д��˼·�� http://blog.csdn.net/hackbuteer1/article/details/6686747
//����׼���õݹ�ʵ�� 

#include<iostream>
using namespace std;

int bt_jump(int n)
{
	if(n==1||n==0)
		return 1;
	else
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=bt_jump(i);
		}
		return sum;
	}
}

int main(int argc,char *argv[])
{
	int n;
	cout<<"input n:";
	cin>>n;
	cout<<bt_jump(n)<<endl;
}
