#include<iostream>
#include<string>

using namespace std;

int main() {
	string s1;
	string s2 = "但我觉得还不错";
	cin >> s1;
	string S;
	S += s1;
	cout << "我想对你说:" << S << endl;
	S = S + "," + s2;
	cout << "实际上我想说：" << S << endl;
	return 0;
}