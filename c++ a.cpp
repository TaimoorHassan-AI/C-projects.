//students marks management system using ARRAYS 
#include<iostream>
using namespace std;
int main(){
	int marks[5];
	int sum=0;
	int lowest,highest;
	int pass =0,fail=0;
	//input marks
	cout<<"enter marks of 5 students"<<endl;
	for(int i=0;i<5;i++) {
		cout<<"students "<<i+1<<":";
		cin>>marks[i];
		
	}
	//initial values of highest and lowest should be 0
	highest = marks[0];
	lowest =marks[0];
	
	for (int i =0;i<5;i++){
		sum = sum + marks[i];
		if (marks[i]>highest){
		
		highest =marks[i];
	}
		
		if (marks[i]<lowest){
			lowest =marks[i];
		}
		if (marks[i]>=50){
		    pass++;
		}
		else {
			fail++;
		}	
		
	}
	float average = sum / 5.0;
	cout<<"\n ------STUDENTS MARKS REPORT ------ \n";
	cout<<"\n marks entered \n";
	
	for (int i=0;i<5;i++){
		cout<<marks[i]<<""<<endl;
    }
	cout<<"\n Highest marks: "<<highest;
	cout << "\nLowest Marks: " << lowest;
    cout << "\nAverage: " << average;
    cout << "\nPassed Students: " << pass;
    cout << "\nFailed Students: " << fail;	
	
}
