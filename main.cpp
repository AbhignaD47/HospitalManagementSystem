#include "HospitalManagementSystem.h"
#include <iostream>

int main() {
    HospitalManagementSystem hms;
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (!hms.login(username, password)) return 1;

    hms.registerPatient("John Doe", "1990-05-15", "123-456-7890");

    hms.scheduleAppointment("P1", "doc1", "2025-03-02 10:00");

    return 0;
}
