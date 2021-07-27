// For windows only //
#include <bits/stdc++.h>
using namespace std;

int main()
{
	system("color a");
	string spam_word;
	int spam_time;
	cout << "[ CPam - written by Zoesads in C++ ]" << endl;
	cout << "<< Write something you want to spam >>\n" << ">>> ";
	getline(cin, spam_word);
	cout << "<< How many times you want to repeat spam word (from 1-5000 times) >>\n" << ">>> ";
	cin >> spam_time;
	for (int i = 0; i < min(max(spam_time, 1), 5000); +i++) cout << spam_word;
	cout << "\n\n<< Thanks for using my program ;)  >>\n" << endl;
	system("pause");
    return 0;
};