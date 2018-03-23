#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int main() {
	int nr, x, y;
	vector< pair<int, int> > pairs;
	
	cout << "Numarul de perechi:\n"; cin >> nr;
	for (int i = 0; i < nr; i++) {
		cout << "Introduceti 2 elemente:\n";
		cin >> x >> y;
		//pairs.emplace_back(x,y);
		pairs.push_back(make_pair(x, y));
	}
	
	cout<< "Perechile initiale\n" << endl;
	for (int i = 0; i < nr; i++)
		cout << pairs[i].first<< " " <<pairs[i].second<< "\n";
		
	sort(pairs.begin(), pairs.end());
	
	cout<< "Perechile sortate crescator dupa primul element din pereche.\n" << endl;
	for (int i = 0; i < nr; i++)
		cout << pairs[i].first<< " " <<pairs[i].second<< "\n";

	for (int i = 0; i < nr; i++)
		if (pairs[i].second % 2 == 0)
			pairs[i].second = 0;
	
	cout<< "Perechile modificate.\n" << endl;		
	for (int i = 0; i < nr; i++)
		cout << pairs[i].first<< " " <<pairs[i].second<< "\n";
	

	return 0;
}
