//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include <iostream>
#include "Student_Public.h"
#include "Student_Private.h"

using namespace std;

int main()
{
	cout << " : Lab 5.1 - Output (Public): " << endl;
	{

		bool initResult = false;
		Student_Public sp;

		do
		{
			try
			{
				cin >> sp;
				initResult = true;
			}
			catch (const char* str)
			{
				initResult = false;
				cerr << str << endl;
			}
			catch (bad_exception& e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			cout << endl;
		} while (!initResult);

		int course = -1;
		string name = "Studentka";
		int age = -1;
		char gender = 'F';
		double weight = -1;
		for (int i = 0; i < 4; i++)
		{
			if (i == 1)
			{
				age = -1;
				weight = 1;
			}
			else if (i == 2)
			{
				age = 1;
				weight = -1;
			}
			else if (i == 3)
			{
				age = 1;
				weight = 1000000;
			}

			try
			{
				//cout << "Goods ex(" << f << ", " << s << ");" << endl;
				Student_Public ex(course, name, age, gender, weight);
			}
			catch (Exception e)
			{
				cerr << e.what() << endl;
			}
			catch (Bad_exception e)
			{
				cerr << e.what() << endl;
			}
			catch (bad_exception& e)
			{
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				cerr << e.what() << endl;
			}
		}

	}
	system("pause");

	cout << " : Lab 5.1 - Output (Private): " << endl;
	{

		bool initResult = false;
		Student_Private sp;

		do
		{
			try
			{
				cin >> sp;
				initResult = true;
			}
			catch (const char* str)
			{
				initResult = false;
				cerr << str << endl;
			}
			catch (bad_exception& e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			cout << endl;
		} while (!initResult);

		int course = -1;
		string name = "Studentka";
		int age = -1;
		char gender = 'F';
		double weight = -1;
		for (int i = 0; i < 4; i++)
		{
			if (i == 1)
			{
				age = -1;
				weight = 1;
			}
			else if (i == 2)
			{
				age = 1;
				weight = -1;
			}
			else if (i == 3)
			{
				age = 1;
				weight = 1000000;
			}

			try
			{
				//cout << "Goods ex(" << f << ", " << s << ");" << endl;
				Student_Private ex(course, name, age, gender, weight);
			}
			catch (Exception e)
			{
				cerr << e.what() << endl;
			}
			catch (Bad_exception e)
			{
				cerr << e.what() << endl;
			}
			catch (bad_exception& e)
			{
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				cerr << e.what() << endl;
			}
		}

	}
	system("pause");

	cout << " : Lab 2.5 - Output (Public) : ";
	{
		cout << " : constructors : " << endl;
		cout << "Student_Public *a0 = new Student_Public(); : " << endl;
		Student_Public* a0 = new Student_Public();
		cout << (*a0) << endl;
		cout << "(*a0).Display(); : " << endl;
		(*a0).Display();
		cout << endl;
		cout << "Student_Public a1; : " << endl;
		Student_Public a1;
		//a1.Display();
		cout << a1 << endl;
		cout << "Student_Public a2(1); : " << endl;
		Student_Public a2(1);
		cout << a2 << endl;
		cout << "Student_Public c0(2, \"Sidorova\"); : " << endl;
		Student_Public c0(2, "Sidorova");
		cout << c0 << endl;
		cout << "Student_Public c(1, \"Sidorova\", 22, 'F', 60.5); : " << endl;
		Student_Public c(1, "Sidorova", 22, 'F', 60.5);
		cout << c << endl;
		cout << "Student_Public d(c); : " << endl;
		Student_Public d(c);
		cout << d << endl;
		cout << endl;

		cout << " : operator increment/decrement (c) : " << endl;
		cout << "++c : " << endl << ++c << endl;
		cout << " c : " << endl << c << endl;
		cout << " c++ : " << endl << c++ << endl;
		cout << " c : " << endl << c << endl;
		cout << "--c : " << endl << --c << endl;
		cout << " c : " << endl << c << endl;
		cout << " c-- : " << endl << c-- << endl;
		cout << " c : " << endl << c << endl;
		cout << endl;

		cout << " : operator Type() : " << endl;
		cout << "string(c) : " << endl << string(c) << endl;
		cout << endl;

		cout << " : operator input/output : " << endl;
		Student_Public g1, g2, g3;
		cin >> g1 >> g2 >> g3;
		cout << g1 << endl << g2 << endl << g3 << endl;

		cout << " : operator = : " << endl;
		g3 = g2 = c;
		cout << " g3 : " << endl << c << endl;
		cout << " g2 : " << endl << c << endl;
		cout << " c : " << endl << c << endl;
		cout << endl;

		cout << " : Size = " << sizeof(c) << endl;
	}
	system("pause");

	cout << " : Lab 2.5 - Output (Private) : ";
	{
		cout << " : constructors : " << endl;
		cout << "Student_Private *a0 = new Student_Private(); : " << endl;
		Student_Private* a0 = new Student_Private();
		cout << (*a0) << endl;
		cout << "(*a0).Display(); : " << endl;
		(*a0).Display();
		cout << endl;
		cout << "Student_Private a1; : " << endl;
		Student_Private a1;
		//a1.Display();
		cout << a1 << endl;
		cout << "Student_Private a2(1); : " << endl;
		Student_Private a2(1);
		cout << a2 << endl;
		cout << "Student_Private c0(2, \"Sidorova\"); : " << endl;
		Student_Private c0(2, "Sidorova");
		cout << c0 << endl;
		cout << "Student_Private c(1, \"Sidorova\", 22, 'F', 60.5); : " << endl;
		Student_Private c(1, "Sidorova", 22, 'F', 60.5);
		cout << c << endl;
		cout << "Student_Private d(c); : " << endl;
		Student_Private d(c);
		cout << d << endl;
		cout << endl;

		cout << " : operator increment/decrement (c) : " << endl;
		cout << "++c : " << endl << ++c << endl;
		cout << " c : " << endl << c << endl;
		cout << " c++ : " << endl << c++ << endl;
		cout << " c : " << endl << c << endl;
		cout << "--c : " << endl << --c << endl;
		cout << " c : " << endl << c << endl;
		cout << " c-- : " << endl << c-- << endl;
		cout << " c : " << endl << c << endl;
		cout << endl;

		cout << " : operator Type() : " << endl;
		cout << "string(c) : " << endl << string(c) << endl;
		cout << endl;

		cout << " : operator input/output : " << endl;
		Student_Private g1, g2, g3;
		//g1.f();
		cin >> g1 >> g2 >> g3;
		cout << g1 << endl << g2 << endl << g3 << endl;

		cout << " : operator = : " << endl;
		g3 = g2 = c;
		cout << " g3 : " << endl << c << endl;
		cout << " g2 : " << endl << c << endl;
		cout << " c : " << endl << c << endl;
		cout << endl;

		cout << " : Size = " << sizeof(c) << endl;
	}
	system("pause");

	cout << " : Lab 1.5 - Output : ";
	{
		Student_Public s;
		s.f();
		s.Read();
		s.Display();

		Man m = s.GetMan();
		string name;
		int age;
		double weight;

		cout << "Enter New Student Name = ? ";
		cin >> name;
		m.SetName(name);

		cout << "Enter New Student Age = ? ";
		cin >> age;
		m.SetAge(age);

		cout << "Enter New Student Weight = ? ";
		cin >> weight;
		m.SetWeight(weight);

		s.SetMan(m);
		cout << "Student information changed : " << endl << s.toString() << endl;

		int course;
		cout << "Enter New Course = ? ";
		cin >> course;
		s.SetCourse(course);
		cout << "Student information changed : " << endl << s.toString() << endl;

		cout << "Increment Course...";
		s.IncCourse();
		cout << endl << "Course changed to : " << endl << s.GetCourse() << endl;
	}
	system("pause");

	return 0;
}