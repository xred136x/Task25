// проэкт создан с помощью персонального шаблона
#include<iostream>
#include<string>
using namespace std;

// Задача 2
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


// Задача 3
int punctuation(string str) {
	int sum = 0;
	string punct{" .,!?"};
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < str.size(); j++)
		if (str[j] == punct[i])
			sum++;

	return sum;
}


// Задача 4
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

	// Задача 1

	string str = "Hello World!";
	cout << "Введите символ:";
	string sym;
	cin >> sym;
	string new_str;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym[0])
			new_str += sym;
	cout << new_str << '\n';

	// Задача 2

	cout << "Введите слово: \n";
	string str2;
	cin.ignore();
	getline(cin, str2);
	if (word_pal(str2))
		cout << "слово палиндром\n";
	else
		cout << "не является палиндромом\n";

	// Задача 3

	string str3;
	cout << "Введите предложение:";
	getline(cin, str3);
	cout << punctuation(str3) << '\n';

	// Задача 4

	char sym1;
	cout << "Введите символ:";
	cin >> sym1;
	cout << func(str, sym1) << '\n';

	return 0;
}