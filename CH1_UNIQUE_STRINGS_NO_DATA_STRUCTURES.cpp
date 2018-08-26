#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string s = "mlhr";
	bool unique = true;
	for (int i = 0; i < s.size(); ++i) {
		for (int j = i+1; j < s.size(); ++j) {
			if (s[i] == s[j]) {
				unique = false;
				break;
			}
		}
	}

	if (unique) cout << "Unique strings" << endl;
	else cout << "Non unique strings" << endl;

	return 0;
}