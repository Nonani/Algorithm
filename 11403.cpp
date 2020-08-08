#include <iostream>

using namespace std;

int input[101][101];

bool visited[101][101];

int n;

void go(int start,int x,int y)

{

    input[start][y] = 1;

    visited[start][y] = true;

    for(int i=1; i<=n; i++)

    {

        if(!visited[start][i] && input[y][i])

            go(start,y,i);

    }

    

}





int main()

{

    scanf("%d",&n);

    for(int i=1; i<=n; i++)

        for(int j=1; j<=n; j++)

            scanf("%d",&input[i][j]);

    

    for(int i=1; i<=n; i++)

    {

        for(int j=1; j<=n; j++)

        {

           if(!visited[i][i] && input[i][j])

               go(i,i,j);

        }

    }

    

    for(int i=1; i<=n; i++)

    {

        for(int j=1; j<=n; j++)

            printf("%d ",input[i][j]);

        printf("\n");

    }

    

    return 0;

}

