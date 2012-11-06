#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     IRSensor,       sensorI2CCustom)
#pragma config(Motor,  mtr_S1_C1_1,     motorA,        tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_2,     motorB,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motorC,        tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     motorE,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorF,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C4_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C4_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


#include "JoystickDriver.c"	 //Include file to "handle" the Bluetooth messages.
#include "drivers/HTIRS2-driver.h"


void initializeRobot() {
    
	return;
}

void stopRobot() {
	motor[motorA] = 0;
	motor[motorB] = 0;
	motor[motorC] = 0;
	motor[motorD] = 0;
}

void moveForward(int duration) {
	motor[motorA] = 50;
	motor[motorD] = 50;
	wait10Msec(duration / 0.01);
	stopRobot();
}

void moveBackward(int duration) {
	motor[motorA] = -50;
	motor[motorD] = -50;
	wait10Msec(duration / 0.01);
	stopRobot();
}

void moveSideways(int duration) {
	motor[motorB] = 50;
	motor[motorC] = 50;
	wait10Msec(duration / 0.01);
	stopRobot();
}

void moveSidewaysReverse(int duration) {
	motor[motorB] = -50;
	motor[motorC] = -50;
	wait10Msec(duration / 0.01);
	stopRobot();
}

void turnLeft() {
	motor[motorB] = 50;
	motor[motorD] = 50;
	motor[motorC] = -50;
	motor[motorA] = -50;
	wait10Msec(1/0.01);
}

void turnRight() {
	motor[motorB] = -50;
	motor[motorD] = -50;
	motor[motorC] = 50;
	motor[motorA] = 50;
	wait10Msec(1/0.01);
}

task main() {
	moveForward(1);
	moveSideways(1);
	moveSidewaysReverse(1);
	moveBackward(1);
	turnRight();
	turnLeft();
	//initializeRobot();
	//int _dirAC = 0;
	//int acS1, acS2, acS3, acS4, acS5 = 0;
    
	//tHTIRS2DSPMode _mode = DSP_1200;
    
	//int maxSignal;
	//int directional_value;
    
	//if (HTIRS2setDSPMode(IRSensor, _mode) == 0 ) {
	//	nxtDisplayCenteredTextLine(0, "ERROR!");
	//	wait10Msec(300);
	//	} else {
	//	nxtDisplayCenteredTextLine(0, "Good to go!");
	//}
    
	//// waitForStart(); // Wait for the beginning of autonomous phase.
    
	//while (true) {
	//	_dirAC = HTIRS2readACDir(IRSensor);
	//	if (_dirAC < 0) {
	//		nxtDisplayCenteredTextLine(0, "Oopsie-daisies");
	//		break;
	//		} else {
	//		nxtDisplayCenteredTextLine(0, "Fine and dandy, so - far");
	//	}
    
	//	if (!HTIRS2readAllACStrength(IRSensor, acS1, acS2, acS3, acS4, acS5 )) {
	//		writeDebugStreamLine("Error while reading signal!");
	//		break;
	//		} else {
	//			maxSignal = (acS1 > acS2) ? acS1 : acS2;
	//			maxSignal = (maxSignal > acS3) ? maxSignal : acS3;
	//			maxSignal = (maxSignal > acS4) ? maxSignal : acS4;
	//			maxSignal = (maxSignal > acS5) ? maxSignal : acS5;
	//			nxtDisplayCenteredTextLine(0, "%d", maxSignal);
	//			// A value of 2 or 3 is to the left of the mottor, a value of 8 or 9 is to the right
	//			nxtDisplayCenteredTextLine(1, "%d", _dirAC);
	//			if (_dirAC == 2 || _dirAC == 3) {
	//				moveSidewaysReverse(1);
	//			}
	//			if (_dirAC == 8 || _dirAC == 9) {
	//				moveSideways(1);
	//			}
	//			wait10Msec(3);
	//	}
	//}
}
