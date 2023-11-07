#include<iostream>
using namespace std;
int Max(int a, int b)
{
	return (a>b)?a:b;
}
int main()
{
	int dp[502][502] = {0, };
	int cost[500] = {0, };
	int N;
	cin>>N;
	int num;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>num; 
			dp[i][j] = Max(dp[i-1][j-1], dp[i-1][j]) + num;
		}
//		for(int j=1;j<=i;j++)
//			cout<<dp[i][j]<<" ";
//		cout<<endl<<endl;
	}
	int max = -1;
	for(int i=1;i<=N;i++)
	{
		if(max<dp[N][i])
			max = dp[N][i];
	}
	cout<<max;
}
