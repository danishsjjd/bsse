#include <iostream>
#include <chrono> // Include the chrono library for measuring time
using namespace std;

int program();

const int FREE_HOURS_THRESHOLD = 1;
const int PER_HOUR_RATE = 200;

int main()
{
    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();

    int returnValue = program();

    chrono::high_resolution_clock::time_point end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << endl
         << "-------------------------------------------" << endl;
    cout << "Process exited after " << duration.count() << " seconds with return value " << returnValue << endl;

    return returnValue;
}

int program()
{
    int hoursAtGym;

    cout << "Enter the number of hours spent at the gym: ";
    cin >> hoursAtGym;

    if (hoursAtGym <= 0)
    {
        cout << "Invalid input. Please enter a positive number of hours." << endl;
        return 1;
    }

    hoursAtGym -= FREE_HOURS_THRESHOLD;

    cout << "Total gym usage fee: Rs " << hoursAtGym * PER_HOUR_RATE << endl;

    return 0;
}
