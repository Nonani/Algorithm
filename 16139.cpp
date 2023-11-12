#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    int q;

    cin >> S >> q;
    for (int i = 0; i < q; i++)
    {
        char a;
        int x, y, cnt = 0;
        cin >> a >> x >> y;
        for(int j =x; j <= y; j++)
        {
            if(S[j] == a)
                cnt++;
        }
        cout << cnt << endl;
    }
}