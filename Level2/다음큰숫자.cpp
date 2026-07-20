#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 0;    int tmp, a = n+1; int acnt = 0; 
    while (n != 0) {
        if (n % 2 == 1) {
            cnt++;
        }
        n = n / 2;
    }

    while (1) {
        tmp = a;
        while(tmp != 0){
            if (tmp % 2 == 1) {
                acnt++;}
            tmp = tmp / 2;
        }
        if (acnt == cnt) {
            break;
        }
        else {
            a++; acnt = 0;
        }
    }

    return a;
}
