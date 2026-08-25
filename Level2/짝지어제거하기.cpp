#include <iostream>
#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<int> stack;
    int answer = -1;
    int curr;
    for (int i = 0;i < s.length();i++) {
        if (i == 0) {
            stack.push(s[i]); 
        }
        else { /// i != 0
            curr = s[i];
            if (stack.empty()) {
                stack.push(curr);
                continue;
            }
            if (stack.top() == curr) {
                stack.pop();
            }
            else if (stack.top() != curr) {
                stack.push(curr);
            }
        }
    }
    
    if (stack.empty()) {
        return 1;
    }
    else {
        return 0;
    }

    return answer;
}
