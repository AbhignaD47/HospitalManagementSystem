#include "Patient.h"
#include <iostream>

Patient::Patient(string id, string n, string d, string c) 
    : patientID(id), name(n), dob(d), contact(c) {}

void Patient::displayInfo() {
    cout << "Patient ID: " << patientID << "\nName: " << name 
         << "\nDOB: " << dob << "\nContact: " << contact << endl;
}

string Patient::getID() { return patientID; }

void Patient::updateInfo(string n, string d, string c) {
    name = n; dob = d; contact = c;
}
