#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> v;

    for (int i = 0;i < score.size();i++) {
        v.push(score[i]);
        if (v.size() > k) {
            v.pop();
        }
        answer.push_back(v.top());
    }

    return answer;
}
