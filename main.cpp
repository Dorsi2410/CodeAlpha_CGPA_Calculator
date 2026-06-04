#include <iostream>
#include <fstream>
using namespace std;

int main()
{   int n;
    cout << "=====================================\n";
    cout << "          CGPA CALCULATOR\n";
    cout << "=====================================\n";

    cout << "Enter number of subjects: ";
    cin >> n;

    string subject[20];
    double gradePoint[20];
    int creditHours[20];

    double totalGradePoints=0;
    int totalCredits=0;

    for(int i=0;i<n;i++)
    {   cout << "\nEnter details for Subject " << i + 1 << endl;
        cout << "Subject Name: ";
        cin >> subject[i];

        cout << "Grade Point (0-10): ";
        cin >> gradePoint[i];

        cout << "Credit Hours: ";
        cin >> creditHours[i];

        totalGradePoints += gradePoint[i] * creditHours[i];
        totalCredits += creditHours[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n=====================================\n";
    cout << "            RESULT\n";
    cout << "=====================================\n";

    for(int i=0;i<n;i++)
    {   cout << "\nSubject Name: " << subject[i];
        cout << "\nGrade Point : " << gradePoint[i];
        cout << "\nCredits     : " << creditHours[i];
        cout << "\n-----------------------------";
    }

    cout << "\n\nTotal Credits = " << totalCredits;
    cout << "\nCGPA = " << cgpa;
    
    ofstream file("result.txt");
    file << "CGPA = " << cgpa;
    file.close();

    if(cgpa >= 9)
    {  cout << "\nPerformance : Excellent";
    }
    else if(cgpa >= 8)
    {  cout << "\nPerformance : Very Good";
    }
    else if(cgpa >= 7)
    {  cout << "\nPerformance : Good";
    }
    else if(cgpa >= 6)
    {  cout << "\nPerformance : Average";
    }
    else
    {  cout << "\nPerformance : Needs Improvement";
    }
    return 0;
}