#include "Appointment.h"
#include <iostream>

Appointment::Appointment(string aID, string pID, string dID, string dt) 
    : appointmentID(aID), patientID(pID), doctorID(dID), dateTime(dt) {}

void Appointment::display() {
    cout << "Appointment ID: " << appointmentID << "\nPatient ID: " << patientID 
         << "\nDoctor ID: " << doctorID << "\nDate & Time: " << dateTime << endl;
}

string Appointment::getID() { return appointmentID; }

void Appointment::update(string dt) { dateTime = dt; }
