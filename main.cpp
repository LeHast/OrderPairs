#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MAX_NAMESIZE = 24;

struct Highscore {
	char name[MAX_NAMESIZE];
	int score;
};

void readData(vector<Highscore>& scores);
void sortData(vector<Highscore>& scores);
void displayData(const vector<Highscore>& scores);
int indexOfLargest(vector<Highscore>::const_iterator & scores);

/*
void readData(Highscore highScores[], int size);
void displayData(const Highscore highScores[], int size);
*/

int main()
{
	int size;
	cout << "How many scores will you enter?: ";
	cin >> size;

	vector<Highscore> scores (size);

	
	readData(scores);
	sortData(scores);
	displayData(scores);


	system("pause");
}





void readData(vector<Highscore>& scores){
	int scr = 0;
	char name[MAX_NAMESIZE];


	for (vector<Highscore>::iterator i = scores.begin(); i != scores.end(); i++) {
		cout << "Enter the name for score #" << (scr + 1) << ": ";
		cin >> i->name;
		cout << "Enter the score for score #" << (scr + 1) << ": ";
		cin >> i->score;
		scr++;
	}

	cout << endl;
}





void sortData(vector<Highscore>& scores){
 	for (vector<Highscore>::iterator i = scores.begin(); i != scores.end(); i++) {
		for (vector<Highscore>::iterator itr = scores.begin(); itr != scores.end(); itr++) {
			if (i->score > itr->score) {
				swap(*itr, *i);
			}
		}
	}
}





int indexOfLargest(vector<Highscore>::const_iterator & scores) {
	int targetIndex = scores->score;


	return targetIndex;
}





void displayData(const vector<Highscore>& scores){
	cout << "Top Scorers: " << endl;
	for (vector<Highscore>::const_iterator i = scores.begin(); i != scores.end(); i++)
	{
		cout << i->name << ":" << i->score << endl;
	}
}

/*
How many scores will you enter?: 3
Enter the name for score #1: Alpha
Enter the score for score #1: 5
Enter the name for score #2: Beta
Enter the score for score #2: 9
Enter the name for score #3: Charle
Enter the score for score #3: 11

Top Scorers:
Charle:11
Beta:9
Alpha:5
Presione una tecla para continuar . . .
*/