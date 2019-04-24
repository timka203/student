#pragma once 

#include<iostream> 
using namespace std;
class vector_
{
private:
	int size;
	int* arr;
public:
	vector_();
	vector_(int size, int val);
	vector_(const vector_& obj);//construct copy 
	void push_back(int n);
	void print();
	void pop_back();
	void erase(int pos);
	void clear();
	int getSize()const;
	bool empty();
	int getElement(int pos)const;
	vector_ operator=(const vector_& obj);
	~vector_();

	//prefix 
	vector_& operator++() {
		for (size_t i = 0; i < size; i++)
		{
			this->arr[i]++;
		}
		return *this;
	}
	vector_& operator--() {
		for (size_t i = 0; i < size; i++)
		{
			this->arr[i]--;
		}
		return *this;
	}
	//postfix 
	vector_ operator++(int) {
		vector_ c = *this;
		for (size_t i = 0; i < size; i++)
		{
			c.arr[i]++;
		}
		return c;
	}
	vector_ operator--(int) {
		vector_ c = *this;
		for (size_t i = 0; i < size; i++)
		{
			c.arr[i]--;
		}

		return c;
	}
};
ostream& operator<<(ostream& os, const vector_& c);
istream& operator>>(istream& is, vector_& c);
bool operator==(const vector_& a, const vector_& b);

