//
// 240429, Serok, List
//


#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    // 1. mylist = {5,4,3,4,2,1,1}
    list<int> mylist = { 5,4,3,4,2,1,1 };

    // 2. 4가 몇개 인지 출력
    int count_four = count(mylist.begin(), mylist.end(), 4);
    cout << "Number of 4s in the list: " << count_four << endl;

    // 3. sort 후 출력
    mylist.sort();
    cout << "List after sorting: ";
    for (int n : mylist) cout << n << " ";
    cout << endl;

    // 4. 중복 값 제거 후 출력
    mylist.unique();
    cout << "List after removing duplicates: ";
    for (int n : mylist) cout << n << " ";
    cout << endl;

    // 5. 리스트 맨 뒤에 7 추가 후 출력
    mylist.push_back(7);
    cout << "List after adding 7 at the end: ";
    for (int n : mylist) cout << n << " ";
    cout << endl;

    // 6. 리스트 맨 앞에 0 추가 후 출력
    mylist.push_front(0);
    cout << "List after adding 0 at the beginning: ";
    for (int n : mylist) cout << n << " ";
    cout << endl;

    return 0;
}
