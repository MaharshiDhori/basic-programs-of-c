#include<iostream>

using namespace std;

class Student {
    public :
        int rollNum;
        string studName;
        int mark1, mark2, mark3, totalMarks;
        
    void setStudDetails() {
        cout << "Enter the roll number: ";
        cin >> rollNum;
        cout << "Enter the name: ";
        cin >> studName;
        cout << "Enter the 1st marks: ";
        cin >> mark1;
        cout << "Enter the 2nd marks: ";
        cin >> mark2;
        cout << "Enter the 3rd marks: ";
        cin >> mark3;
    }
    
    int calculateTotal() {
        totalMarks = mark1 + mark2 + mark3;
        return totalMarks;
    }
    
    void displayStudDetails()
    {
        cout << "Roll no : " << rollNum << endl;
        cout << "Student name: " << studName << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }

};

int main()
{
    Student demoStudent;
    
    demoStudent.setStudDetails();
    demoStudent.calculateTotal();
    demoStudent.displayStudDetails();
    
    return 0;
}