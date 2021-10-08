#include <fstream>
#include <vector>
#include "Product.h"

using namespace std;

class Recieving
{
public:
	Recieving();
	Product makePro(string titleId, int ordering, string title, string region, string language, string types, string attributes, bool isOriginalTitle);
	Product getPro(int i) { return movies[i]; }
	void showDetails();
private:
	vector<Product> movies;
};