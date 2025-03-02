#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
#include "User.h"
#include "Patient.h"
#include "Appointment.h"
#include "HospitalManagementSystem.h"

using namespace std;

int main() {
    HospitalManagementSystem hms;
    string username, password;
    int choice;

    while (true) {
        cout << "==================== Hospital Management System ====================" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register Patient" << endl;
        cout << "3. View Patient Information" << endl;
        cout << "4. Update Patient Information" << endl;
        cout << "5. Schedule Appointment" << endl;
        cout << "6. View Appointment" << endl;
        cout << "7. Cancel Appointment" << endl;
        cout << "8. Exit" << endl;
        cout << "=====================================================================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // UC-01: User Authentication
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                if (!hms.login(username, password)) {
                    cout << "Login failed. Please try again." << endl;
                }
                break;
            }
            case 2: {
                // UC-02: Register a patient
                string name, dob, contact;
                cout << "Enter patient name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter patient DOB (YYYY-MM-DD): ";
                getline(cin, dob);
                cout << "Enter patient contact: ";
                getline(cin, contact);
                hms.registerPatient(name, dob, contact);
                break;
            }
            case 3: {
                // UC-03: View patient information
                string patientID;
                cout << "Enter patient ID to view: ";
                cin >> patientID;
                hms.viewPatientInfo(patientID);
                break;
            }
            case 4: {
                // UC-03: Update patient information
                string patientID, name, dob, contact;
                cout << "Enter patient ID to update: ";
                cin >> patientID;
                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter new DOB (YYYY-MM-DD): ";
                getline(cin, dob);
                cout << "Enter new contact: ";
                getline(cin, contact);
                hms.updatePatientInfo(patientID, name, dob, contact);
                break;
            }
            case 5: {
                // UC-04: Schedule appointment
                string patientID, doctorID, dateTime;
                cout << "Enter patient ID for appointment: ";
                cin >> patientID;
                cout << "Enter doctor ID: ";
                cin >> doctorID;
                cout << "Enter appointment date and time (YYYY-MM-DD HH:MM): ";
                cin.ignore();
                getline(cin, dateTime);
                hms.scheduleAppointment(patientID, doctorID, dateTime);
                break;
            }
            case 6: {
                // UC-05: View appointment
                string apptID;
                cout << "Enter appointment ID to view: ";
                cin >> apptID;
                hms.viewAppointment(apptID);
                break;
            }
            case 7: {
                // UC-05: Cancel appointment
                string apptID;
                cout << "Enter appointment ID to cancel: ";
                cin >> apptID;
                hms.cancelAppointment(apptID);
                break;
            }
            case 8: {
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }

        cout << endl;  // Add a new line for better formatting
    }

    return 0;
}
