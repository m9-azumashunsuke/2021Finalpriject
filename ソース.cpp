#include<iostream>;
#include<string>;
#include<fstream>;
#include<vector>；
#include<cassert>;
#include<cstdio>;
#include<algorithm>;	
using namespace std;


class Player {
	string name;
	string position;
	int number;
	int age;
	string national;
	string club;
	int match;
	int goal;
	int assist;
	
public:
	void setName(const string& newName) { name = newName; }
	string getName() { return name; }
	void setPosition(const string& newPosition) { position = newPosition; }
	string getPosition() { return position; }
	void setNumber(int newNumber) { number = newNumber; }
	int getNumber() { return number; }
	void setAge(int newAge) { age = newAge; }
	int getAge() { return age; }
	void setNational(const string& newNational) { national = newNational; }
	string getNational() { return national; }
	void setClub(const string& newClub) { national = newClub; }
	string getClub() { return club; }
	void setMatch(int newMatch) { match = newMatch; }
	int getMatch() { return match; }
	void getGoal(int newGoal) { goal = newGoal; }
	int getGoal() { return goal; }
	void getAssist(int newAssist) { assist = newAssist; }
	int getAssist() { return assist; }
};




int main() {
	ofstream outfile("player.txt", ios_base::out);
	outfile << "Bruno.Fernandes  MF  18  26  Portugal  ManchesterUnited  37  18  12\n";
	outfile << "David.de.Gea  GK  1  30  Spain  ManchesterUnited  26  9  0\n";
	outfile << "Harry.Maguire  DF  5  28  England  ManchesterUnited  34  2  0\n";
	outfile << "Luke.shaw  DF  23  26  England  ManchesterUnited  32  1  5\n";
	outfile << "Wan-Bissaka  DF  29  23  England  ManchesterUnited  34  2  4\n";
	outfile << "Paul.Pogba  MF  6  28  France  ManchesterUnited  26  3  3\n";
	outfile << "Daniel.James  MF  21  23  Wales  ManchesterUnited  15  3  1\n";
	outfile << "Dean.Henderson  GK  26  24  England  ManchesterUnited  13  4  0\n";
	outfile << "Donny.van.de.Beek  MF  34  24  Netherlands  ManchesterUnited  19  1  1\n";
	outfile << "Scott.McTominay  MF  39  24  Scotland  ManchesterUnited  32  4  1\n";
	outfile << "Juan.Mata  MF  8  33  Spain  ManchesterUnited  9  1  2\n";
	outfile << "Fred  MF  17  28  Brazil  ManchesterUnited  30  1  0\n";
	outfile << "Kyle.Walker  DF  2  31  England  ManchesterCity  24  1  1\n";
	outfile << "Zinchenko  DF  11  24  Ukraine  ManchesterCity  20  0  0\n";
	outfile << "João.Cancelo  DF  27  27  Portugal  ManchesterCity  28  2  3\n";
	outfile << "Rodri  MF  16  25  Spain  ManchesterCity  34  2  2\n";
	outfile << "Kevin.De.Bruyne  MF  17  30  Belgium  ManchesterCity  25  6  12\n";
	outfile << "Gündogan  MF  8  30  Germany  ManchesterCity  28  13  2\n";
	outfile << "Bernardo.Silva  MF  20  26  Portugal  ManchesterCity  26  2  6\n";
	outfile << "Ruben.Dias  DF  3  24  Portugal  ManchesterCity   32   \n";
	outfile << "Raheem.Sterling  FW  7  26  England  ManchesterCity  31  10  7\n";
	outfile << "Gabriel.Jesus  FW  9  24  Brazil  ManchesterCity  29  9  4\n";
	outfile << "Ferran.Torres  FW  21  21  Spain  ManchesterCity  24  7  2\n";
	outfile << "Riyad.Mahrez  FW  26  30  Algeria  ManchesterCity  27  9  6\n";
	outfile << "Adrian  GK  13  34  Spain  Liverpool  3  1  0\n";
	outfile << "Alisson  GK  1  28  Brazil  Liverpool  33  10  0\n";
	outfile << "Andrew.Robertson  DF  26  27  Scotland  Liverpool  38  1  7\n";
	outfile << "Virgil.van.Dijk  DF  5  30  Netherland  Liverpool  0   \n ";
	outfile << "Joel.Matip  DF  32  30  Cameroon  Liverpool  10  1  2\n";
	outfile << "Alexander-Arnold  DF  66  22  England  Liverpool  36  2  7\n";
	outfile << "Jamie.Vardy  FW  9  34  England  LeicesterCity  34  \n";
	outfile << "Victor.Lindelof  DF  2  27  Sweden  ManchesterUnited  29  1  1\n";
	outfile << "Edinson.Cavani  FW  7  34  Uruguay  ManchesterUnited  26  10  3\n";
	outfile << "Ederson  GK  31  27  Braszil  ManchesterCity  36 19\n";
	outfile << "Phil.Foden  MF  47  21  England  ManchesterCity 28 10\n";
	outfile << "Thiago  MF  6  30  Spain  Liverpool  24  1\n";
	outfile << "Fabinho  MF  3  27  Brazil  Liverpool  30  0\n";
	outfile << "Roberto.Firmino  FW  9  29  Brazil  Liverpool  36  9\n";
	outfile << "Sadio.Mane  FW  10  29  Senegal  Liverpool  35  11\n";
	outfile << "Mohamed Salah  FW  11  29  Egypt  Liverpoo  37  22l\n";
	outfile << "Rashford FW 10 23 England ManchesterUnited 37  11  9" << endl;
	outfile.close();

	string name;
	string position;
	int number;
	int age;
	string national;
	string club ;
	int match;
	int goal;
	int assist;
	

	vector<string> v1;
	vector<string> v2;
	vector<int> v3;
	vector<int> v4;
	vector<string> v5;
	vector<string> v6;
	vector<int> v7;
	vector<int> v8;
	vector<int> v9;
	
	
	cout << " Which do you want to filter by club, ManchesterUnited, ManchesterCity, Liverpool, LeicesterCity, Tottenham, Chelsea?\n";
	string str;
	cin >> str;
	assert( str == "ManchesterUnited" ,"ManchesterCity", "Liverpool", "Tottenham", "LeicesterCity","Chelsea");

	string str1, str2, str3, str4;
	int i, j, k, l, m;

	void f1(); {
		ifstream datafile("player.txt");
		
		string line;
			while (getline(datafile >> str1 >> str2 >> i >> j >> str3 >> str4 >> k >> l >> m, line)) {
				if (str == str4) {
					

					v1.push_back(str1);
					v2.push_back(str2);
					v3.push_back(i);
					v4.push_back(j);
					v5.push_back(str3);
					v7.push_back(k);
					v8.push_back(l);
					v9.push_back(m);
					
					
					
				}
				
			}

		datafile.close();




	}
	

	

	for (int n = 0; n < v1.size(); ++n) {
		Player a;
		a.setName(v1[n]);
		a.setPosition(v2[n]);
		a.setNumber(v3[n]);
		a.setAge(v4[n]);
		a.setNational(v5[n]);
		a.setMatch(v7[n]);
		a.getGoal(v8[n]);
		a.getAssist(v9[n]);
		
		cout << "name:" << a.getName();"\n";
		cout << ",position:" << a.getPosition();"\n";
		cout << ",number:" << a.getNumber();"\n";
		cout << ",age:" << a.getAge();"\n";
		cout << ",national:" << a.getNational();"\n";
		cout << ",match:" << a.getMatch();
		
		string target = "GK";
		auto pos = find(v2.begin(), v2.end(), target);
		if (v2[n] == target)
			cout << ",cleansheet:" << a.getGoal() << endl;
		else cout << ",goal:" << a.getGoal() << endl;
		
	}
}

