#include <iostream>

using namespace std;

class Product
{
public:
	Product();
	void setOrdering(int);
	void setTitleId(string);
	void setTitle(string);
	void setRegion(string);
	void setLanguage(string);
	void setTypes(string);
	void setAttributes(string);
	void setIsOriginalTitle(bool);
	void setRate(double);
	int getOrdering() { return ordering; }
	string getTitleId() { return titleId; }
	string getTitle() { return title; }
	string getRegion() { return region; }
	string getLanguage() { return language; }
	string getTypes() { return types; }
	string getAttributes() { return attributes; }
	bool getIsOriginalTitle() { return isOriginalTitle; }
	double getRate() { return rate; }
private:
	int ordering;
	string titleId;
	string title;
	string region;
	string language;
	string types;
	string attributes;
	bool isOriginalTitle;
	double rate;
};