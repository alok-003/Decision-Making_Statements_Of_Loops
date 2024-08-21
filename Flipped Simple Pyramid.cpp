//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Decision Making Statements Loops to print Flipped Simple Pyramid

#include <iostream>
using namespace std;

int main()  {
    int n;

    cout<<"Enter The Value for n: ";
    cin>>n;
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}


/*Output:
Enter The Value for n: 5
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
*/