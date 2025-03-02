#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient {
private:
    string patientID;
    string name;
    string dob;
    string contact;

public:
    Patient(string id, string n, string d, string c);
    void displayInfo();
    string getID();
    void updateInfo(string n, string d, string c);
};

#endif
