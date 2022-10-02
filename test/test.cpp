/**
 * @copyright Copyright (c) 2022
 *
 * @file test.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-10-01
 * 
 * @brief ENPM808X, Week 4, Test Driven Development
 * 
 * @section DESCRIPTION
 *
 * This is a test file for PID class.
 *
 * Test Cases:
 * 
 * Case 1:
 * Description: It tests the computeVel method of the PID class. The method is
 * expected to compute the new instantaneous velocity given the actualy velocity and the 
 * target velocity of the system.
 * Expected Result: PASS
 * 
 * Case 2:
 * Description: It tests the getSamplingRate method of the PID class. The method
 * is expected to return the sampling rate of the PID object.
 * Expected Result: PASS
 */

#include <gtest/gtest.h>
#include "pid.hpp"


/**
 * @brief Construct a new TEST object and implement Test Case 1
 * 
 */
TEST(TestPID, testComputeVel) {
  PID pid(1.0, 0.1, 0.3, 1.0);
  EXPECT_EQ(12.0, pid.computeVel(5, 10));
}

/**
 * @brief Construct a new TEST object and implement Test Case 2
 * 
 */
TEST(TestPID, testGetSamplingRate) {
  PID pid(1.0, 0.3, 0.3, 1.0);
  EXPECT_EQ(1.0, pid.getSamplingRate());
}
