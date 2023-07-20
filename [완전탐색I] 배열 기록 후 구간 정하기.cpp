#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;
int main() {
    
    int n, k;
    cin >> n >> k;

    int arr[MAX] = {};  //변수 선언 및 초기화

    for(int i = 0; i < n; i++){  //배열에 입력받은 문자의 위치와 점수를 기록(위치 : index, 점수 : 1 or 2)
        int loc;
        char c;
        cin >> loc >> c;
        if(c == 'G'){
            arr[loc] = 1;
        }
        else{
            arr[loc] = 2;
        }
    }
    
    int maxVal = 0;
    for(int i = 1; i <= MAX; i++){
        int tempSum = 0;
        if(i + k < MAX){  // i 의 탐색범위 와 사진의 크기가 배열 범위 벗어나지 않을때
            for(int j = i; j <= k+i; j++){
              tempSum += arr[j];    //사진 크기 구간의 최댓값 저장
            }
        }
        else{
            break;
        }
        
        maxVal = max(maxVal, tempSum);  //최댓값 갱신
    }
    
    cout << maxVal;

    return 0;
}
