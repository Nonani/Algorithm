#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool Stack(string str)
{
	int n = (int)str.length();
	stack<char> s;
	for(int i=0;i<n;i++)
	{
		if(str[i] == '(')
		{
			s.push(str[i]);
		}else{
			if(!s.empty())
				s.pop();
			else
				return false;
				
		}
	}
	return s.empty();
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str;
		if(Stack(str))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
