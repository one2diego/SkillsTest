#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double hours, income, tax, clothes, supplies, bonds, parents;
	income = 15.50;
	tax = 0.14;
	clothes = 0.1;
	supplies = 0.01;
	bonds = 0.25;
	parents = 0.5;
	cout << "Input the number of hours in work: ";
	cin >> hours;
	cout << "The gross income is $"<< income*hours << ".";
	cout << "\nThe tax is $" << income*hours*tax;
	cout << "\nThe net income is $"<< income*hours-income*hours*tax << ".";
	cout << "\nThe budget for clothes and accessories is $"<< (income*hours-income*hours*tax)*clothes << ".";
	cout << "\nThe budget for school supplies is $"<< ((income*hours-income*hours*tax)*clothes)*supplies << ".";
	cout << "\nThe budget for buying savings bonds is $"<< ((income*hours-income*hours*tax)-(income*hours-income*hours*tax)*clothes)-((income*hours-income*hours*tax)*supplies)*bonds << ".";
	cout << "\nParents gives for every bonds is $"<< ((income*hours-income*hours*tax)-(income*hours-income*hours*tax)*clothes)-((income*hours-income*hours*tax)*supplies))*bonds*parents << ".";
	_getch();
	return 0;
}