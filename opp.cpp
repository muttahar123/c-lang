#include<iostream>
using namespace std;

class utilityBills{
    public :
    void displayBill(){
        cout<<"Utility Bills Displayed"<<endl;
        cout<<"Electricity Bill: $100"<<endl;
        cout<<"Water Bill: $50"<<endl;
        cout<<"Internet Bill: $30"<<endl;
        cout<<"Total Utility Bill: $180"<<endl;
    }
    int main(){
        utilityBills ub;
        ub.displayBill();
        return 0;
    }
};