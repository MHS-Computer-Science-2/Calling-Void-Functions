// Calling Void Functions

#include <iostream>
using namespace std;

void triple(double n) {
    cout << n << " tripled is " << n * 3 << endl << endl;
}

void circle(int r) {
    cout << "Area: " << 3.14 * pow(r, 2) << endl;
    cout << "Circumference: " << 3.14 * 2 * r << endl << endl;
}

void winner(string team1Name, string team2Name, int score1, int score2) {
    if (score1 > score2) {
        cout << team1Name << " wins!" << endl << endl;
    }
    else if (score1 < score2) {
        cout << team2Name << " wins!" << endl << endl;
    }
    else {
        cout << team2Name << " and " << team2Name << " tied." << endl << endl;
    }
}

void countLeapYears(int start, int end) {
    int count = 0;
    for (int year = start; year <= end; year++) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            count++;
        }
    }
    cout << "There are " << count << " leap years between " << start << " and " << end << endl << endl;
}


int main()
{
    // Each of the following should be completed by calling
    // one of the functions above. You should not need any
    // additional code besides calling the functions
    // *****************************************************

    //1. Triple the number entered by the user and display it
    int input = 0;
    cout << "Please enter a number: ";
    cin >> input;
    

    //2. Compute and display the area and circumference of a circle
    //   with radius 7
    

    //3. Display the winner of a basketball game between Midland and Dow.
    //   Use whatever numbers you want for the scores
    

    //4. Display the number of leap years between the years
    //   the user was born and the year 2080
    int born;
    cout << "Enter the year you were born: ";
    cin >> born;
    

    system("pause");
}

