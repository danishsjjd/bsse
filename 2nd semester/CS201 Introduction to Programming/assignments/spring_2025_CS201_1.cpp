#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name = "Muhammad Danish Sajjad";
    string vuId = "BC240409225";
    string numericPartInput;

    cout << "Name:  " << name << endl;
    cout << "VU-ID: " << vuId << endl
         << endl;

    cout << "Enter numeric part of VU-ID: ";
    cin >> numericPartInput;

    if (numericPartInput.length() != 9)
    {
        cout << "Invalid VU-ID provided, please try again (9 digits allowed)" << endl;
        return 1;
    }

    for (int i = 0; i < numericPartInput.length(); ++i)
    {
        if (!isdigit(numericPartInput[i]))
        {
            cout << "Invalid VU-ID provided, please try again (only digits allowed)." << endl;
            return 1;
        }
    }

    string numericPartInputMiddleDigits = numericPartInput.substr(2, 5);
    cout << endl
         << "Extracted Middle Five Digits: " << numericPartInputMiddleDigits << endl
         << endl;

    const int MENU_SIZE = 5;
    string menuItems[MENU_SIZE] = {"Burger", "Pizza", "Fries", "Sandwich", "Cold Drink"};
    int menuPrices[MENU_SIZE] = {250, 500, 150, 200, 100};

    cout << "=== Welcome to C++ Cafe ===" << endl;
    cout << "----- MENU -----" << endl;

    for (int i = 0; i < MENU_SIZE; i++)
    {
        cout << setw(2) << i + 1 << ". "
             << left << setw(12) << menuItems[i]
             << right << " - Rs. " << menuPrices[i] << endl;
    }

    cout << endl;

    int totalBill = 0;

    for (int i = 0; i < MENU_SIZE; i++)
    {
        int itemQuantity = numericPartInputMiddleDigits[i] - '0';

        if (itemQuantity == 0)
        {
            continue;
        }

        int amount = menuPrices[i] * itemQuantity;
        totalBill += amount;
        cout << menuItems[i] << " (" << itemQuantity << " x " << "Rs. " << menuPrices[i] << ") = " << " Rs. " << amount << endl;
    }

    cout << endl;

    const int DISCOUNT_THRESHOLD = 5000;
    const double DISCOUNT_RATE = 0.10; // 10% discount
    bool isDiscountApply = totalBill >= DISCOUNT_THRESHOLD;
    int discountAmount = 0;
    if (isDiscountApply)
    {
        discountAmount = totalBill * DISCOUNT_RATE;
        cout << "Suprise! You've unlocked a 10% discount" << endl
             << endl;
    }

    cout << "=== Final Bill ===" << endl;
    cout << "Total" << (isDiscountApply ? " before discount" : "") << ":" << " Rs. " << totalBill << endl;
    if (isDiscountApply)
    {
        cout << "Discount: Rs. " << discountAmount << endl;
    }
    cout << "Net Payable Amount: Rs. " << (isDiscountApply ? totalBill - discountAmount : totalBill) << endl
         << endl;

    cout << "Thank you for visiting C++ Cafe!" << endl;

    return 0;
}
