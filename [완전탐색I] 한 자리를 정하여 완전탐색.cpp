#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int min = INT_MAX, sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){
                continue;
            }
            sum += arr[j] * abs(j - i);
        }
        if(sum < min){
            min = sum;
        }
        sum = 0;
    }
    cout << min;

    return 0;
}
