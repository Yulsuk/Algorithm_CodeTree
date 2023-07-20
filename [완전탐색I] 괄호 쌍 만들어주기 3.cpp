#include <iostream>
using namespace std;
int main() {
    
    string str;
    cin >> str;  //문자열 선언 및 초기화

    int len = str.length();  //문자열 길이 저장(반복수를 위해)
    int cnt = 0;
    for(int i = 0; i < len-1; i++){
        for(int j = i+1; j < len; j++){ 
            if(str[i] == '(' && str[j] == ')'){  //여는괄호, 닫느괄호가 만나면 cnt 증가
                cnt++;
            }
        }
    }

    cout << cnt;
    
    return 0;
}
