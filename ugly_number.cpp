/*
题目链接： http://ac.jobdu.com/problem.php?pid=1214
首先判断是否是丑数：开始我的想法是找因子，然后判断是不是只有这三个因子
不过想了想如果是29这种素数，还得判断是不是2，3，太麻烦，然后看了一下网上
见： http://www.zybang.com/question/ae859a42ba22e27173be66a934d6ce3f.html
思路就明了了，后来自己又推断，也走到了上面的思路，见链接
 http://pan.baidu.com/s/1bl8bL0
*/

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
		while(n%2==0)
		{
			n=n/2;
		} 
		while(n%3==0)
		{
			n=n/3;
		}
		while(n%5==0)
		{
			n=n/5;
		}
		while(n%7==0)
		{
			n=n/7;
		}
		if(n==0)
		{
			return 1;
		}
		if(n==1)
		{
			return 1;
		}
		else
			return 0;
		
	}
}

int main(void)
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<100;i++)
		if(ugly_number(i))
			v.push_back(i);
	cout<<v[n-1]<<endl;
}
