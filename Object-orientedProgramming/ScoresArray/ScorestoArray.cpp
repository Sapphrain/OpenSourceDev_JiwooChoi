#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("scores.txt");
    ofstream fout("result.txt");
    if(!fin or !fout) {
        cout << "파일 없음" << endl;
        return 0;
    }
    string name;
    double arr[100]; // 파일에 몇개있는지 모라도, 100개는 넘지 않는다는 보장 있을 때 미리 넉넉히 100개로 잡음
    int count=0;
    while(fin >> name>> arr[count]) {
        count++;
    } // (arr[0] ~ arr[30] 0호차부터 30호차까지 실수 들어감)

    sort(arr, arr+count); // 정렬할 대상 메모리 시작주소, 끝주소 (목요일에 상세 설명 드립니다)
    
    for(int i=0; i<count; i++) {
        fout << arr[i] << endl;
    }
    
    cout << "end!!" << endl;
    fin.close();
    fout.close();
    
    return 0;
}