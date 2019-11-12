#include <iostream>
using namespace std;


int main()
{
	int mark[4];
	cout << "Enter 5 scores: \n";
	for (int i = 0; i < 5; i++) {
		cin >> mark[i];
	}
	int max = mark[0];
	for (int i= 1; i < 5; i++) {
		if (mark[i] > max) {
			max = mark[i];
		}
	}
	cout << "The highest score is " << max << endl
		<< "The scores and their differences from the highest are: \n";
	for (int i = 0; i < 5; i++) {
		cout << mark[i] << " off by " << (max - mark[i]) << endl;
	}

    return 0;
}

