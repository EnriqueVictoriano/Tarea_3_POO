#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "door.h"
using namespace std;

int main(int argc, char * argv[]) {
    ifstream fin;
    int nDoors, junk;
    vector<Door *> doors;
    if (argc != 2) {
        cout << "Usage: "<<argv[0]<<" <configuration_file>" << endl;
        return -1;
    }
    fin.open(argv[1]);
    if (fin.fail()){
        cout << "Could not read file" << endl;
        return -2;
    }
    cout << "Argument:" << argv[1] << endl;
    fin >> nDoors;
    fin >> junk;
    cout << "nDoors:" << nDoors << " junk: " << junk << endl;
    for( int i=0; i<nDoors; i++) {
        int zone;
        fin >> junk >> junk >> zone;
        doors.push_back(new Door(zone));
    }
  
    Central central;
    for (auto door:doors){
        central.addDoor(door);
    }
    for (auto window:windows){
        central.addwindow(window);
    }
    for (uint i=0; i<nDoors; i++) { //uint : unsigned int
        doors[i]->changeState();
        doors[i]->changeState();
    }
     for (uint i=0; i<nWindows; i++) { //uint : unsigned int
        windows[i]->changeState();
        windows[i]->changeState();
    }
    central.verifyZones();      

    for (auto door : doors) {  
        door->changeState();
    }
    for (auto window : windows) {
        window->changeState();
    }

    return 0;
}
