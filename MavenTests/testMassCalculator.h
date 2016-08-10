#ifndef TESTMASSCALCULATOR_H
#define TESTMASSCALCULATOR_H
#include <iostream>
#include <QtTest>
#include <string>
#include <sstream>
#include "common.h"

class TestMassCalculator : public QObject {
    Q_OBJECT

    public:
        TestMassCalculator();
    private:

    private slots:
        // functions executed by QtTest before and after test suite
        void initTestCase();
        void cleanupTestCase();

        // functions executed by QtTest before and after each test
        void init();
        void cleanup();

        // test functions - all functions prefixed with "test" will be ran as tests
        // this is automatically detected thanks to Qt's meta-information about QObjects
        void testGetComposition();
};

#endif // TESTMASSCALCULATOR_H