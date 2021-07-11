#include <iostream>
#include <stack>
#include <string>

using namespace std;
stack<char> strStack;
string checkStack(string str){
    int count = 0;
    for(int i=0;i<str.size();i++){
        char ch = str[i]; //string의 괄호들에 하나씩 접근
        if(ch == '('){ // ch가 '('일때
            strStack.push(ch);
            count++;
        } else { // ch가 ')'일때
            if(strStack.empty()){
                count--; 
            } else {
                strStack.pop();
                count--;
            }
        }

        if(count < 0){
            return "NO";
        }
    }

    if(count==0){
        return "YES";
    } else {
        return "NO";
    }
}
int main(){
    int test_case;
    cin >> test_case;
    for(int i=0;i<test_case;i++){
        string str;
        int count = 0;
        cin >> str;
        cout << checkStack(str) << endl;
    }
    return 0;
}
