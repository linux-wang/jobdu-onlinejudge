//http://ac.jobdu.com/hhtproblems.php
//思路就是一个栈作为队列存数，另外一个作为取数 
//没记错的话当时考研复习的时候看过这个题，数据结构挺基本的一个
 
#include<stack>
#include<iostream>
using namespace std;

class queue{
	private:
		stack<int> s1;
		stack<int> s2;
	public:
		void push_back(int t);
		void pop_front();
		int size();
		void clear();
		void get_top();
	
};

int queue::size()
{
	int size;
	if((s1.size()==0)&&(s2.size()==0))
	{
		size=0;
	}
	else
	{
		if(s1.size())
			size=s1.size();
		else
			size=s2.size();
	}
	return size;
}

void queue::clear()
{
	if((s1.size()==0)&&(s2.size()==0))
	{
		cout<<"queue is already clear"<<endl;
	}
	else
	{
		if(s1.size())
		{
			while(s1.size())
			{
				s1.pop();
			}
		}
		if(s2.size())
		{
			while(s2.size())
			{
				s2.pop();
			}
		}
	}
}

void queue::push_back(int t)
{
	if(s1.size()==0)
	{
		s2.push(t);
	}
	else
	{
		s1.push(t);
	}
}
void queue::pop_front()
{
	if((s1.size()==0)&&(s2.size()==0))
	{
		cout<<"the queue is already empty"<<endl;
	}
	else
	{
		if(s1.size()==0)
		{
			while(s2.size())
			{
				int t;
				t=s2.top();
				s2.pop();
				s1.push(t);
			}
			//cout<<s1.top()<<endl;
			s1.pop();
			while(s1.size())
			{
				int t;
				t=s1.top();
				s1.pop();
				s2.push(t);
			}
		}
		else
		{
			while(s1.size())
			{
				int t;
				t=s1.top();
				s1.pop();
				s2.push(t);
			}
			//cout<<s2.top()<<endl;
			s2.pop();
			while(s2.size())
			{
				int t;
				t=s2.top();
				s2.pop();
				s1.push(t);
			}
		}
	}
}


int main(void)
{
	queue q;
	
	string s;
	cout<<"input your choice:";
	cin>>s;
	
	while(s.size())
	{
		if(s=="exit")
		{
			break;
		}
		if(s=="push")
		{
		//
			int t;
			cout<<"input the num you want to push:";
			cin>>t;
			q.push_back(t);
			cout<<"input your choice:";
			cin>>s;
		}
		else
		{
			if(s=="pop")
			{
				//pop
				q.pop_front();
				cout<<"input your choice:";
				cin>>s;
			}
			else
			{
				if(s=="size")
				{
					cout<<q.size()<<endl;
					cout<<"input your choice:";
					cin>>s;
				}
				else
				{
					if(s=="clear")
					{
						q.clear();
						cout<<"input your choice:";
						cin>>s;
					}
					else
					{
						cout<<"wrong input"<<endl;
						cout<<"input your choice:";
						cin>>s;
					}
				}
			}
		}
	}		
}


