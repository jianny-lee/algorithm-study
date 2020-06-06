#include <iostream>
#include <queue>
#include <vector>

using namespace std;

priority_queue<int,vector<int>,less<int>> pq;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    
    cin >> n;
    
    for(int i = 0;i<n;i++){
        cin >> x;
        if(x==0&&pq.empty()){
            cout << 0 << "\n";
        } else if(x==0){
            int min = pq.top();
            cout << min << "\n";
            pq.pop();
        }
        else pq.push(x);
    }
    return 0;
}
