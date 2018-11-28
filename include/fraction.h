//
// Created by travis on 11/27/18.
//

#ifndef EX07_FRACTION_FRACTIONS_H
#define EX07_FRACTION_FRACTIONS_H
#include<cstdint>
#include<iostream>

using std::cout;
using std::endl;

namespace edu::vcccd::vc::csv13 {
    class Fraction {
    public:
        Fraction(int64_t num, int64_t den) : numerator(num), denominator(den) {}

    public:
        int64_t getNumerator() const { return numerator; }

        int64_t getDenominator() const { return denominator; }

//        double getRealValue() const {
//            if (int64_t denominator = 0){}
//            else {return numerator / denominator;}
//        }

        void setNumerator(int64_t num) { numerator = num; }

        void setDenominator(int64_t den) { denominator = den; }
//Testing for segfault
        void output() const {
            if(denominator == 0 && numerator != 0){cout << "INF" << endl;}
            //cout<< "test0" <<endl;
            else if(numerator == 0 && denominator == 0){ cout << "NAN" << endl;}
            //cout<< "test1" <<endl;
            else if(numerator == 0 && denominator != 0){cout << "0" << endl;}
            //cout<< "test2" <<endl;
            else {
                int64_t n1 = numerator;
                int64_t n2 = denominator;
                while(n1 != n2)
                {
                    if(n1 > n2)
                        n1 -= n2;
                    else
                        n2 -= n1;
                }

               // cout << "HCF = " << n1 << endl;
                cout << numerator/n1 << " / " << denominator/n1 << endl;}
        }

    private:
        int64_t numerator;
        int64_t denominator;
    };
}
#endif //EX07_FRACTION_FRACTIONS_H
