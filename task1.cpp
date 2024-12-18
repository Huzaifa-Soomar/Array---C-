#include <iostream>

using namespace std;

int main (){

    // Sum of Array 
    int arr[5];
    int sum =0;

    cout  << "Enter 5 integers : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout  << "Elemnets  " << i + 1 << ": ";
        cin >>  arr[i];

    }
    cout  << "Array of sum : " << endl;
    

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
        
    }
    cout << "sum is : " <<  sum  <<endl;





    
}