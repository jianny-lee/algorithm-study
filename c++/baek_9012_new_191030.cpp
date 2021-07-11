#include <iostream>
#include <stack>
#include <string>

using namespace std;

string braces;
char tmpBraces;

bool checkVPS(string str)
{
    stack<char> stackPS;
    int length = str.length();
    // cout << str.length()  << endl;
    for (int i = 0; i < length; i++)
    {
        tmpBraces = str[i];
        if (tmpBraces == '(')
            stackPS.push(str[i]);
        else
        {
            if (!stackPS.empty())
                stackPS.pop();
            else
            {
                return false;
            }
        }
        
    }
    return stackPS.empty();
}
int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        cin >> braces;
        if (checkVPS(braces))
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}