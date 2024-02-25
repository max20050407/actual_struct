#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Football {
	string name;
	string city;
	string games;
	string loose;
	string win;
	string draw;
	string players;
	string tran;
};


int c1() {
	system("cls");
	system("color 71");

	ifstream dialog; dialog.open("dat/d1.txt");
	string line;
	getline(dialog, line); cout << line << endl;
	getline(dialog, line); cout << line << endl;

	ofstream teams; teams.open("data/teams.txt", ios::ate | ios::out | ios::app);
	Football new1 = {};

	//Ввод пользователя
	{getline(dialog, line); cout << line;
	 cin >> new1.name;
	 getline(dialog, line); cout << line;
	 cin >> new1.city;
	 getline(dialog, line); cout << line;
	 cin >> new1.games;
	 getline(dialog, line); cout << line;
	 cin >> new1.loose;
	 getline(dialog, line); cout << line;
	 cin >> new1.win;
	 getline(dialog, line); cout << line;
	 cin >> new1.draw;
	 getline(dialog, line); cout << line;
	 cin >> new1.players;
	 getline(dialog, line); cout << line;
	 cin >> new1.tran; }
	//Вывод данных в файл
	{teams << new1.name << endl;
	 teams << new1.city << endl; 
	 teams << new1.games << endl; 
	 teams << new1.loose << endl; 
	 teams << new1.win << endl;
	 teams << new1.draw << endl;
	 teams << new1.players << endl;
	 teams << new1.tran << endl;
	}

	teams.close(); dialog.close();

	return 0;
}
int c2() {
	system("cls");
	system("color 72");
	
	ifstream r_teams; r_teams.open("dat/teams.txt");
	string line;
	int cs = 0;
	while (getline(r_teams, line)) { cs++; }
	cs = cs / 8;
	r_teams.close();
	ifstream teams; teams.open("dat/teams.txt");
	Football* All = new Football[cs]{};
	for (int i = 0; i < cs; i++) {
		getline(teams, line); All[i].name = line;
		getline(teams, line); All[i].city = line;
		getline(teams, line); All[i].games = line;
		getline(teams, line); All[i].loose = line;
		getline(teams, line); All[i].win = line;
		getline(teams, line); All[i].draw = line;
		getline(teams, line); All[i].players = line;
		getline(teams, line); All[i].tran = line;
	}
	teams.close();

	ifstream dialog; dialog.open("dat/d2.txt");
	for (int i = 0; i < 10; i++) { getline(dialog, line); cout << line << endl; }
	int param; cin >> param;
	getline(dialog, line); cout << line << endl;
	string serch; cin >> serch;
	if (param == 1) {
		for (int i = 0; i < cs; i++) {
			if (All[i].name == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	if (param == 2) {
		for (int i = 0; i < cs; i++) {
			if (All[i].city == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	if (param == 3) {
		for (int i = 0; i < cs; i++) {
			if (All[i].games == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	if (param == 4) {
		for (int i = 0; i < cs; i++) {
			if (All[i].loose == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	if (param == 5) {
		for (int i = 0; i < cs; i++) {
			if (All[i].win == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	if (param == 6) {
		for (int i = 0; i < cs; i++) {
			if (All[i].draw == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	if (param == 7) {
		for (int i = 0; i < cs; i++) {
			if (All[i].players == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	if (param == 8) {
		for (int i = 0; i < cs; i++) {
			if (All[i].tran == serch)
			{
				cout << "Название команды          : " << All[i].name << endl;
				cout << "Город клуба               : " << All[i].city << endl;
				cout << "Колличество сигранных игр : " << All[i].games << endl;
				cout << "Колличество поражений     : " << All[i].loose << endl;
				cout << "Колличество побед         : " << All[i].win << endl;
				cout << "Колличество ничей         : " << All[i].draw << endl;
				cout << "Колличество футболистов   : " << All[i].players << endl;
				cout << "Фамилия тренера           : " << All[i].tran << endl;
				break;
			}
		}
	}
	dialog.close();

	return 0;
}
int c3() {
	system("cls");
	system("color 73");

	ifstream r_teams; r_teams.open("dat/teams.txt");
	string line;
	int cs = 0;
	while (getline(r_teams, line)) { cs++; }
	cs = cs / 8;
	r_teams.close();
	ifstream teams; teams.open("dat/teams.txt");
	Football* All = new Football[cs]{};
	for (int i = 0; i < cs; i++) {
		getline(teams, line); All[i].name = line;
		getline(teams, line); All[i].city = line;
		getline(teams, line); All[i].games = line;
		getline(teams, line); All[i].loose = line;
		getline(teams, line); All[i].win = line;
		getline(teams, line); All[i].draw = line;
		getline(teams, line); All[i].players = line;
		getline(teams, line); All[i].tran = line;
	}
	teams.close();
	for (int i = 0; i < cs; i++) {
		cout << "Команда номер " << i+1 << ":" << endl;
		cout <<"Название команды          : " << All[i].name << endl;
		cout <<"Город клуба               : " << All[i].city << endl;
		cout <<"Колличество сигранных игр : " << All[i].games << endl;
		cout <<"Колличество поражений     : " << All[i].loose << endl;
		cout <<"Колличество побед         : " << All[i].win << endl;
		cout <<"Колличество ничей         : " << All[i].draw << endl;
		cout <<"Колличество футболистов   : " << All[i].players << endl;
		cout <<"Фамилия тренера           : " << All[i].tran << endl;
		cout << endl;
	}

	return 0;
}
int c4() {
	system("cls");
	system("color 74");

	ifstream r_teams; r_teams.open("dat/teams.txt");
	string line;
	int cs = 0;
	while (getline(r_teams, line)) { cs++; }
	cs = cs / 8;
	r_teams.close();
	ifstream teams; teams.open("dat/teams.txt");
	Football* All = new Football[cs]{};
	for (int i = 0; i < cs; i++) {
		getline(teams, line); All[i].name = line;
		getline(teams, line); All[i].city = line;
		getline(teams, line); All[i].games = line;
		getline(teams, line); All[i].loose = line;
		getline(teams, line); All[i].win = line;
		getline(teams, line); All[i].draw = line;
		getline(teams, line); All[i].players = line;
		getline(teams, line); All[i].tran = line;
	}
	teams.close();

	ifstream dialog; dialog.open("dat/d4.txt");
	for (int i = 0; i < 10; i++) { getline(dialog, line); cout << line << endl; }
	int param; cin >> param; cout << endl;

	if (param == 3) {
		for (int i = 0; i < cs - 1; i++) {
			for (int j = 0; j < cs - 1; j++) {
				if (stoi(All[j].games) < stoi(All[j + 1].games)) {
					swap(All[j], All[j + 1]);
				}
			}
		}
	}
	if (param == 4) {
		for (int i = 0; i < cs - 1; i++) {
			for (int j = 0; j < cs - 1; j++) {
				if (stoi(All[j].loose) < stoi(All[j + 1].loose)) {
					swap(All[j], All[j + 1]);
				}
			}
		}
	}
	if (param == 5) {
		for (int i = 0; i < cs - 1; i++) {
			for (int j = 0; j < cs - 1; j++) {
				if (stoi(All[j].win) < stoi(All[j + 1].win)) {
					swap(All[j], All[j + 1]);
				}
			}
		}
	}
	if (param == 6) {
		for (int i = 0; i < cs - 1; i++) {
			for (int j = 0; j < cs - 1; j++) {
				if (stoi(All[j].draw) < stoi(All[j + 1].draw)) {
					swap(All[j], All[j + 1]);
				}
			}
		}
	}
	if (param == 7) {
		for (int i = 0; i < cs - 1; i++) {
			for (int j = 0; j < cs - 1; j++) {
				if (stoi(All[j].players) < stoi(All[j + 1].players)) {
					swap(All[j], All[j + 1]);
				}
			}
		}
	}

	for (int i = 0; i < cs; i++) {
		cout << "Команда номер " << i + 1 << ":" << endl;
		cout << "Название команды          : " << All[i].name << endl;
		cout << "Город клуба               : " << All[i].city << endl;
		cout << "Колличество сигранных игр : " << All[i].games << endl;
		cout << "Колличество поражений     : " << All[i].loose << endl;
		cout << "Колличество побед         : " << All[i].win << endl;
		cout << "Колличество ничей         : " << All[i].draw << endl;
		cout << "Колличество футболистов   : " << All[i].players << endl;
		cout << "Фамилия тренера           : " << All[i].tran << endl;
		cout << endl;
	}

	ofstream out; out.open("dat/teams_out.txt");
	for (int i = 0; i < cs; i++) {
		out << All[i].name << endl;
		out << All[i].city << endl;
		out << All[i].games << endl;
		out << All[i].loose << endl;
		out << All[i].win << endl;
		out << All[i].draw << endl;
		out << All[i].players << endl;
		out << All[i].tran << endl;
	}

	out.close();
	dialog.close();

	return 0;
}

int start() {
	system("cls");
	system("color 75");

	ifstream dialog; dialog.open("dat/ds.txt");
	string line;
	while (getline(dialog, line)) { cout << line << endl; }
	int ch;
	cin >> ch;
	dialog.close();
	if (ch == 1) { c1(); }
	if (ch == 2) { c2(); }
	if (ch == 3) { c3(); }
	if (ch == 4) { c4(); }
	return 0;
}

int main() {
	setlocale(LC_ALL, "RUS");
	start();
	system("pause");
	return 0;
}