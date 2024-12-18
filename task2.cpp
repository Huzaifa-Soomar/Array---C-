#include <iostream>
using namespace std;

int main (){
int min = 2000000 , max =0;

    int arr [4] = {1,2,3,4};

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }else if (arr [i] < min)
        {
            min = arr[i];
        } 
    }

    cout  << "max is : " << max << endl;
    cout  << "min is : " << min << endl;

}