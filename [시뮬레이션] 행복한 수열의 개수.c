#include <iostream>
using namespace std;
int main() {
    
    int n, m;
    cin >> n >> m;

    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int cnt = 0;
    if(m == 1){
        cnt = 2*n;
    }
    else{
        for(int i = 0; i < n; i++){
            int tempCnt=1;
            for(int j = 0; j < n-1; j++){
                if(arr[i][j] == arr[i][j+1]){
                    tempCnt++;
                    //cout << arr[i][j] << ' ' << arr[i][j+1] << endl;
                }
                else{
                    tempCnt = 1;
                }
                if(tempCnt>=m){
                    cnt++;
                    break;
                }
            }
        }
        for(int j = 0; j < n; j++){
            int tempCnt=1;
            for(int i = 0; i < n-1; i++){
                if(arr[i][j] == arr[i+1][j]){
                    tempCnt++;
                }
                else{
                    tempCnt = 1;
                }
                if(tempCnt>=m){
                    cnt++;
                    break;
                }
            }
        }
    }


    cout << cnt;
    

    return 0;
}
