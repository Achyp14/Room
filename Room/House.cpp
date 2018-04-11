//
//  House.cpp
//  Room
//
//  Created by Andrew Chypurko on 4/11/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//
#include <iostream>
#include "Room.cpp"
using namespace std;

class House
{
private:
    string name;
    Room *rooms[3];
public:
    
    House(){};
    
    House(string _name)
    {
        cout << "House" << "\n";
        name = _name;
        rooms[0] = new Room(name, "Kitchen");
        rooms[1] = new Room(name, "Bedroom");
        rooms[2] = new Room(name, "Bathroom");
    }
    
    ~House()
    {
        cout << "House" << "\n";

        cout << "Delete all the Rooms ..." << "\n";
        for(int i = 0; i < 3; i++)
        {
            if(rooms[i] != NULL)
            {
                delete (rooms[i]);
            }

        }
        name = "";
    }
    
    void showHouse()
    {
        cout << "Name of the House :" << name << "\n";
        cout << "Rooms details..." << "\n";
        for(int i = 0; i < 3; i++)
        {
            if(rooms[i] != NULL)
            {
                rooms[i] -> showRoomName();
            }
        }
    }
};
