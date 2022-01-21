#include <iostream>
#include <string>

using namespace std;

//Глобальные объекты
unsigned short height;

unsigned short ReadPersonAge()
{
	int age;
	cout << "Введите возраст человека: ";
	cin >> age;
	cout << endl;

	return age;
}

string ReadPersonName()
{
	string name;
	cout << "Введите имя человека: ";
	cin >> name;
	cout << endl;

	return name;
}

unsigned short ReadPersonHeight()
{
	cout << "Введите рост человека: ";
	cin >> height;
	cout << endl;

	return height;
}

unsigned short ReadPersonWeight()
{
	unsigned short weight;
	cout << "Введите вес человека: ";
	cin >> weight;
	cout << endl;

	return weight;
}

void ReadPersonSalary(double* salary)
{
	cout << "Введите заработную плату человека: ";
	cin >> *salary;
	cout << endl;
}

void WritePersonData(unsigned short age = 0, const string& name = "", const string& height = "", const string& weight = "", const string& salary = "")
{
	cout << age << endl;
	cout << name << endl;
	cout << height << endl;
	cout << weight << endl;
	cout << salary << endl;
}

void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	height = ReadPersonHeight();
	weight = ReadPersonWeight();
}

int main()
{
	setlocale(LC_ALL, "ru");

	unsigned short weight;
	double salary = 0;

	unsigned short age = ReadPersonAge();
	string name = ReadPersonName();
	unsigned short height = ReadPersonHeight();
	weight = ReadPersonWeight();
	ReadPersonSalary(&salary);

	ReadPersonData(name, age, salary);
	WritePersonData(age, name, "", "", to_string(salary));

	ReadPersonData(name, age, height, weight);

	WritePersonData(age, name, to_string(height), to_string(weight));

	return 0;
}