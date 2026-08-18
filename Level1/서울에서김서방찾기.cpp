#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string X = "Kim";

    answer += "김서방은 ";
    int a = 0;
    for (int i = 0;i < seoul.size();i++) {
        if (X == seoul[i]) {
            a = i;
        }
    }
    answer += to_string(a);
    answer += "에 있다";

    return answer;
}
