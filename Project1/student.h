#pragma once
#include<iostream> 
#include<Windows.h> 
#include "vector_.h" 
using namespace std;

class student
{
	string name;
	string surname;
	vector_ marks;
	string placeOfStudy;
public:
	student();
	void setName(const string name);
	void setSurame(const string surname);
	void setmarks();
	void setPlaceOfStudy(const string place);
	void addmarks(int h);
	string& getName();
	string& getSurame();
	string& getPlaceOfStuding();
	int getmark(int pos);
	void deleteMark(int pos);
	int getMarksSize();
	void clear();
	student& operator=(const student& obj);
};
ostream& operator<<(ostream is, student obj);
istream& operator>>(istream is, student obj);