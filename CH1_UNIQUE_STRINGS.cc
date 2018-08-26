#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string s = "reddit";
	std::map<char, int> mp;
	for (int i = 0; i < s.size(); ++i) {
		mp[s[i]] = 0;
	}

	for (int i = 0; i < s.size(); ++i) {
		mp[s[i]] += 1;
	}

	for (map<char,int>::iterator it = mp.begin(); it != mp.end(); ++it) {
		cout << it->first << " " << it->second << endl;
	}

	bool unique = true;
	for (map<char,int>::iterator it = mp.begin(); it != mp.end(); ++it) {
		if (it->second > 1) {
			unique = false;
		}
	}

	if (unique) {
		cout << "Unique Strings" << endl;
	}
	else {
		cout << "Non unique strings" << endl;
	}

	return 0;
}