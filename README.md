# 🏥 Hospital Management System (C++)

This is a **Hospital Management System** built in **C++**, designed to manage users, patients, and appointments efficiently.

## 🚀 Features
- **User Authentication** (Admin, Doctor, Nurse, Receptionist) 🔐
- **Patient Registration & Information Management** 📋
- **Appointment Scheduling & Management** 📅
- **Doctor Availability Tracking** ✅

---

## 🛠️ Technologies Used
- **C++** (Object-Oriented Programming)
- **Standard Template Library (STL)**
- **Data Structures** (Vectors, Maps)
- **Basic File Handling** (optional if you add persistence)

---

## 📁 Breakdown of Files

| File Name                     | Description |
|--------------------------------|------------|
| `User.h`                      | Contains the `User` class declaration. |
| `User.cpp`                    | Implements the `User` class. |
| `Patient.h`                   | Contains the `Patient` class declaration. |
| `Patient.cpp`                 | Implements the `Patient` class. |
| `Appointment.h`               | Contains the `Appointment` class declaration. |
| `Appointment.cpp`             | Implements the `Appointment` class. |
| `HospitalManagementSystem.h`  | Declares the `HospitalManagementSystem` class. |
| `HospitalManagementSystem.cpp` | Implements the `HospitalManagementSystem` class. |
| `main.cpp`                    | Contains the `main()` function. |

---

## 🛠️ How to Compile & Run

**Using g++ (Command Line):**
```sh
g++ main.cpp User.cpp Patient.cpp Appointment.cpp HospitalManagementSystem.cpp -o hospital
./hospital
