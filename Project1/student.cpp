#include "student.h"



student::student()
{
	this->name = "******";
	this->surname = "******";
	this->placeOfStudy = "***********";
	this->setmarks();
}

void student::setName(const string name)
{
	this->name = name;
}

void student::setSurame(const string surname)
{
	this->surname = surname;
}

void student::setmarks()
{   int g;
	cout << "How much marks do you want to add?" << endl;
	cin >> g;
	for (size_t i = 0; i < g; i++)
	{
		int h;
		cout << "write mark there" << endl;
		cin >> h;
		marks.push_back(h);
	}
}

void student::setPlaceOfStudy(const string place)
{
	this->placeOfStudy = place;
}


void student::addmarks(int h)
{
	cin >> h;
	marks.push_back(h);
}

string& student::getName()
{
	return this->name;
}

string& student::getSurame()
{
	return this->surname;
}
string& student::getPlaceOfStuding()
{
	return this->placeOfStudy;
}
int student::getmark(int pos)
{
	return this->marks.getElement(pos);
}

void student::deleteMark(int pos)
{
	marks.erase(pos);
}

int student::getMarksSize()
{
	return this->marks.getSize();
}

void student::clear()
{
	this->name.clear();
	this->surname.clear();
	this->marks.clear();
	this->placeOfStudy.clear();
}

student& student::operator=(const student& obj)
{
	if (this == &obj)
	{
		return *this;
}
	this->name = obj.name;
	this->surname = obj.surname;
	this->placeOfStudy = obj.placeOfStudy;
	
}




ostream& operator<<(ostream os, student obj)
{
	cout << obj.getName() << endl << obj.getSurame() << endl;
	for (size_t i = 0; i < obj.getMarksSize(); i++)
	{
		cout << obj.getmark(i);
	}
	return os;
}
istream& operator>>(istream is, student obj)
{
	string g;
	cout << "write name" << endl;
	cin >> g;
    obj.setName(g);
	cout << "write surname" << endl;
	cin >> g;
	obj.setSurame(g);
	cout << "write place of studing" << endl;
	cin >> g;
	obj.setPlaceOfStudy(g);
	obj.setmarks();
	return is;
}
