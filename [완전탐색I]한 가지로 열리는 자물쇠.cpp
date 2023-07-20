#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int cnt = n * n * n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(abs(i-a) > 2 && abs(j-b) > 2 && abs(k-c) > 2){  //2 를 초과한 차이가 나는 경우 조건 만족 X -> sum 에서 cnt 감소
                    cnt--;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}
