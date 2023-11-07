#include<iostream>
using namespace std;
int k;
int result[6];
int arr[13];

void dfs(int x, int y)	//x 데이터셋의 인덱스, y 로또 숫자 
{
	if(y == 6) 
	{
		for(int i=0;i<6;i++)
		{
			cout<<result[i]<< " ";
		}cout<<endl;
		return;
	}
	for(int i=x;i<k;i++)
	{
		result[y] = arr[i];
		dfs(i+1, y+1);
	}
}
int main()
{
	
	while(1)
	{
		
		cin>>k;
		if(k==0)
			break;
		
		for(int i=0;i<k;i++)
		{	
			cin>>arr[i];
		}
//		for (int i = 0; i < k; i++)
//            cout << arr[i];
		dfs(0, 0);
	}
	
}
