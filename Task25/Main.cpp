// ������ ������ � ������� ������������� �������
#include<iostream>
#include<string>
using namespace std;

// ������ 2
bool word_pal(string word) {
	int len = word.size();
	for (int i = 0; i < len; i++)
		word[i] = tolower(word[i]);
	for (int i = 0; i < len / 2; i++)
		if (word[i] == word[len - i - 1])
			return true;
		else 
			return false;
	
}


// ������ 3
int punctuation(string str) {
	int sum = 0;
	string punct{" .,!?"};
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < str.size(); j++)
		if (str[j] == punct[i])
			sum++;

	return sum;
}


// ������ 4
string func(string str, char sym1) {
	string s;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym1)
			return str.substr(str.rfind(sym1));
		return s;
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ������ 1

	string str = "Hello World!";
	cout << "������� ������:";
	string sym;
	cin >> sym;
	string new_str;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym[0])
			new_str += sym;
	cout << new_str << '\n';

	// ������ 2

	cout << "������� �����: \n";
	string str2;
	cin.ignore();
	getline(cin, str2);
	if (word_pal(str2))
		cout << "����� ���������\n";
	else
		cout << "�� �������� �����������\n";

	// ������ 3

	string str3;
	cout << "������� �����������:";
	getline(cin, str3);
	cout << punctuation(str3) << '\n';

	// ������ 4

	char sym1;
	cout << "������� ������:";
	cin >> sym1;
	cout << func(str, sym1) << '\n';

	return 0;
}