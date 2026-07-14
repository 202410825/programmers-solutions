#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
x = 0111010 // 1
1111 // 2
100 // 3
*/
vector<int> solution(string s) {
    vector<int> answer;
    string tmp; int cnt = 0;
    int lcnt = 0; 
    int len = 0;
    while (s != "1"){
        for (int i = 0;i < s.size();i++) { // 1 -> 2
            if (s[i] == '1') {
                tmp += '1'; 
            }
            else {
                cnt++;
                continue;
            }
        }
        len = tmp.size(); // 2 -> 3
        int a = 0;
        string rs = ""; // 새 이진수를 담을 빈 문자열
        while (len > 0) {
            if (len % 2 == 0) {
                rs = "0" + rs; // 나머지가 0이면 앞에 '0' 추가
            }
            else {
                rs = "1" + rs; // 나머지가 1이면 앞에 '1' 추가
            }
            len = len / 2; // 다음 자릿수를 위해 2로 나눔
        }
        s = rs;
        tmp = "";
        lcnt++;
    } 

    answer.push_back(lcnt); //answer[0]
    answer.push_back(cnt); //answer[1]


    return answer;
}
