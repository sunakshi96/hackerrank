#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
	private :
		int age;
		string fname;
		string lname;
		int standard;
	public :
	void set_age(int age)
	{
	this->age=age;
	}
	void set_standard(int standard)
	{
	this->standard=standard;
	}
	void set_first_name(string fname)
	{
	this->fname=fname;
	}
	void set_last_name(string lname)
	{
	this->lname=lname;
	}
	int get_age()
	{
	return age;
	}
	string get_last_name()
	{
	return lname;
	}
	string get_first_name()
	{
	return fname;
	}
	int get_standard()
	{
	return standard;
	}
	string to_string()
	{
	stringstream ss;
	char ch=',';
	ss<<age<<ch<<fname<<ch<<lname<<ch<<standard;
	string s1;
	ss>>s1;
	return s1;	
	}

	
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
