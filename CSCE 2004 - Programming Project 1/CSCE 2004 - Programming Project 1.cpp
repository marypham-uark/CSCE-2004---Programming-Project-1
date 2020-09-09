// CSCE 2004 - Programming Project 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //dimensions of the truck
    float truckHeight;
    float truckWidth;
    float truckLength;

    //dimensions of the boxes
    float boxHeight;
    float boxWidth;
    float boxLength;

    //the maximum amount of boxes you can fit in each dimension
    int maxBoxHeight;
    int maxBoxWidth;
    int maxBoxLength;

    //the volume of the truck and box by itself
    float truckVolume;
    float boxVolume;

    //the calculated maximum about of boxes you can fit in the truck
    int boxAmount;

    //the empty space in each direction of the truck
    float emptyHeight;
    float emptyWidth;
    float emptyLength;

    //the calculated amount of space utilized in the truck
    float percentSpace;

    //introduction
    cout
        << "                         _____________________________________________________" << endl
        << "                        |                                                     |" << endl
        << "               _______  |                                                     |" << endl
        << "              / _____ | |                   TRUCK SPACE MANAGER               |" << endl
        << "             / /(__) || |                      by Mary Pham                   |" << endl
        << "    ________/ / |OO| || |                                                     |" << endl
        << "   |         |-------|| |                                                     |" << endl
        << "  (|         |     -.|| |_______________________                              |" << endl
        << "   |  ____   \\       ||_________||____________  |             ____      ____  |     ________" << endl
        << "  /| / __ \\   |______||     / __ \\   / __ \\   | |            / __ \\    / __ \\ |\\   |        |" << endl
        << "  \\|| /  \\ |_______________| /  \\ |_| /  \\ |__| |___________| /  \\ |__| /  \\|_|/   |        |" << endl
        << "     | () |                 | () |   | () |                  | () |    | () |      |        |" << endl
        << "      \\__/                   \\__/     \\__/                    \\__/      \\__/       |________|" << endl
        << "------------------------------------------------------------------------------------------------"

    //this is where users input data about the truck dimensions
        << endl << endl << "To begin, we need some information about your truck:" << endl << endl   
        << "What is the truck height (in feet)?" << endl;
    cin >> truckHeight;
    cout << "What is the truck width (in feet)?" << endl;
    cin >> truckWidth;
    cout << "What is the truck length (in feet)?" << endl;
    cin >> truckLength;
    cout << endl;

    //converting feet to inches
    truckHeight = truckHeight * 12;
    truckWidth = truckWidth * 12;
    truckLength = truckLength * 12;

    //this is where users input data about the box dimensions
    cout << "Now we need to know the box dimensions:" << endl << endl
        << "What is the box height (in inches)?" << endl;
    cin >> boxHeight;
    cout << "What is the box width (in inches)?" << endl;
    cin >> boxWidth;
    cout << "What is the box length (in inches)?" << endl;
    cin >> boxLength;

    //calculating the maximum amount of boxes in each specific dimension
    maxBoxHeight = truckHeight / boxHeight;
    maxBoxWidth = truckWidth / boxWidth;
    maxBoxLength = truckLength / boxLength; 

    //calculating the maximum amount of boxes we can fit
    boxAmount = maxBoxHeight * maxBoxWidth * maxBoxLength;

    //here is where we print the data we calculated
    cout << endl << "The amount of boxes that you can fit in your truck is " << boxAmount << "." << endl << endl;

    emptyHeight = truckHeight - (maxBoxHeight * boxHeight);
    emptyWidth = truckWidth - (maxBoxWidth * boxWidth);
    emptyLength = truckLength - (maxBoxLength * boxLength);

    cout << "There is " << emptyHeight << " inches of empty height space." << endl;
    cout << "There is " << emptyWidth << " inches of empty width space." << endl;
    cout << "There is " << emptyLength << " inches of empty length space." << endl << endl;

    //calculating both truck and box volumes
    truckVolume = truckHeight * truckWidth * truckLength;
    boxVolume = boxHeight * boxWidth * boxLength;

    percentSpace = ((boxAmount * boxVolume) / truckVolume)*100;

    cout << "The truck is utilizing " << percentSpace << "% of its volume." << endl;

    return 0;
}