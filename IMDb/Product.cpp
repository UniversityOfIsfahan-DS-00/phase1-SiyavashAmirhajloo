#include "Product.h"

Product::Product()
{
	setRate(0);
}
void Product::setOrdering(int o)
{
	ordering = o;
}

void Product::setTitleId(string t)
{
	titleId = t;
}

void Product::setTitle(string t)
{
	title = t;
}

void Product::setRegion(string r)
{
	region = r;
}

void Product::setLanguage(string l)
{
	language = l;
}

void Product::setTypes(string t)
{
	types = t;
}

void Product::setAttributes(string a)
{
	attributes = a;
}

void Product::setIsOriginalTitle(bool i)
{
	isOriginalTitle = i;
}

void Product::setRate(double r)
{
	rate = r;
}