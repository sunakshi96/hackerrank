#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static int student_id,professor_id;
class Person
{
	public:
	  int age;
	  string name;
	  virtual void getdata()=0;
	  virtual void putdata()=0;
};

class Professor : public Person
{
	public:
	int publications;
	int id;
	
	Professor()
	{
	++professor_id;
	}
	void getdata()
	{
	cin>>name>>age>>publications;
	id=professor_id;
	}
	void putdata()
	{
	cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;
	}	
	
};
class Student : public Person
{
	public:
	int marks[6];
	int marks_sum;
	int id;

	Student()
	{
	++student_id;
	marks_sum=0;
	
	}
	void getdata()
	{
		cin>>name>>age;
		id=student_id;
		for(int i=0;i<6;i++)
		{
			cin>>marks[i];
			marks_sum +=marks[i];
		}	
	}
	void putdata()
	{
		cout<<name<<" "<<age<<" "<<marks_sum<<" "<<id<<endl;
	}
};
/*int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int type;	
		cin>>type;
		if(type==1)
		{
		Professor P;
		P.getdata();
		P.putdata();		
		}
		else 
		{
		Student S;
		S.getdata();
		S.putdata();
		}		
	}	
*/
int main()
{

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++)
    {

        cin>>val;
        if(val == 1)
	{
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

