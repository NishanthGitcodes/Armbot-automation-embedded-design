



double findX(double r,double angle){
    double rad = (3.141592653589793238462643/180)*angle;
    return (r*cos(rad));
}

double findY(double r,double angle){
    double rad = (3.141592653589793238462643/180)*angle;
    return (r*sin(rad));
}

typedef struct {
    double endPointX;
    double endPointY;
    double endPointZ;
    double lengthOfTheArm;
    double angleWithXZplane;
    double angleWithXYplane;
    double angleWithXYplane;
    double angleOfAxialTurn;
    
}Arms ;