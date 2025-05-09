#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("scores.txt");
    if(!fin) {
        cerr << "scores.txt 오픈 실패" << endl;
        return -1;
    }
    string student;
    double score;
    int cnt = 0;
    double sum = 0, sumSq = 0;
    while(fin >> student >> score) {
    	if(score <= 0) {
            continue;
        }
        else {
            cnt++;
            sum += score;
            sumSq += pow(score, 2);
        }
    }
    double avg = sum / cnt;
    double std_dev = sqrt((sumSq / cnt) - pow(avg, 2));
    
    cout << fixed;
    cout.precision(2);
    cout << "총 " << cnt << "명" << endl;
    cout << "합계 " << sum << endl;
    cout << "평균 " << avg << endl;
    cout << "표준편차 " << std_dev << endl;
    fin.close();

    return 0;
}