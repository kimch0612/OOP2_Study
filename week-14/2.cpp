#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<string, string> dic;

    dic.insert(make_pair("love", "사랑"));
    dic.insert(make_pair("blue", "파란색"));
    dic.insert(make_pair("lemon", "레몬"));
    dic.insert(make_pair("lion", "사자"));
    dic.insert(make_pair("tiger", "호랑이"));
    dic.insert(make_pair("apple", "사과"));
    dic.insert(make_pair("pork", "돼지"));
    dic["banana"] = "바나나";

    cout << "저장된 단어의 개수: " << dic.size() << endl;
    string eng;
    while (1)
    {
        cout << "찾고 싶은 단어: ";
        getline(cin, eng);
        if (eng == "exit") break;
        if (dic.find(eng) == dic.end()) cout << "없음" << endl;
        else cout << dic[eng] << endl; 
    }
    cout << "종료합니다." << endl;
}