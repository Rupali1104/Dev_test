#include <iostream>
using namespace std;

int main() {

    float obtainedMarks, totalMarks, percentage;

    cout << "Enter the total marks: ";
    cin >> totalMarks;

    cout << "Enter the obtained marks: ";
    cin >> obtainedMarks;

    percentage = (obtainedMarks / totalMarks) * 100;

    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
