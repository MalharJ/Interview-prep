#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string s = "malhar";
	string ret;
	for (int i = s.size(); i >= 0; --i) {
		ret.push_back(s[i]);
	}

	cout<<ret<<endl;
	return 0;
}