#include<iostream>
using namespace std;

class utilityBills{
    public :
    void displayBill(){
     cout<<"Dj mall\n";
     cout<<"Date: 28-10-2025\n";
     cout<<"Invoice No: 001254\n";
     cout<<"Operator name: Muttahar Hunter\n";
     cout<<"client name: Arsalan Ahmed\n";
     cout<<"Cleint type: walkin\n";
     cout<<"price: \n";
    }
    int main(){
        utilityBills ub;
        ub.displayBill();
        return 0;
    }
};