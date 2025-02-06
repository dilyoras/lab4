
#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    //problem1
    // int x;
    // cout << " Please enter a number: ";
    // cin >> x;
    // if (x>0) {
    //     cout << x <<" is a positive number. " <<endl;
    //
    // }
    // else
    //     cout << x <<" is a negative number. " <<endl;
    //problem2
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n%2==0) {
    //     cout << "The number is even" << endl;
    // }
    // else
    //         cout << "The number is odd" << endl;
    //problem3
    // int x,y;
    // cout<<"Enter two numbers: ";
    // cin >> x,y;
    // if(x>y) {
    //     cout << x << " is greater than " << y << endl;
    // }
    // else if (x=y) {
    //     cout << x << " They are equal " << y << endl;
    // }
    // else
    //     cout << y << " is greater than " << x << endl;
    //problem4
    // int a, b, c;
    // cout << "Please enter three integers: ";
    // cin >> a >> b >> c;
    //
    // if (a >= b) {
    //     if (a >= c)
    //         cout << a << " is the greatest number." << endl;
    //     else
    //         cout << c << " is the greatest number." << endl;
    // } else {
    //     if (b >= c)
    //         cout << b << " is the greatest number." << endl;
    //     else
    //         cout << c << " is the greatest number." << endl;


    //problem5
    // int y;
    //
    // cout << " Enter a year: ";
    // cin >> y;
    //
    // if ((y % 400 == 0) || ((y% 4 == 0) && (y% 100 != 0))) {
    //     cout << y << " is a leap year." << endl;
    // } else {
    //     cout << y << " is not a leap year." << endl;
    //problem6
    // double speed;
    //
    // cout << "Enter the speed of the vehicle: ";
    // cin >> speed;
    //
    // if (speed < 20)
    //     cout << "too slow" << endl;
    // else if (speed > 80)
    //     cout << "too fast" << endl;
    // else
    //     cout << "just right" << endl;

    //problem7
    // int marks;
    //
    // cout << "Enter marks: ";
    // cin >> marks;
    //
    // if (marks >= 50)
    //     cout << "Pass" << endl;
    // else
    //     cout << "Fail" << endl;
    //problem8
    // double num;
    // cout << "Enter a number: ";
    // cin >> num;
    // if (num>=0) {
    //     if (num==0)
    //         cout <<"Zero" << endl;
    //     else
    //         cout << "Positive" << endl;
    // } else {
    //     cout << "Negative" << endl;


    //problem9
    // char input;
    // cout << "Enter a traffic light command (g for go, y for get ready, r for stop): ";
    // cin >> input;
    // if (input == 'g')
    //     cout << "Go" << endl;
    // else if (input == 'y' || input == 'Y') {
    //     cout << "Get ready!" << endl;
    // } else if  (input == 'r' || input == 'R') {
    //     cout << "Stop" << endl;
    // }
    //Problem10
    // int score;
    // char grade;
    //
    // cout << "Enter the student's score (0-100): ";
    // cin >> score;
    // if (score < 0 || score > 100) {
    //     cout << "Invalid score. Please enter a value between 0 and 100." << endl;
    //     return 1;
    // }
    //
    // switch (score / 10) {
    //     case 10: // For scores of 100
    //     case 9:
    //         grade = 'A';
    //     break;
    //     case 8:
    //         grade = 'B';
    //     break;
    //     case 7:
    //         grade = 'C';
    //     break;
    //     case 6:
    //         grade = 'D';
    //     break;
    //     default:
    //         grade = 'F';
    // }
    //
    // cout << "The corresponding letter grade is: " << grade << endl;

    //problem11
    // int num1, num2;
    //
    // cout << "Enter two integers: ";
    // cin >> num1 >> num2;
    // if (num2 == 0) {
    //     cout << "Division by zero is not allowed." << endl;
    // } else {
    //     if (num1 % num2 == 0) {
    //         cout << num1 << " is divisible by " << num2 << "." << endl;
    //     } else {
    //         cout << num1 << " is not divisible by " << num2 << "." << endl;
    //     }
    // }

    //problem12
    // int angle1, angle2, angle3;
    //    cout << "Enter three angles of a triangle: ";
    //    cin >> angle1 >> angle2 >> angle3;
    //
    // if ((angle1 + angle2 + angle3 == 180) && (angle1 > 0 && angle2 > 0 && angle3 > 0))
    //     cout << "The triangle is valid" << endl;
    // else
    //     cout << "The triangle is not" << endl;
    //problem13
    // char ch;
    //   cout << "Enter a character: ";
    //   cin >> ch;
    // if (ch >= 'a' && ch <= 'z') {
    //     cout << "Lowercase alphabet" << endl;
    // } else if (ch >= 'A' && ch <= 'Z') {
    //     cout << "Uppercase alphabet" << endl;
    // } else {
    //     cout << "It is not an alphabet" << endl;
    // }
    //problem14
//     int weight1, weight2;
//     double price1, price2;
//     cout << "Enter the weight and price for package 1: ";
//     cin >> weight1 >> price1;
//     cout << "Enter the weight and price for package 2: ";
//     cin >> weight2 >> price2;
//     if (price1/weight1 < price2/weight2) {
//         cout << "Package 1 has a better price. " << endl;
//     }
//     else if (price1/weight1 > price2/weight2) {
//         cout << "Package 2 has a better price. " << endl;
//     }
//     else {
//         cout << "Two packages have the same price." << endl;
//
//     }
    //problem15
        // int number;
        //     cout << "Enter a three-digit integer: ";
        //     cin >> number;
        // int firstDigit = number / 100;
        // int lastDigit = number % 10;
        // if (firstDigit == lastDigit)
        //     cout << number << " is a palindrome" << endl;
        // else
        //     cout << number << " is not a palindrome" << endl;
//problem16
        // double x, y;
        //      cout << "Enter a point (x, y): ";
        //      cin >> x >> y;
        // double distance =sqrt(pow(x,2) + pow(y,2));
        //     if (distance <= 10)
        //     cout << "(" << x << ", " << y << ") is inside the circle." << endl;
        // else
        //     cout << "(" << x << ", " << y << ") is outside the circle." << endl;
//problem17
      float gpa;
          cout << "Enter your GPA (0-4.5): ";
          cin >> gpa;
      int scholarshipPerc;
      switch (static_cast<int>(gpa * 10)) {
            case 40 ... 45:
                scholarshipPerc = 80;
            break;
            case 35 ... 39:
                scholarshipPerc = 60;
            break;
            case 30 ... 34:
                scholarshipPerc = 50;
            break;
            default:
                scholarshipPerc = 0;
            break;
        }
    cout << "Your scholarship amount is " << scholarshipPerc << "%" << endl;

        return 0;
    }


