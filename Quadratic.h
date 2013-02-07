#ifndef QUADRATIC_H
#define QUADRATIC_H


class quadratic
{
    public:
        quadratic();
        virtual ~quadratic();

    int assigncoefficient();
    void valuex(int x);
    int solveroot (int Determinant );
    void solveextremum ();


    protected:
    private:
       int A,B,C;
};

#endif // QUADRATIC_H
