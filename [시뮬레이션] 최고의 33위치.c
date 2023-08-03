#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    int max = 0;
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < n-2; j++){
            cnt = 0;
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 3; l++){
                    if(arr[i+k][j+l] == 1){
                        cnt++;
                    }
                }
            }
            if(max < cnt){
                max = cnt;
            }
        }
    }

    cout << max;


    return 0;
}
