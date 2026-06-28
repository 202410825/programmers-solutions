#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

        while (1) {
        if (n / 10 >= 10) {
            answer += n % 10;
            n = n / 10;
        }
        else {// n / 10 < 0
            answer += n / 10;
            answer += n % 10;
            break;
        }
    }

    return answer;
}
