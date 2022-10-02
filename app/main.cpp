/**
 * @copyright Copyright (c) 2022
 *
 * @file main.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-10-01
 * 
 * @brief ENPM808X, Week 4, Test Driven Development
 * 
 * @section DESCRIPTION
 * 
 * Main file for PID Controller implementation based on Test Driven Development
 *
 */

#include <iostream>

int main() {
    /*
      TO DO
      1. Take user input for P, I, and D gain parameters and sampling rate for the PID controller.
      2. Create a PID instance and call the compute method
    */
    cout<<"Enter Kp,Ki,Kd,dt\n";
    cin>>Kp>>Ki>>Kd>>dt;
    cout<<"Enter target and actual velocity\n";
    cin>>target>>actual;
    PID obj;
    calculatedVel = obj.computeVel(target,actual);
        
    return calculatedVel;
}
