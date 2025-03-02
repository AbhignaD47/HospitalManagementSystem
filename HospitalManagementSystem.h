#ifndef HMS_H
#define HMS_H

#include "User.h"
#include "Patient.h"
#include "Appointment.h"
#include <vector>
#include <map>

class HospitalManagementSystem {
private:
    vector<User> users;
    vector<Patient> patients;
    vector<Appointment> appointments;
    map<string, bool> doctorAvailability;

public:
    HospitalManagementSystem();
    bool login(string username, string password);
    void registerPatient(string name, string dob, string contact);
    void viewPatientInfo(string patientID);
    void updatePatientInfo(string patientID, string name, string dob, string contact);
    void scheduleAppointment(string patientID, string doctorID, string dateTime);
    void viewAppointment(string apptID);
    void cancelAppointment(string apptID);
};

#endif
