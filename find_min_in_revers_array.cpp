//http://ac.jobdu.com/problem.php?pid=1386
//˼·�Ƚϼ򵥣�����С���Ǹ���
//��Ϊ�ǵ������еķ�ת����ôֻҪ��һ��������֮ǰ���Ǹ���С������С������ 
//��������̳����������˵��һû��ת�أ���һ�������������
//����Ŀֻ����һ��������ݣ���Ҳ��֪������֪�����2��������㲻�������
//������ȵ��������Ӱ���������ɣ�Ȼ�����û�з�ת����ô��һ����������С�� 
//��������http://t.jobdu.com/thread-8109-1-1.html
//����˵logn�Ĳ������Ҿ��������2�ַ��е㸴�ӻ��� 

#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> v;
	int n;
	
	cin>>n;
	while(n)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
		n--;
	}
	int i=0;
	for(;i<(v.size()-1);i++)
	{
		if(v[i]>v[i+1])
		{
			cout<<v[i+1]<<endl;
			break;
		}
	}
	//�������û�з�ת 
	if(i==(v.size()-1))
	{
		cout<<v[0]<<endl;
	}
}
