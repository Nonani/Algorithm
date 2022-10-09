/*
 * @ Author: Jinwoo Choi
 * @ Create Time: 2022-10-07 18:02:33
 * @ Modified by: Jinwoo Choi
 * @ Modified time: 2022-10-09 14:39:28
 * @ Problem name: 스택 수열
 * @ Solution: stack
 * @ result: success
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cur_num = 1;
    string str = "";
    stack<int> stack;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        while (cur_num <= input)
        {
            stack.push(cur_num++);
            str += "+\n";
        }
        if (stack.empty())
        {
            str = "NO\n";
            break;
        }

        while (!stack.empty() && stack.top() >= input)
        {
            stack.pop();
            str += "-\n";
        }
    }
    cout << str;
    return 0;
}
