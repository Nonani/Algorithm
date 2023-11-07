#include<iostream>
using namespace std;

int cost[301];
int dp[301];

int Max(int a, int b)
{
	return (a>b)?a:b;
}
int main()
{
	
	int N;
	
	cin>>N;
	cost[0] = 0;
	dp[0] = 0;
	
	for(int i=1;i<=N;i++)
	{
		cin>>cost[i];
	}
	dp[N] = cost[N];
	for(int i=N;i>0;i--)
	{
		dp[i-2] = Max(dp[i-2], dp[i] + cost[i-2]);
		if(i-3>=0)
			dp[i-3] = Max(dp[i-3], dp[i] + cost[i-1] + cost[i-3]);
		else
		{
			dp[i-1] = Max(dp[i-1], dp[i]+cost[i-1]);
		}
			
		
	}
	cout<<max(dp[1], max(dp[2], dp[0]));
	return 0;
}
