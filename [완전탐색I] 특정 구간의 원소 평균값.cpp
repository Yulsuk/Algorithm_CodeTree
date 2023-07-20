#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){  //변수 선언 및 초기화
        cin >> arr[i];
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int tempSum = 0, div = 0;
            for(int k = i; k <= j; k++){  //특정 구간의 합과, 나누어줄 값인 div 저장
                tempSum += arr[k];
                div++;
            }
            for(int k = i; k <= j; k++){  //합과 div 의 값과, 해당 구간에 원소 값이 같으면 cnt 증가
                if((float)tempSum/div == (float)arr[k]){
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;
    

    return 0;
}
