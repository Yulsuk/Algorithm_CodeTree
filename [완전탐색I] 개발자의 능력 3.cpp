#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;



int main() {
    
    int arr[6], sum = 0;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
        sum += arr[i];
    }                            // 변수 선언 및 초기화

    int minDiff = INT_MAX;
    for(int i = 0; i < 6; i++){
        for(int j = i+1; j < 6; j++){
            for(int k = j+1; k < 6; k++){//모든 조합 수 돌면서 조합의 합 - (전체합 - 특정 조합의 합) 의 최솟값을 구함
                minDiff = min(minDiff, abs((sum-(arr[i]+arr[j]+arr[k])) - (arr[i]+arr[j]+arr[k])));
            }
        }
    }

    cout << minDiff;

    return 0;
}
