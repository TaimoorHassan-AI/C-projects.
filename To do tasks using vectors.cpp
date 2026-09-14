#include <iostream>
#include <vector>
#include <string>
using namespace std;

class dolist {
    public:
    vector <string> tasks;
};
int main(){
    dolist mytask;
    int num;

    cout<<"how many tasks : ";
    cin>>num;
    cin.ignore();

    for(int i = 0;i< num;i++){
        string task;
        cout<<"enter task "<<(i+1)<<":";
        getline(cin,task);
        mytask.tasks.push_back(task);
    }
    
      cout << "\nYour tasks:" << endl;
    for (int i = 0; i < mytask.tasks.size(); i++) {
        cout << (i + 1) << ". " << mytask.tasks[i] << endl;
    }

    return 0;
}
