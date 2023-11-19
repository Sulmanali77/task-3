#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_SLABS = 3;
const int SLAB_RANGES[NUM_SLABS] = {100, 200, 300};
const int SLAB_COSTS[NUM_SLABS] = {10, 15, 20};

int electricityData[NUM_SLABS][3] = 
{
    {55, 65, 75},
    {120, 150, 170},
    {210, 230, 240}
};

void displayStudentID() {
	cout << "Student ID: [Sulman Ali Shah [BSCSM_F22_260]\n" << endl;
	cout<<"\t\tElectricity_bill Data\n"<<endl;
    cout<< "\t\tslab_1 |55   65   75 |"<<endl;
    cout<< "\t\tslab_2 |120  150  170|"<<endl;
    cout<< "\t\tslab_3 |210  230  240|"<<endl;
}

void costSlab(int slabIndex) {
    int units = 0;
    for (int i = 0; i < NUM_SLABS; ++i) {
        units = electricityData[slabIndex][i];
        int cost = units * SLAB_COSTS[slabIndex];
        cout<< cost<< "  " ;
    }
}

void displayMenu() {
    cout << "\n\t\t\tMenu:\n" << endl;
    cout << "1. Display the bill of Slab 1 and Slab 2." << endl;
    cout << "2. Display the bill of Slab 3." << endl;
    cout << "Press any other key to exit." << endl;
}

int main() {
    displayStudentID();

    char choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case '1':
            	cout<<"\n";
            	cout << "Bill for Slab 1\n"<<endl;
                costSlab(0);
                cout << "\n\nBill for Slab 2\n"<<endl;
                costSlab(1);
                break;
            case '2':
            	cout<<"\n";
            	cout << "Bill for Slab 3\n"<<endl;
                costSlab(2);
                break;
            default:
                cout << "Exiting the program." << endl;
                return 0;
        }
    } while (true);

    return 0;
}
