// Copyright 2018 Lalykin Oleg

#ifndef MODULES_ELASTICITY_OF_DEMAND_INCLUDE_ELASTICITY_OF_DEMAND_H_
#define MODULES_ELASTICITY_OF_DEMAND_INCLUDE_ELASTICITY_OF_DEMAND_H_

#include <string>
class Elasticity {
public:
    Elasticity(double Q1, double Q2, double P1, double P2);
    
    
    double PriceElasticity(double Q1,double Q2,double P1,double P2);//����������� ������� ������������ ������
    double IncomeElasticity(double Q1, double Q2, double Y1, double Y2);//����������� ������������ ������ �� ������
    double CrossElasticity(double Q1X, double Q2X, double P1Y, double P2Y);//����������� ������������ ������������
    double coeff;
    
    std::string PriceAnswer();
    std::string IncomeAnswer();
    std::string CrossAnswer();
    
    double GetQ1();
    double GetQ2();
    double GetP1();
    double GetP2();
    
    void SetQ1(const double _Q1);
    void SetQ2(const double _Q2);
    void SetP1(const double _P1);
    void SetP2(const double _P2);
private:
    
     double Q1; 
     double Q2; 
     double P1; 
     double P2;
};

#endif  //  MODULES_ELASTICITY_OF_DEMAND_INCLUDE_ELASTICITY_OF_DEMAND_H_
