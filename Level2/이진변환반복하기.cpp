#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> a;    int cnt = 0;
    int j = 0;  int len; string b;
    while (1) {
       for (int i = 0;i < s.size();i++) {
            if (s[i] == '0') {
                cnt++;
                continue;
            }
            a.push_back(1);
        }

        len = a.size(); 
        for (int i = 0;i < a.size();i++) {
            if (len != 0) {
                b += to_string(len % 2);
            }
            s = b;
        }
        j++;
        if (a[0] == 1) {
            break;
        }
    }
    answer.push_back(j);
    answer.push_back(cnt);

    return answer;
}
