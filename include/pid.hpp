/**
 * @copyright Copyright (c) 2022
 *
 * @file pid.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-09-29
 *
 * @brief ENPM808X, Week 4, Test Driven Development
 *
 * @section DESCRIPTION
 *
 * Header file for PID class
 *
 */

#pragma once

#ifndef PID_CONTROLLER_INCLUDE_PID_HPP_
#define PID_CONTROLLER_INCLUDE_PID_HPP_

#include <iostream>

class PID {
 private:
  double Kp_;           // Propotional gain of the PID controller
  double Ki_;           // Integral gain of the PID controller
  double Kd_;           // Derivative gain of the PID controller
  double samplingRate;  // Sampling rate of the PID controller
  double prevError;     // Previous error to compute derivative component
  double totalError;    // Total error till current timestep to compute integral
                        // component

 public:
  PID(const double& Kp_, const double& Ki_, const double& Kd_,
      const double& samplingRate);  // Default constructor
  ~PID();                           // Default destructor

  double computeVel(
      double actualVel,
      double targetVel);  // Method to compute new velocity using PID controller
};

#endif  // PID_CONTROLLER_INCLUDE_PID_HPP_
