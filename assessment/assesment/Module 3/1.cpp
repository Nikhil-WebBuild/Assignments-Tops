#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of entries in the Table: ";
    cin >> num;

    int p_id[num], p_code[num];
    string p_name[num];
    double p_price[num];

    for (int i = 0; i < num; i++)
    {   
        cout << "\nThe Table of " << i + 1 << " Entry :-\n\n";
        cout << "Enter Product ID:- ";
        cin >> p_id[i];
        cout << "Enter Product Name:- ";
        cin >> p_name[i];
        cout << "Enter Product Price:- ";
        cin >> p_price[i];
        cout << "Enter Product Code:- ";
        cin >> p_code[i];
        cout << "-----------------------------------------------";
        cout << endl;
        
    }


    cout << "\nProduct Details:-\n";
    cout << "-----------------------------------------------\n";
    cout << "ID\tName\t\t\tPrice\tCode\n";
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < num; i++)
    {
        cout << p_id[i] << "\t" << p_name[i] << "\t\t\t" << p_price[i] << "\t" << p_code[i] << endl;
    }

    return 0;
}
