#include "stdio.h"
#include "math.h"

double findX(double lengthOfTheArm,double angleWithAPlane){
    double radian = (3.141592653589793238462643/180)*angleWithAPlane;
    return (lengthOfTheArm*cos(radian));
}

double findY(double lengthOfTheArm,double angleWithAPlane){
    double radian = (3.141592653589793238462643/180)*angleWithAPlane;
    return (lengthOfTheArm*sin(radian));
}

typedef struct {
    double lengthOfTheArm;
    double endPointX;
    double endPointY;
    double endPointZ;
    double angleWithXZplane;
    double angleWithXYplane;
    double angleWithXYplane;
    double angleOfAxialTurn;
}Arms ;

void initArmStructs(noOfArms){
Arms* LivePositions[noOfArms];
Arms* targetPositions[noOfArms];
}

