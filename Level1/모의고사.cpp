#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<int> answer1 = { 1, 2, 3, 4, 5 };
	vector<int> answer2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
	vector<int> answer3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

	vector<int> count;
	int count1 = 0, count2 = 0, count3 = 0;
	int num = 0; int max = -99;

	//answer1
	for (int i = 0; i < answers.size(); i++, num++) {
		if (num == answer1.size()) num = 0;
		if (answers[i] == answer1[num]) {
			count1++;
		}
	}
	count.push_back(count1);
	if (count1 > max) max = count1;

	//answr2
	num = 0;
	for (int i = 0; i < answers.size(); i++, num++) {
		if (num == answer2.size()) num = 0;
		if (answers[i] == answer2[num]) {
			count2++;
		}
	}
	count.push_back(count2);
	if (count2 > max) max = count2;

	//answer3
	num = 0;
	for (int i = 0; i < answers.size(); i++, num++) {
		if (num == answer3.size()) num = 0;
		if (answers[i] == answer3[num]) {
			count3++;
		}
	}
	count.push_back(count3);
	if (count3 > max) max = count3;

	for (int i = 1; i <= 3; i++) {
		if (count[i - 1] == max) {
			answer.push_back(i);
		}
	}

	return answer;
}