#include<iostream>
using namespace std;

int f(int a, int b)
{
	return (a<b) ? a : b;
}
int main()
{
	
	int N;
	cin>>N;
	int cost[1001][3];
	int dp[1001][3];
	for(int i=1;i<=N;i++)
	{
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}
	
	dp[1][0] = cost[1][0];
	dp[1][1] = cost[1][1];
	dp[1][2] = cost[1][2];
	
	for(int i=2;i<=N;i++)
	{
		dp[i][0] = cost[i][0] + f(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = cost[i][1] + f(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = cost[i][2] + f(dp[i-1][0], dp[i-1][1]);
	}
	
	cout<<f(dp[N][0], f(dp[N][1], dp[N][2]));
	
	return 0;
}

