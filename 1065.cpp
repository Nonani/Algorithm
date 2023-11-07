#include<iostream>
using namespace std;

int search(int N)
{
	int answer = 99;
	if(N<100)
		return N;
	else if(N<111)
		return 99;
	else
	{
		for(int a=1;a<=9;a++)
		{
			for(int b=1;b<=9;b++)
			{
				for(int c=0;c<=9;c++)
				{
					if(100*a+b*10+c>N)
						return answer;
					else
					{
						
						if(2*b == a+c)
						{
							//cout<<100*a+b*10+c<<endl;
							answer++;	
						}
							
					}
				}
			}
		}
		return answer;
	}
}
int main()
{
	int answer;
	int N;
	cin>>N;
	
	answer = search(N);
	cout<<answer;
	return 0;
}
