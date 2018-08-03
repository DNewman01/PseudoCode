#include <iostream>

using namespace std;

int main()
{
    // Initialize total to zero
    int total {0};
    // Initialize counter to zero
    unsigned int gradeCounter{0};

    // Prompt the user to enter the first grade
    cout << "Enter student grade: (-1 to stop) " ;
    // Input the first grade (possibly the sentinel)
    int grade;
    cin >> grade;

    // While the user has not yet entered the sentinel
    while (grade >= 0) {
        //    Add this grade into the running total
        total = total + grade;
        //    Add one to the grade counter
        gradeCounter = gradeCounter + 1;
        //    Prompt the user to enter the next grade
        cout << "Enter student grade: (-1 to stop) ";
        //    Input the next grade (possibly the sentinel)
        cin >> grade;
    }
    // If the counter is not equal to zero
    if (gradeCounter > 0) {
        // Set the average to the total divided by the counter
        double average = static_cast<double>(total) / gradeCounter;
        // Print the average
        cout << "Average is: " << average << endl;
    // Else
    } else {
        // Print "no grades were entered"
        cout << "No grades were entered." << endl;
    }
}
