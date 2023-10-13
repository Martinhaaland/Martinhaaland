/*Write a program which accepts days as integer and display total number of years, months and
days in it. for example : If user input as 856 days the output should be 2 years 4 months 6
days*/
#include <iostream>
using namespace std;
int main(){
    int days;
    cout << "Enter the days: " << endl;
    cin >> days;
    int years = 0;
    int months = 0;
    while (days >= 365){ 
        days = days - 365;
        years ++;       
    }
    while (days >= 30){
        days = days - 30;
        months++;
    }
    cout << "years: " << years << " " << " months: " << months <<" " << " days: " << days << endl;

}
