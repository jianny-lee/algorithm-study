#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int test_case;
stack<char> stackPS;
string strPS;
string tmp;
queue<string> result; //결과를 넣는 queue
char charPS;

string checkVPS()
{
    int psSize = stackPS.size();
    int count = 0;
    for (int i = 0; i < psSize; i++)
    {
        if (stackPS.top() == '(')
        {
            stackPS.pop();
            count++; //'('가 stackPS에 들어왔을 때 count++
        }
        else if (stackPS.top() == ')')
        {
            stackPS.pop();
            count--; //')'가 stackPS에 들어왔을 때 count++
        }
    }
    if (count != 0)
        tmp = "NO";
    else
        tmp = "Yes";

    return tmp;
}
int main()
{
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> strPS;
        if (strPS.length() > 50 || strPS.length() < 2)
            exit(-1);
        for (int j = 0; j < strPS.length(); j++)
        {
            charPS = strPS[j];
            stackPS.push(charPS);
        }
        result.push(checkVPS());
    }

    for (int i = 0; i < test_case; i++){
        cout << result.front() << endl;
        result.pop();
    }
    return 0;
}