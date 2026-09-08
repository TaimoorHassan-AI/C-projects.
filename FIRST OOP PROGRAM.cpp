#include <iostream>
#include <string>
using namespace std;
class teacher{
public:
    //properties/attributes
    string name;
    string dept;
    string subject;
    double salary;

    //methods
    void changeDept(string newDept){
        dept=newDept;
    }
};

int main(){
    teacher t1;
    t1.name="taimoor";
    t1.subject="Programming F";
    t1.dept="computer";
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept<<endl;
    return 0;
}
