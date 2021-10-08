#include <string>
#include "Recieving.h"

using namespace std;

Recieving::Recieving()
{
	ifstream details("title.akas.txt");
	if (details) {
		string temp;
		getline(details, temp, '\n');
		while (details) {
			string tId, ti, ty, re, l, at;
			int ord;
			bool isOri;
			getline(details, tId, '\t');
			details >> ord;
			details.ignore();
			getline(details, ti, '\t');
			getline(details, re, '\t');
			getline(details, l, '\t');
			getline(details, ty, '\t');
			getline(details, at, '\t');
			details >> isOri;
			if (tId != "")movies.push_back(makePro(tId, ord, ti, ty, re, l, at, isOri));
		}
	}
	else {
		cout << "There is no file.\n";
		exit(1);
	}
}

Product Recieving::makePro(string tId, int ord, string ti, string ty, string re, string l, string at, bool isOri)
{
	Product x;
	x.setTitleId(tId);
	x.setOrdering(ord);
	x.setTitle(ti);
	x.setTypes(ty);
	x.setRegion(re);
	x.setLanguage(l);
	x.setAttributes(at);
	x.setIsOriginalTitle(isOri);
	return x;
}

void Recieving::showDetails()
{
	for (int i = 0; i < movies.size(); i++) {
		cout << i + 1 << endl;
		cout << "Title: " << movies[i].getTitle();
		if (movies[i].getRate())
			cout << "\tIMDb rate: " << movies[i].getRate();
		cout << "\nID: " << movies[i].getTitleId() << "\n";
		cout << "Ordering: " << movies[i].getOrdering() << endl;
		cout << "Types: " << movies[i].getTypes() << endl;
		cout << "Region: " << movies[i].getRegion() << "\t" << "Language: " << movies[i].getLanguage() << endl;
		cout << "Attributes: " << movies[i].getAttributes() << endl;
		if (movies[i].getIsOriginalTitle())cout << "Original title!\n";
		cout << endl << "===============================\n\n";
	}
}