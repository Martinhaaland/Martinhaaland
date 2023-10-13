/*Write a program which asks for a number input from the keyboard . Add 40 to the number and
then divide it by 5. Now, subtract 6 from the number and then multiply the resultant value by
10. Display rthe result.*/
#include <iostream>
using namespace std;

int main(){
    float number;
    cout << "Give me the number: " << endl;
    cin >> number;
    float resultant = (((number + 40.0)/5.0) - 6.0) * 10.0;
    cout << resultant << endl;
}
