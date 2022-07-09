// CPP program to illustrate
// push_back() function

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> myvector{ 1, 4, 9 };
	myvector.push_back(16);

	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
    
    return 0;

}
