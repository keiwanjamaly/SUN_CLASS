#ifndef GAUGE_H
#define GAUGE_H
#include <iostream>

class SU2_mat
{
private:
    double c0, c1, c2, c3;

public:
    SU2_mat(double c0, double c1, double c2, double c3);

    SU2_mat operator+(SU2_mat const &obj);
    SU2_mat operator-(SU2_mat const &obj);
    SU2_mat operator*(SU2_mat const &obj);

    // friend SU2_mat operator*(SU2_mat const &obj, double const &i);
    // friend SU2_mat operator*(double const &i, SU2_mat const &obj);

    // friend SU2_mat operator/(SU2_mat const &obj, double const &i);
    // friend SU2_mat operator/(double const &i, SU2_mat const &obj);

    SU2_mat dag();

    double trace();
};

#endif