# PID Controller

[![Build Status](https://app.travis-ci.com/sharmithag/PID_Controller.svg?branch=master)](https://app.travis-ci.com/sharmithag/PID_Controller)
[![Coverage Status](https://coveralls.io/repos/github/sharmithag/PID_Controller/badge.svg?branch=master)](https://coveralls.io/github/sharmithag/PID_Controller?branch=master)
---

## Authors
Part 1 - Programmer: Tanuj Thakkar (tanuj@umd.edu)

Part 2 - Driver: Sharmitha Ganesan(sganesa3@terpmail.umd.edu) , Navigator: Aman Kumar Sharma(ahrm007@umd.edu)

## Overview
Project on PID Controller based on Test Driven Development (TDD) for ENPM808X at the University of Maryland - College Park.

## Build and Running Instructions
```
    git clone https://github.com/tanujthakkar/PID_Controller.git
    mkdir build && cd build
    cmake .. 
    make

    <!-- Run app -->
    ./app/pid

    <!-- Run tests -->
    ./test/cpp-test
```

## Building for code coverage 
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

##Run and save cpplint and cppcheck
```
cpplint $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/") $( find . -name *.hpp | grep -vE -e "^./build/" -e "^./vendor/") > cpplint.txt

cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" ) > cppcheck.txt
```
## Discussion Notes

Implementation: Matched with original design class.

Additional test case: The sampling rate should be always greater than zero.

To-Do : 
Implentation of test that gives final average velocity.
Cap the PID velocity with max and min values.

