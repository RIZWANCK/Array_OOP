#include<iostream>
using namespace std;

class Student{
	public:
		int id;
		char name[50];
		getdata(){
			cout<<"Enter name: "<<endl;
			cin>>name;
		}
		putdata(){
			cout<<name<<" ";
		}
};
int main() {
    Student s[5];
    for (int i = 0; i < 5; i++) {
        s[i].getdata();
    }
    cout << "\nStudent List: ";
    for (int i = 0; i < 5; i++) {
        s[i].putdata();
    }
    cout << endl;
    return 0;
}
