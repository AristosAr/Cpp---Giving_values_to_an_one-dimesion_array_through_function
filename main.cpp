#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float g(int i,float x){
//local variables
float result_g;

x=0.5;
result_g = x*10*i;

return result_g;
}

float f(float z){ //the function f will take a value z which equals the value of each element
float result_f;

result_f= sqrt(z*z+10);

return result_f;
}

int main()
{
    //const int array_size
    float A[25];
    float x, z;
    int i;

    int size = sizeof A / sizeof A[0]; //giving the size of the array A a value

    for (i=0; i<size; i++){
        A[i]=i*10/3.1 ;
        cout << setw(10) << fixed << setprecision(3);
        cout << A[i] << endl;
    }

    cout << " " << endl;

    for (i=0; i<size; i++){
        A[i]=g(i,x);
        cout << setw(10) << fixed << setprecision(3);
        cout << A[i] << endl;
    }

    cout << " " << endl;

    for (i=0; i<size; i++){
    z=A[i];
    cout << setw(10) << fixed << setprecision(3);
    cout << f(z) <<endl;  //Calling the function while at the same time, calculate the A[i] and printing its value
    }
    return 0;
}

