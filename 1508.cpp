/*

url:http://ac.jobdu.com/problem.php?pid=1508

*/

#include<string>
#include<vector>
#include<iostream>
using namespace std;

int is_number(char a)
{
	if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')
		return 1;
	else
		return 0;
		
}

int is_pm(char a)
{
	if(a=='+'||a=='-')
		return 1;
	else
		return 0;	
}

void is_right_num(string s)
{
	int t;
	for(int i=0;i<s.size();i++)
	{
		if(i==0)
		{
			if(is_pm(s[i])&&s.size()>1)
			{
				t=1;
			}
			else
			{
				if(is_pm(s[i])&&s.size()==1)
				{
					cout<<"oh my god";
					break;
				}
				if(is_number(s[i]))
				{
					t=1;
				}
				else
				{
					t=0;
					break;
				}
			}
		}
		else
		{
			if(is_number(s[i]))
			{
				t=1;
			}
			else
			{
				t=0;
				break;
			}
		}
	}
	
	if(t==1)
	{
		if(is_pm(s[0]))
		{
			if(s[0]=='+')
				for(int i=1;i<s.size();i++)
				{
					cout<<s[i];
				}
			else
				cout<<s<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
	else
	{
		cout<<"oh my god"<<endl;
	}
}

int main(void)
{
	string s;
	cin>>s;
	
	is_right_num(s);
	
}
