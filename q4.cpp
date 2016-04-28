#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "q4.h"
#include <iomanip>

using namespace std;

int main()
{
    char option;
    option = 'X';
    string title;
    course* name;
    courselist* C;
    int courseCount=0;
    C = new courselist();
    while(option != 'Q')
    {
        cout << "Add a course (C)" << endl;
        cout << "Display all courses (D)" << endl;
        cout << "Remove a course (R)" << endl;
        cout << "Quit (Q)" << endl;
        cin >> option;

        if (option == 'C')
        {
            cout << "Create a name for the course" << endl;
            cin >> title;
            name = new course(title);
            C->addCourse(name);
        }
        else if (option == 'D')
        {
            C->display();
        }
        else if (option == 'R')
        {
            C->removeCourse(name);

        }
        else
        {
            return 1;
        }
    }
}
