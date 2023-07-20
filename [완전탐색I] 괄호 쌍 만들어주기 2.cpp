#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string str;
    cin >> str;              // 선언 및 초기화
    int n = str.length();    // 문자열 길이 저장

    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j <n-1; j++){
            if(str[i] == '(' && str[i+1] == '(' && str[j] == ')' && str[j+1] == ')'){  // 여는괄호 구간이 2연속 있고, 닫는괄호 구간이 2연속 있을때 cnt 증가
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
