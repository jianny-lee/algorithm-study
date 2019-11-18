#include <iostream>
#include <queue>

using namespace std;

queue < pair <int,int> > q; //큐 q
priority_queue<int> pq; //우선순위 큐 pq
int N,M;
int result[100];

int printQueue(int a){
    int count = 0;
    if(N ==1) count = 1;
    else {
        while(!q.empty()){
            if(pq.top()!=q.front().second){ //pq에 넣은 weight와 q에 넣은 weight의 값이 다르면
                pair <int,int> tmp = q.front(); //q의 가장 앞 정수를 tmp에 넣기
                q.pop();
                q.push(tmp);

            } else { //pq의 weight와 q의 weight가 같을때
                if(M == q.front().first){ //M과 q에 넣은 weight의 위치 값이 같으면 인쇄
                    count++;
                    break;
                }else{
                    count++;
                    pq.pop();
                    q.pop();
                }
            }
        }
    }
    result[a] = count;
    return result[a];
}
int main(){
    int test_case;
    cin >> test_case;

    for(int i=0;i<test_case;i++){
        cin >> N >> M;

        //weight값 넣고 queue에 값 넣음
        for(int j=0;j<N;j++){
            int weight;
            cin >> weight;
            q.push(pair<int,int>(j,weight)); //weight와 위치(j)를 같이 push
            pq.push(weight);

        }
        printQueue(i);

        //queue 초기화
        while(!q.empty()&&!pq.empty()){
            q.pop();
            pq.pop();
        }
    }

    for(int i=0;i<test_case;i++)
        cout << result[i] << endl;

    return 0;
}
