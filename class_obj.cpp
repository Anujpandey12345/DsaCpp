// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
class Chai{
    public:
    // Data member
    string teaName;
    int servings;
    vector<string> ingrediants;
    //member function 
    void displayChaiDetails(){
        cout<<"Name of the Tea :: "<<teaName<<endl;
        cout<<"Servings of Tea :: "<<servings<<endl;
        cout<<"Ingrediants :: ";
        for(string ing : ingrediants){
            cout<<ing<<" ";
        }
        cout<<endl;
    }
};
int main() {
    
    Chai myChai;
    
    myChai.teaName = "Sadi Chai";
    myChai.servings = 12;
    myChai.ingrediants = {"Chai patti", "Milk", "Suger", "daru"};
    myChai.displayChaiDetails();
    
    Chai myChai_1;
    
    myChai_1.teaName = "meethi Chai";
    myChai_1.servings = 12;
    myChai_1.ingrediants = {"Chai patti j", "Milk a", "Suger a", "daru q"};
    myChai_1.displayChaiDetails();
    return 0;
}