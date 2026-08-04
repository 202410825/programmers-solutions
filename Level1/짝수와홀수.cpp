#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    
    num = num % 2;
    
    if(num == 1 || num == -1){
        return "Odd";
    }
    else if(num == 0) {
        return "Even";
    }
    
    return answer;
}
