#include <iostream>
#include <string>
using namespace std;

// Structure to store customer data
struct Customer {
    int id;
    string name;
    int age;
    string address;
    string city;
};

int main() {
    // Initialize customer data
    Customer customers[4] = {
        {89, "White Clover Markets", 23, "305 - 14th Ave. S. Suite 3B", "Seattle"},
        {90, "Wilman Kala", 21, "Keskuskatu 45", "Helsinki"},
        {91, "Wolski", 30, "Ulu. Filtrowa 68", "Walla"},
        {92, "Cardinal", 56, "Skagen 21", "Stavanger"}
    };

    // Find age difference between most senior and most junior
    int minAge = customers[0].age;
    int maxAge = customers[0].age;

    for (int i = 1; i < 4; i++) {
        if (customers[i].age < minAge)
            minAge = customers[i].age;
        if (customers[i].age > maxAge)
            maxAge = customers[i].age;
    }

    int ageDifference = maxAge - minAge;
    cout << "Age Difference between senior and junior customers: " 
         << ageDifference << " years" << endl;

    // List customers whose ages are ≤ 30
    cout << "\nCustomers aged 30 or less:" << endl;
    for (int i = 0; i < 4; i++) {
        if (customers[i].age <= 30) {
            cout << customers[i].name << endl;
        }
    }

    return 0;
}
