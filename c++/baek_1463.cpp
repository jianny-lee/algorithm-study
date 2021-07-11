#include <iostream>
#include <algorithm>

using namespace std;

int D[1000001];
int main()
{
    int num;

    //입력
    scanf("%d", &num);


    D[1] = 0;

    for (int n = 2; n <= num; n++) {
        D[n] = D[n - 1] + 1;

        if (n % 3 == 0)
            D[n] = min(D[n], D[n / 3] + 1);

        else if (n % 2 == 0)
            D[n] = min(D[n], D[n / 2] + 1);
    }

    //출력
    printf("%d\n", D[num]);

    return 0;
}
