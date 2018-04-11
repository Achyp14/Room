//
//  Room.cpp
//  Room
//
//  Created by Andrew Chypurko on 4/11/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//
#include <iostream>
using namespace std;

class Room
{
private:
    string houseName;
    string name;
public:
    
    Room(string _houseName, string _name)
    {
        cout << "Create room" << "\n";
        houseName = _houseName;
        
        if(houseName != "")
        {
            name = _name;
        }
        else
        {
            cout << "Oops House itself is not Created Yet ..." << "\n";
        }
    };
    
    ~Room()
    {
        cout << "Delete room" << "\n";
        houseName = "";
        name = "";
    };
    
    void showRoomName()
    {
        cout << name;
        cout <<"\n";
    }
};
