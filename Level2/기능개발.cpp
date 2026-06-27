#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int n = progresses.size();
    vector<int> lcnt(n);

    for (int i = 0; i < n; i++) {
        int remain = 100 - progresses[i];
        lcnt[i] = (remain + speeds[i] - 1) / speeds[i];
    }

    int max_day = lcnt[0];
    int cnt = 1;

    for (int i = 1; i < n;i++) {
        if (lcnt[i] <= max_day) {
            cnt++;
        }
        else {
            answer.push_back(cnt);
            max_day = lcnt[i];
            cnt = 1;
        }
    }

    answer.push_back(cnt);

    return answer;
}
