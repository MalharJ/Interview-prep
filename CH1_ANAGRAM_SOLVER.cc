#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string s1 = "malharq";
	string s2 = "qalmhra";

	if (s1.size() != s2.size()) {
		cout << "Not anagrams" << endl;
		return 0;
	}

	map<char, int> mp1,mp2;
	for (int i = 0; i < s1.size(); ++i) {
		mp1[s1[i]] = mp2[s2[i]] = 0;
	}

	for (int i = 0; i < s1.size(); ++i) {
		mp1[s1[i]] += 1;
		mp2[s2[i]] += 1;
	}

	if (mp1 == mp2) cout << "Anagrams" << endl;
	else cout << "Not anagrams" << endl;
	return 0;
}