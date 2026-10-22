
#include <iostream>
using namespace std;

// The parent class represents a general medical device.
class MedicalDevice {
public:
    // A virtual function allows derived classes to provide
    // their own versions of this function.
    virtual void operate() {
        cout << "The medical device is operating." << endl;
    }

    virtual ~MedicalDevice() {}
};

// The ECG machine is one type of medical device.
class ECGMachine : public MedicalDevice {
public:
    void operate() override {
        cout << "ECG machine is recording the heart's "
             << "electrical activity." << endl;
    }
};

// The ultrasound scanner is another type of medical device.
class UltrasoundScanner : public MedicalDevice {
public:
    void operate() override {
        cout << "Ultrasound scanner is producing "
             << "images of internal body structures." << endl;
    }
};

int main() {
    // Creating objects of the derived classes.
    ECGMachine ecg;
    UltrasoundScanner ultrasound;

    // A parent-class pointer can refer to either derived object.
    MedicalDevice* device;

    cout << "MEDICAL DEVICE OPERATIONS" << endl;
    cout << "-------------------------" << endl;

    device = &ecg;
    device->operate();

    device = &ultrasound;
    device->operate();

    return 0;
}
