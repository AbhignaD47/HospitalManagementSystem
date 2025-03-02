#include "HospitalManagementSystem.h"
#include <iostream>

HospitalManagementSystem::HospitalManagementSystem() {
    users.push_back(User("admin1", "admin123", "Admin"));
    users.push_back(User("doc1", "doc123", "Doctor"));
    doctorAvailability["doc1"] = true;
}

bool HospitalManagementSystem::login(string username, string password) {
    for (auto& user : users) {
        if (user.authenticate(username, password)) {
            cout << "Login successful! Role: " << user.getRole() << endl;
            return true;
        }
    }
    cout << "Invalid credentials!" << endl;
    return false;
}

void HospitalManagementSystem::registerPatient(string name, string dob, string contact) {
    string patientID = "P" + to_string(patients.size() + 1);
    patients.push_back(Patient(patientID, name, dob, contact));
    cout << "Patient registered with ID: " << patientID << endl;
}

void HospitalManagementSystem::scheduleAppointment(string patientID, string doctorID, string dateTime) {
    if (doctorAvailability[doctorID]) {
        string apptID = "A" + to_string(appointments.size() + 1);
        appointments.push_back(Appointment(apptID, patientID, doctorID, dateTime));
        doctorAvailability[doctorID] = false;
        cout << "Appointment scheduled with ID: " << apptID << endl;
    } else {
        cout << "Doctor not available!" << endl;
    }
}
