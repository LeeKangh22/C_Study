#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& person);
	~Person();
	void changename(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(const Circle& c);
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius;
}

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::Person(const Person& person) {
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "���� ������ ����, ���� ��ü�� �̸� = " << this->name << endl;
}

Person::~Person() {
	if (name)
		delete[]name;
}

void Person::changename(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "kitae");
	Person daughter(father);

	cout << "daughter ��ü ���� ���� -----" << endl;
	father.show();
	daughter.show();

	daughter.changename("Grace");
	cout << "daughter �̸��� Grace�� ������ �� -----" << endl;
	father.show();
	daughter.show();
}