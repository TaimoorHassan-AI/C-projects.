#include <iostream>
using namespace std;

class car{
	public:
	string model;
	string brand;
	car(){
		model="unknown";
		brand="unknown";
	}
	
	car(string b,string m){
		brand=b;
		model=m;
	}
};
int main(){
	car car1;
	car car2("bwm","x5");
	car car3("ford","x2");
	
cout<<"car1:" <<car1.brand << " "<<car1.model<<endl;
cout<<"car2:" <<car2.brand<< " "<<car2.model<<endl;		
cout<<"car3:" <<car3.brand<< " "<<car3.model<<endl;		
return 0;

}

