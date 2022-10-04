/**
 * @copyright Copyright (c) 2022
 *
 * @file pid.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @author Sharmitha Ganesan(sganesa3@terpmail.umd.edu)
 * @version 0.1
 * @date 2022-09-29
 *
 * @brief ENPM808X, Week 5, Test Driven Development
 *
 * @section DESCRIPTION
 *
 * Source file for PID class. The class is an implementation of a PID
 * controller. Given the proportional, integral, and derivative gains along with
 * the sampling rate, it supports computing the new velocity to achieve the
 * specified target velocity.
 *
 */

#include "../include/pid.hpp"

/**
 * @brief Construct a new PID::PID object
 *
 * @param Kp Propotional gain of the PID controller
 * @param Ki Integral gain of the PID controller
 * @param Kd Derivative gain of the PID controller
 * @param samplingRate Sampling rate of the PID controller
 */
PID::PID(const double &Kp, const double &Ki, const double &Kd,
         const double &samplingRate) {
  this->Kp_ = Kp;
  this->Ki_ = Ki;
  this->Kd_ = Kd;
  this->samplingRate_ = samplingRate;
  prevError_ = 0;
  totalError_ = 0;
}

/**
 * @brief Destroy the PID::PID object
 *
 */
PID::~PID() {}

/**
 * @brief Computes new instantaneous velocity given the actual velocity and
 * target velocity using PID parameters
 *
 * @param actualVel Current measured velocity of the system
 * @param targetVel Target velocity to be achieved by the system
 *
 * @return double New velocity to reach the desired target velocity
 */
double PID::computeVel(double actualVel, double targetVel) {
  double computed, difference;
  difference = targetVel - actualVel;
  totalError_ += difference * samplingRate_;
  computed = actualVel + (Kp_ * difference) + (Ki_ * totalError_) +
             (Kd_ * (difference - prevError_) / samplingRate_);

  cout << "New Velocity " << computed << "\n";
  return computed;
}

/**
 * @brief Returns the sampling rate of the PID controller
 *
 * @return double Sampling rate of the PID controller
 */
double PID::getSamplingRate() {
  // This method stubs returns a constant 0
  return samplingRate_;
}
