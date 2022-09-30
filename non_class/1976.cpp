#include <iostream>
using namespace std;
int parent[201];
int plan[1001];
int N;
int M;

int Find(int x)
{
	
	if(x == parent[x])
		return x;
		
	else
		return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	
	if(x!=y)
		parent[y] = x;
}
int main()
{
	cin>>N>>M;
	for(int i=1; i<=N; i++)
		parent[i] = i;    
//	for(int i=1; i<=N; i++)
//    	cout<<i<<"의 루트 : "<<Find(i)<<endl;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
        {
        	int input;
        	cin>>input;	
        	if(input==1)
        		Union(i,j);
		}

	
//    for(int i=1; i<=N; i++)
//    	cout<<i<<"의 루트 : "<<Find(i)<<endl;
    
    for(int i=1; i<=M; i++)
	    cin>>plan[i];

    	    

	for(int i=1; i<M; i++)
	{
		if(Find(plan[i]) != Find(plan[i+1]))
		{
			cout<<"NO"<<endl;
		
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
	
    
        
}


