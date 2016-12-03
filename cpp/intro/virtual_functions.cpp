#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
	string name;
	int age;
public:
	virtual void getdata() {
		cin >> name >> age;
	}

	virtual void putdata() {
		cout << name << " " << age << " ";
	}
};

class Professor : public Person {
	int publications;
	int id;
public:
	static int cur_id;

	virtual void getdata() {
		Person::getdata();
		cin >> publications;
		id = cur_id;
		cur_id++;
	}

	virtual void putdata() {
		Person::putdata();
		cout << publications << " " << id << endl;
	}
};

class Student : public Person {
	int marks[6];
	int id;
public:
	static int cur_id;

	virtual void getdata() {
		Person::getdata();
		for (int i = 0; i < 6; ++i) // read in marks
			cin >> marks[i];
		id = cur_id;
		cur_id++;
	}

	virtual void putdata() {
		Person::putdata();

		int sum = 0;
		for (int i = 0; i < 6; ++i) // sum up marks
			sum += marks[i];

		cout << sum << " " << id << endl;
	}
};

int Professor::cur_id = 1;
int Student::cur_id = 1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
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
