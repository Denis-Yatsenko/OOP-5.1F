//////////////////////////////////////////////////////////////////////////////
// Student.cpp
// файл реалізації – реалізація методів класу
#include "Student_Private.h"
#include <iostream>
#include <sstream>

//using namespace std;

void Student_Private::Init(int course, Man man)
{
	SetCourse(course);
	//SetMan(man);
	this->SetName(man.GetName());
	this->SetAge(man.GetAge());
	this->SetGender(man.GetGender());
	this->SetWeight(man.GetWeight());
}

string Student_Private::toString() const
{
	stringstream sout;
	sout << "Course : " << GetCourse() << endl
		<< GetMan()
		;
	return sout.str();
}

void Student_Private::Display() const
{
	cout << toString();
}

void Student_Private::Read()
{
	int c;
	Man m;
	cout << endl;
	cout << "Man = ? " << endl;
	m.Read(); // використовуємо делегування
	cout << "course = ? "; cin >> c;
	Init(c, m);
	//Student(c, m);
}

Student_Private::Student_Private(const int course, const string name, const int age, const char gender, const double weight)
	throw(const char*, Exception, Bad_exception, bad_exception&, invalid_argument&)
	: course(course), Man(name, age, gender, weight)
{
	if (course < 0)
		throw Exception("My Custom Exception");

}

Student_Private& Student_Private::operator --() // префіксний декремент
{
	--course; // модифікували поточний об'єкт
	return *this; // повернули модифікований об'єкт
}

Student_Private& Student_Private::operator ++() // префіксний інкремент
{
	++course; // модифікували поточний об'єкт
	return *this; // повернули модифікований об'єкт
}

Student_Private Student_Private::operator --(int) // постфіксний декремент
{
	Student_Private a(*this); // створили копію
	course--; // модифікували поточний об'єкт
	return a; // повернули копію
}

Student_Private Student_Private::operator ++(int) // постфіксний інкремент
{
	Student_Private a(*this); // створили копію
	course++; // модифікували поточний об'єкт
	return a; // повернули копію
}

ostream& operator <<(ostream& out, const Student_Private& s)
{
	return out << s.toString();
}

istream& operator >>(istream& in, Student_Private& s) throw(const char*, bad_exception&)
{
	int course;
	Man man;
	cout << "course = ? "; in >> course;
	s.SetCourse(course);
	cout << "man : " << endl; in >> man;
	s.SetMan(man);

	if (course < 0)
	{
		cout << "By value : ";
		throw invalid_argument("invalid_agrument");
	}

	return in;
}

Student_Private& Student_Private::operator =(const Student_Private& s)
{
	SetMan(s.GetMan());
	SetCourse(s.GetCourse());
	return *this; // повернули посилання на поточний об’єкт
}

Student_Private::operator string() const
{
	stringstream sout;
	sout << toString();
	return sout.str();
}