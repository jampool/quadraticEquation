#include "quadratic.h"
#include <math.h>
#include <iostream>

quadratic::quadratic()
{
    //ctor
}

quadratic::~quadratic()
{
    //dtor
}



int quadratic :: assigncoefficient()
{
    int x=0;
    std::cout<< "Please enter the Value for A: ";
    std::cin >> A ;
        std::cout<< "Please enter the Value for B: ";
    std::cin >> B ;
    std:: cout<< "Please enter the Value for C: ";
    std:: cin>> C ;
    std::cout<< "The equation is:" << "y = " << A << "x^2+"<< B<< "x+"<< C <<std::endl;

    return A,B,C;
}

void quadratic:: valuex(int x)
{
    int y=0;
    y= (A*(x*x)+ (B*x) +C) ;
    std::cout<< "Value of y is : " << y <<std:: endl;

}

int quadratic:: solveroot (int Determinant)
{

    int D=0;
    D=Determinant;



    D=(B*B)-((4*A)*C);

    double root1 = (-B+ sqrt(D))/(2*A);
    double root2 = (-B- sqrt(D))/(2*A);

    if (A==0)
        {
            std::cout << "Roots cannot be solved, Result is an imaginary number" <<std::endl;
        }




    else if (D==0)
        {
            if (A==0)
                {
                    std::cout <<"Roots cannot be solved, Result is an imaginary number" <<std::endl;
                }

            else{
                    std::cout<< "Number of roots of the quadratic equation is 1" <<std::endl;
                    std::cout<< "Root is: " <<root1 <<std::endl;
                    return root1; // since root1= root2
                }
        }

    else if (D>0)
        {
            std::cout<< "Number of roots of the quadratic equation is 2" <<std::endl;
                 std::cout<< "Roots are: " <<root1 << " , "<<root2 <<std::endl;
                        return root1;
                        return root2;
        }
    else if (D<0)
        {
            std::cout<< "Number of roots of the quadratic equation is 0" <<std::endl;
            std:: cout<< "There is no root"<<std::endl;
        }
    return D;
}

void quadratic :: solveextremum ()
{
    double extrema_x;
    double  extrema_y;
    if (A==0)
    {
        std::cout<< "The equation has no extremum" << std::endl;
    }


    else if (A<0)
    {
        std::cout<< "The equation is in its maximum extremum" << std:: endl;
        extrema_x= -B/(2*A);
        extrema_y= -((B*B)- (4*A*C)) / (4*A);

        std::cout<< "The extrema for the coordinates (x,y) "<< "("<< extrema_x << " , " <<extrema_y << ")" <<std::endl;

    }

    else if (A>0)
    {
        std::cout<< "The equation is in its minimum extremum" << std:: endl;
        extrema_x=-B/(2*A);
        extrema_y= -((B*B)- (4*A*C)) / (4*A);

        std::cout<< "The extrema for coordinates (x,y) is: "<< "("<< extrema_x << " , " << extrema_y << ")" <<std::endl;

    }




}

