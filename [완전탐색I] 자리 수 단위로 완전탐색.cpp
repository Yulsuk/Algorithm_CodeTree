#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    int arr[n][n];    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){  //선언 및 초기화
            cin >> arr[i][j];
        }
    }

    int maxCnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-2; j++){  //1 * 3 격자이므로, 두 칸을 덜 탐색해야 범위 알맞음
            maxCnt = max(maxCnt, arr[i][j]+arr[i][j+1]+arr[i][j+2]);// 1*3 의 합을 구한후 최댓값 갱신
        }
    }
    cout << maxCnt;
    

    return 0;
}
