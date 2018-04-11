//
//  main.cpp
//  Room
//
//  Created by Andrew Chypurko on 4/11/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include <iostream>
#include "House.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Example of Composition Relationship" << "\n";

    House *house = new House("House");
    
    cout << "House details..." << "\n";
    house->showHouse();
    delete house;
    cout<<"Here House itself creates the Rooms and Deletes as well, before it gets deletd...\n";

    return 0;
}
