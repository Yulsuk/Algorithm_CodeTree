#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){  //선언 및 초기화
        cin >> arr[i];          
    }

    int cnt = 0;
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){  // i < j < k 를 만족하는 반복문
                if(arr[i] <= arr[j] && arr[j] <= arr[k]){  // 위 조건을 만족하며 소의 키 순서도 만족할 때 cnt++
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    
    return 0;
}
