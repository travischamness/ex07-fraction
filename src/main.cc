//
// Created by travis on 11/27/18.
//

#include"fraction.h"
#include<iostream>
#include <fraction.h>


using edu::vcccd::vc::csv13::Fraction;
int main(int argc, char *argv[]){

    Fraction fract(0,0);
    fract.setNumerator(70);
    cout << fract.getNumerator() << endl;
    fract.setDenominator(21);
    cout << fract.getDenominator() << endl;

    //cout << fract.getRealValue() << endl;

    fract.output();
    return 0;
}