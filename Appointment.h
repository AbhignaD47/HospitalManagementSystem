#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class Appointment {
private:
    string appointmentID;
    string patientID;
    string doctorID;
    string dateTime;

public:
    Appointment(string aID, string pID, string dID, string dt);
    void display();
    string getID();
    void update(string dt);
};

#endif
