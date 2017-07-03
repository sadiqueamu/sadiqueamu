#include<iostream>
#include<stdlib.h>
using namespace std;

enum VehicleType {
        VT_TwoWheeler,    
	VT_ThreeWheeler,    
	VT_FourWheeler,
        VT_FiveWheeler
};


//Library classes 
class Vehicle{
	public:
	virtual void printVehicle() = 0;
	static Vehicle* Create(VehicleType type);
};

class twoWheeler:public Vehicle{
	public:
	void printVehicle(){
		cout<<"I am a twoWheeler\n";
	}
};

class threeWheeler:public Vehicle{
	public:
	void printVehicle(){
		cout<<"I am a threeWheeler\n";
	}
};

class fourWheeler:public Vehicle{
	public:
	void printVehicle(){
		cout<<"I am a fourWheeler\n";
	}
};

// Factory method to create objects of different types.
// Change is required only in this function to create a new object type
Vehicle* Vehicle::Create(VehicleType type) {
    if (type == VT_TwoWheeler)
        return new twoWheeler();
    else if (type == VT_ThreeWheeler)
        return new threeWheeler();
    else if (type == VT_FourWheeler)
        return new fourWheeler();
    else return NULL;
}
 
// Client class
class Client {
public:
 
    // Client doesn't explicitly create objects
    // but passes type to factory method "Create()"
    Client(VehicleType type)
    {   try{
              //VehicleType type = VT_ThreeWheeler;
              pVehicle = Vehicle::Create(type);
              if(!pVehicle) 
                throw pVehicle;
           }
           catch(Vehicle*){
             cout<<"Not implemented\n";
             exit(1); 
          }
    }
    ~Client() {
        if (pVehicle) {
            delete[] pVehicle;
            pVehicle = NULL;
        }
    }
    Vehicle* getVehicle()  {
        return pVehicle;
    }
 
private:
    Vehicle *pVehicle;
};

// Driver program
int main() {
    Client *pClient = new Client(VT_ThreeWheeler);
    Vehicle * pVehicle = pClient->getVehicle();
    pVehicle->printVehicle();
    return 0;
}