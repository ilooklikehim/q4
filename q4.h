#ifndef Q4_H_INCLUDED
#define Q4_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <random>

using namespace std;

class course
{
public:
    course(string newname)
    {
        name=newname;
        next=NULL;
    }

    void setName(string name){name;}
    string getName(){return name;}
    void setNext(course * n){next = n;}
    course * getNext(){return next;}

    void display(){cout << name << endl;}

private:
    string name;
    course* next;
};

class courselist
{
public:
    courselist()
    {
        firstcourse=NULL;
    }
    void addCourse(course *temp1)
    {
        if(firstcourse==NULL)
        {
            firstcourse=temp1;
            return;
        }
        course* curr=firstcourse;
        course* last=curr;
        while(curr!=NULL)
        {
            last=curr;
            curr=curr->getNext();
        }
        last->setNext(temp1);
    }

  void removeCourse(course *temp1)
  {
    string removal;
    cout << "Which value do you want to delete from the list? ";
    cin >> removal;

    course* curr = firstcourse;
    course* last = curr;

    while (curr!=NULL)
    {
        if (curr->getName() == removal)
        {
            last->next = curr->next;
            delete curr;
            return;
        }
        last = curr;
        curr = curr->next;
    }
    if (!curr){
        cout << "That name is not in the list" << endl;
    }
}

    void display()
    {
        course * curr=firstcourse;
        while(curr!=NULL)
        {
            curr->display();
            curr=curr->getNext();
        }
    }

private:
    course* firstcourse;
};

#endif