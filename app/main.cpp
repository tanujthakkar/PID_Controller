/**
 * @copyright Copyright (c) 2022
 *
 * @file main.cpp
 * @author Part1: Tanuj Thakkar(tanuj@umd.edu)
 * @author Part 2: Sharmitha Ganesan(sganesa3@terpmail.umd.edu) 
 * Part 2 Navigator : Aman Sharma(ahrm007@umd.edu)
 * @version 0.1
 * @date 2022-10-01
 *
 * @brief ENPM808X, Week 5, Test Driven Development
 *
 * @section DESCRIPTION
 *
 * Main file for PID Controller implementation based on Test Driven Development
 *
 */
#include "../include/pid.hpp"
int main() {
  /*
    TO DO
    1. Take user input for P, I, and D gain parameters and sampling rate for the
    PID controller.
    2. Create a PID instance and call the compute method
  */
  double Kp, Ki, Kd, dt;
  cout << "Enter Kp,Ki,Kd,dt\n";
  cin >> Kp >> Ki >> Kd >> dt;
  PID obj(Kp, Ki, Kd, dt);
  double target, actual;
  cout << "Enter actual and target velocity\n";
  cin >> target >> actual;
  obj.computeVel(actual, target);
  return 0;
}
