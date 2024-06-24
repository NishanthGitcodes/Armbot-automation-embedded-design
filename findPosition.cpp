/*******************************************************************************************
* File Name          : PROG8130Assign1SkeletonV2.c
* Description        : Prog8130 - Assignment 1: Linked Lists (revised June 9, 2022)
*					   This program uses linked lists to store and print a list of words that are
*					   organized by an "index number" assosciated with each word. Each word can
*					   consist of maximum MAX_STRING_LEN-1 characters.
*
* Author:              Nishanth Sagaya Pushparaj
* Date:                31/05/2024
********************************************************************************************/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"


typedef struct Arms{
    int armNumber;
    double lengthOfTheArm;
    double endPointX;
    double endPointY;
    double endPointZ;
    double angleWithXZplane;
    double angleWithXYplane;
    double angleOfAxialTurn;
}Arms ;

Arms** LivePositions;
Arms** targetPositions;

double findX(double lengthOfTheArm,double angleWithAPlane) {
    double radian = (3.141592653589793238462643/180)*angleWithAPlane;
    return (lengthOfTheArm*cos(radian));
}

double findY(double lengthOfTheArm,double angleWithAPlane) {
    double radian = (3.141592653589793238462643/180)*angleWithAPlane;
    return (lengthOfTheArm*sin(radian));
}

double consolidateAngleWithXZplane(double angleWithXZPlane, Arms* Arm){
    return angleWithXZPlane;
}

double consolidateAngleWithXYplane(double angleWithXYplane, Arms* Arm){

}

double consolidateAngleOfAxialTurn(double angleOfAxialTurn, Arms* Arm){

}

double consolidatePositionOfX(Arms* Arm){

}

double consolidatePositionOfY(Arms* Arm){

}

double consolidatePositionOfY(Arms* Arm){

}

void initArmStructs(noOfArms) {

// Allocate memory for the array of pointers
LivePositions = (Arms**)malloc(noOfArms * sizeof(Arms*));
targetPositions = (Arms**)malloc(noOfArms * sizeof(Arms*));
    
if (LivePositions == NULL || targetPositions == NULL) {
    printf("Memory allocation failed for LivePositions or targetPositions arrays\n");
        return 1;
    }

// Allocate memory for each element in the LivePositions array
for (int i = 0; i < noOfArms; ++i) {
    LivePositions[i] = (Arms*)malloc(sizeof(Arms));
    if (LivePositions[i] == NULL) {
            printf("Memory allocation failed for LivePositions[%d]\n", i);
            return 1;
        }
    }

// Allocate memory for each element in the targetPositions array
for (int i = 0; i < noOfArms; ++i) {
    targetPositions[i] = (Arms*)malloc(sizeof(Arms));
    if (targetPositions[i] == NULL) {
            printf("Memory allocation failed for targetpositions[%d]\n", i);
            return 1;
        }
    }
}

void setVerticalSwingAxisPositions(Arms* Arm, double angleWithXZplane, double lengthOfTheArm) {
    Arm->lengthOfTheArm = lengthOfTheArm;
    Arm->angleWithXZplane = consolidateAngleWithXZplane(angleWithXZplane, Arm);
    Arm->endPointX = consolidatePositionOfX();
    Arm->endPointY = consolidatePositionOfY();
}

void setHorizontalSwingAxisPositions(Arms* Arm, double angleWithXYplane) {
    Arm->angleWithXYplane = consolidateAngleWithXYplane(angleWithXYplane, Arm);
    Arm->endPointX = consolidatePositionOfX();
    Arm->endPointZ = consolidatePositionOfZ();
}

void setAxialTurnPositions(Arms* Arm, double angleOfAxialTurn) {
    Arm->angleWithXYplane = consolidateAngleOfAxialTurn(angleOfAxialTurn, Arm);
    Arm->endPointY = consolidatePositionOfY();
    Arm->endPointZ = consolidatePositionOfZ();
}

void configLivePosition(int armNumber, double angleWithXZplane, double angleWithXYplane, double angleOfAxialTurn, double lengthOfTheArm){
    Arms* Arm = LivePositions[armNumber-1];
    Arm->armNumber=armNumber;
    setVerticalSwingAxisPositions(Arm, angleWithXZplane, lengthOfTheArm);
    setHorizontalSwingAxisPositions(Arm, angleWithXYplane);
    setAxialTurnPositions(Arm, angleOfAxialTurn);
}