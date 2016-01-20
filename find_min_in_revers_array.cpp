//http://ac.jobdu.com/problem.php?pid=1386
//思路比较简单，找最小的那个数
//因为是递增数列的翻转，那么只要有一个数比她之前的那个数小就是最小的数了 
//翻了下论坛，发现有人说万一没翻转呢，万一有两个数相等呢
//唔，题目只给了一组测试数据，我也不知道，不知道如果2个数相等算不算递增了
//不过相等的情况不会影响这个结果吧，然后如果没有翻转，那么第一个数就是最小的 
//讨论帖见http://t.jobdu.com/thread-8109-1-1.html
//有人说logn的不过，我觉得这个用2分法有点复杂化了 

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
	//如果数组没有翻转 
	if(i==(v.size()-1))
	{
		cout<<v[0]<<endl;
	}
}
