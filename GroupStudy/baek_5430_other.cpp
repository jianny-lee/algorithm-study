#include <iostream>
#include <deque>
#include <string>

using namespace std;

string word;

int main()
{
    int T, n;
    cin >> T; //test case 입력
    if (T > 100)
        exit(-1);

    for (int i = 0; i < T; i++)
    {
        deque<string> dqFunc;
        deque<string> dqArr;
        string p;
        cin >> p; //함수 입력
        if (p.length() > 1000000 || p.length() < 1)
            exit(-1);
        else
        {
            for (int j = 0; j < p.length(); j++)
            { //입력한 함수를 dqFunc인 덱에 넣음
                word += p[j];
                dqFunc.push_back(word);
                word.clear();
            }
        }
        cin >> n; //배열의 개수 입력
        if (n > 1000000 || n < 0)
            exit(-1);

        string arr, tempArr;
        cin >> arr;
        for (int k = 0; k < arr.length(); k++) //deque에 push하는 반복문
        {
            cout << "i : " << k << endl;
            if (arr[k] == '[')
                continue;
            else if ('1' <= arr[k] && '9' >= arr[k])
            {
                tempArr += arr[k];
            }
            else if (arr[k] == ',' || arr[k] == ']')
            {
                if (!tempArr.empty())
                {
                    string num = tempArr;
                    dqArr.push_back(num);
                    tempArr.clear();
                }
            }
        }

        int funcSize = dqFunc.size();
        for (int z = 0; z < funcSize; z++)
        {
            if (dqFunc.front() == "R")
            {
                int size = dqArr.size();
                deque<string> rDeque;
                for (int j = 0; j < size; j++)
                {
                    string newArr = dqArr.back();
                    rDeque.push_back(newArr); // R함수를 거친 후 나오는 최종 덱
                    newArr.clear();
                    dqArr.pop_back();
                }
                dqArr = rDeque;
                dqFunc.pop_front();
            }
            else if (dqFunc.front() == "D")
            {
                if (dqArr.empty())
                {
                    dqArr.push_back("error");
                    break;
                }
                else
                {
                    dqArr.pop_front();
                }
            }
        }
    }
}