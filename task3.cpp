#include <iostream>

using namespace std;

int main (){

    
    int arr[5];
    int index;
    

    cout  << "Enter 5 integers : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout  << "Elemnets  " << i + 1 << ": ";
        cin >>  arr[i];

    }
    cout  << "Elemnets are  : " << endl;
    

    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i << " ] = " << arr[i] << endl;
        
    }

    cout << "Enter Index : ";
    cin >> index;
   for (int i = 0; i < 5; i++)
    {
        if (index == arr[i])
        {
            cout <<"The index value is " << i;
        }
        
        
    }
    





    
}

