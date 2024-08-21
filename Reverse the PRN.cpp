//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Decision Making Statements Loops to Reverse the PRN

#include <iostream>
using namespace std;

int main() {
     int PRN,reverse;
    cout<<"Enter your PRN:"<<endl;
    cin>>PRN;
    while(PRN!=0){
        reverse=PRN%10;
        PRN=PRN/10;
        cout<<reverse;
    }
        
    return 0;
}


/*Output:
Enter your PRN:
23070
07032*/