#include <iostream>
using namespace std;

int main(void) {

    int x;

    int *array{ new int[5]{ 10, 7, 15, 3, 11 } };

    cout << "Array elements: " << endl;

    for (x = 0; x < 5; x++) {

        cout << array[x] << endl;
    }
    cout<<endl;
    array=new int[7];
    array[5]=0;
    array[6]=30;
    for (x = 0; x < 7; x++) {

        cout << array[x] << endl;
    }
    return 0;
}
