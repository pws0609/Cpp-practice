#include<iostream>
#include<string>
using namespace std;
int main() {
	string word;
	getline(cin, word);
	string newword;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == ' ')
			continue;
		newword.append(1,tolower(word[i]));
	}
	cout << newword;
}