#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++){    //배열 선언 및 초기화
        cin >> arr[i];
    }

    int min = INT_MAX, sum = 0;    //최솟값 설정(바뀔 수 있도록 큰수로 설정, 합 초기화
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){            //같은 집을 탐색하면 스킵
                continue;
            }
            sum += arr[j] * abs(j - i);    //해당 집 사람수 * 이동거리 저장
        }
        if(sum < min){    //최솟값 갱신
            min = sum;
        }
        sum = 0;        //탐색에 재활용가능 하도록 sum = 0 으로 초기화
    }
    cout << min;

    return 0;
}
