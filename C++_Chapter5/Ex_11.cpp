#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string title, int price);
	~Book();
	void set(string title, int price) { this->title = title; this->price = price; }
	Book(Book& b);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(string title, int price) {
	this->title = title;
	this->price = price;
}

Book::~Book() {}


Book::Book(Book& b) {
	this->title = b.title;
	this->price = b.price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}