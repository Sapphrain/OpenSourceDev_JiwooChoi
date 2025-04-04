#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string student;
    double score;
    
    double sum, avg;
    string max_student;
    double max_score = -100;
    
    ifstream fin("scores.txt");
    
    // 에러 메세지
    if (!fin) {
        cerr << "Error opening scores.txt" << endl;
        return -1;
    }
    
    // 입력 및 계산
    int i = 0;
    while (fin >> student >> score) {
        sum += score;
        if (score > max_score) {
            max_student = student;
            max_score = score;
        }
        i++;
    }
    avg = sum / i;

    fin.close();

    // ---

    ofstream fout("result.txt");

    // 에러 메세지
    if (!fout) {
        cerr << "Error opening result.txt" << endl;
        return -1;
    }
    
    // 출력
    fout << fixed;
    fout.precision(2);
    fout << "총 " << i << " 명" << endl;
    fout << "합계: " << sum << endl;
    fout << "평균: " << avg << endl;
    fout << "최고점: " << max_student << " " << max_score << endl;

    fout.close();

    // 정상완료
    cout << "Results saved in result.txt." << endl;

    return 0;
}