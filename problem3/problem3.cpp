/*Write a program to calculate the GPA. The marks and credit hours should be given by program.
Calculate the GPA and print the result to the console. */
#include <iostream>
using namespace std;
int main(){
	float my_math, my_english, my_cp, my_introcs, my_ictools;
	float maths = 3;
	float cp = 6;
	float introcs = 3;
	float ictools = 2;
	float english = 2;
	cout << "Give me your score in maths: " << endl;
	cin >> my_math;
	cout << "Give me your score in english: " << endl;
	cin >> my_english;
	cout << "Give me your score in Computer programming" << endl;
	cin >> my_cp;
	cout << "Give me your score in ictools: " << endl;
	cin >> my_ictools;
	cout << "Give me your score in Intro to computer science: " << endl;
	cin >> my_introcs;
	float gpa;
	gpa = (my_math * maths + my_cp * cp + my_introcs * introcs + my_ictools * ictools + my_english * english)/(cp + english + ictools  + introcs + maths);
	cout << "Your final GPA is: " << gpa << endl;

}
