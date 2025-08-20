#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int len = arr1.size(); int num;
    int hig = arr1[0].size();
    vector<vector<int>> answer(len, vector<int>(hig, 0));


    for (int i = 0; i < len; i++) {
        for (int j = 0; j < hig; j++) {
            num = arr1[i][j] + arr2[i][j];
            answer[i][j] = num;
        }
    }

    return answer;
}