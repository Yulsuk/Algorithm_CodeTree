#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++){    //변수 선언 및 초기화
        cin >> arr[i];
    }

    int result = 0;
    for(int i = 0; i < n-k+1; i++){  // n-k+1 의 만큼 탐색해야함
        int tempSum = 0;
        for(int j = i; j < k+i; j++){  //i~k+i 만큼 탐색해야함
            tempSum += arr[j];
            //cout << tempSum << ' ';
        }
        result = max(tempSum, result); //갱신
    }

    cout << result;

    return 0;
}
