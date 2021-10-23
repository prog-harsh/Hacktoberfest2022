#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare the variables
    int a, b, i, j;

    // Ask user to enter lower value of interval please not
    // interval < 0 cannot be prime numbers
    cout << "Enter lower bound of the interval: ";
    cin >> a; // Take input

    // Ask user to enter upper value of interval
    cout << "\nEnter upper bound of the interval: ";
    cin >> b; // Take input

    // Print display message
    cout << "\nPrime numbers between " << a << " and " << b
         << " are: ";

    // Explicitly handling the cases when a is less than 2
    // since 0 and 1 are not prime numbers
    if (a <= 2)
    {
        a = 2;
        if (b >= 2)
        {
            cout << a << " ";
            a++;
        }
    }

    // MAKING SURE THAT a IS ODD BEFORE WE BEGIN
    // THE LOOP
    if (a % 2 == 0)
        a++;

    // NOTE : WE TRAVERSE THROUGH ODD NUMBERS ONLY
    for (i = a; i <= b; i = i + 2)
    {

        // flag variable to tell
        // if i is prime or not
        bool flag = 1;

        // WE TRAVERSE TILL SQUARE ROOT OF j only.
        // (LARGEST POSSIBLE VALUE OF A PRIME FACTOR)
        for (j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            cout << i << " ";
    }

    return 0;
}
