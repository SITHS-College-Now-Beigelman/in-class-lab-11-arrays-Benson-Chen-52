// Benson Chen
// Lab 11
// 11/12/24

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   
// Question 1
    const int ARRAY_SIZE = 50; //Sets the array size to be a constant value of 50
    double alpha[ARRAY_SIZE]; //declares 50 double type variables

    for(int i = 0; i < 25; i++) //For the first 25 elements of the array
    {
        alpha[i] = i * i; //Squares the index variable
    }
 
    for(int i = 25; i < ARRAY_SIZE; i++) //For the last 25 elements of the array
    {
        alpha[i] = 3 * i; //Triples the index variable
    }
// Question 2
    for(int i = 0; i < ARRAY_SIZE; i++) //For all the array values
    {
        cout << setw(5) << alpha[i]; //Uses setw for formatting and prints the value of that index
        if((i+1) % 10 == 0) //If the component is divisible by 10 then it moves to a new line
            cout << endl; 
    }
// Question 3
    const int size = 50; //Sets the array size to be a constant value of 50
    double beta[size]; //Declares 50 variables

    srand(time(0)); //Randomizer

    for(int i = 0; i < size; i++) //For all values in the array
    {
        beta[i] = (rand() % 100) + 1; //Sets a random value between 1 and 100
    }

    for(int i = 0; i < 25; i++) //For the first 25 elements in the array
    {
        beta[i] = beta[i] * beta[i]; //Squares the value in those component
    }

    for(int i = 25; i < size; i++) //For the last 25 elements in the array
    {
        beta[i] = 3 * beta[i]; //Triples the value in those components
    }

    for(int i = 0; i < size; i++) //For all values in the array
    {
        cout << setw(7) << beta[i]; //Uses setw to format the output before printing the value from that array component
        if((i+1) % 10 == 0) //If the index component is divisible by 10, start a new line
            cout << endl; 
    }
// Question 4
    double sum = 0; //Sum variable
    for(int i = 0; i < size; i++) //For all values in the array
    {
        sum += beta[i]; //Adds the values
    }

    double average = sum/size; //Calculation for average
    cout << "The average of the array elements is " << average << endl; //Prints the average
// Question 5
    int hundred = 0; //Variable for all the values equal to 100
    for(int i = 0; i< size; i++) //For all values in the array
    {
        if(beta[i] == 100) //If the value in the coponent is equal to 100
            hundred++; //Adds 1 to the hundred variable
    }
    cout << "The number of elements equal to 100 is " << hundred; //prints the number of elements equal to 100

    return 0;
}
/*
    0    1    4    9   16   25   36   49   64   81
  100  121  144  169  196  225  256  289  324  361
  400  441  484  529  576   75   78   81   84   87
   90   93   96   99  102  105  108  111  114  117
  120  123  126  129  132  135  138  141  144  147
   2025   9604   3025   7056   4096    169    100   8649   6400   8836
   6889    289    676   4356   1849   6400   2401   1521   2809   3481
    324     49   2500   7056   7569    162    297    159     99    276
     69    141     75     69     66     30    204    153    210    222
    249     30     75    300     30    126    189     78     57    291
The average of the array elements is 2035.72
The number of elements equal to 100 is 1
*/