#include <iostream>
#include<vector>
#include <queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    int n = maps.size();
    int m = maps[0].size();

    int dx[] = { -1, 1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };

    queue<pair<int, int>> q;
    q.push({ 0,0 });


    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0;i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (maps[nx][ny] == 1) {
                    if (nx == 0 && ny == 0) continue;

                    maps[nx][ny] = maps[x][y] + 1;
                    q.push({ nx, ny });
                }

            }
        }

    }

    answer = maps[n - 1][m - 1];
    if (answer == 1) return -1;

    return answer;
}
