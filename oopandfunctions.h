#pragma once

class Fraction {
private:
    int _numerator;
    int _denominator;

    int FindCommonDivisor(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void Simplify() {
        int divisor = FindCommonDivisor(this->_numerator, this->_denominator);
        this->_numerator /= divisor;
        this->_denominator /= divisor;
        if (this->_denominator < 0) {
            this->_numerator = -this->_numerator;
            this->_denominator = -this->_denominator;
        }
    }

public:
    Fraction(int num, int den) {
        if (den == 0) {
            cout << "Error: Denominator cannot be zero!" << endl;
            this->_denominator = 1;
        }
        else {
            this->_numerator = num;
            this->_denominator = den;
        }
        this->Simplify();
    }

    Fraction Multiply(const Fraction& other) {
        int num = this->_numerator * other._numerator;
        int den = this->_denominator * other._denominator;
        Fraction result(num, den);
        return result;
    }

    Fraction Add(const Fraction& other) {
        int num = this->_numerator * other._denominator + other._numerator * this->_denominator;
        int den = this->_denominator * other._denominator;
        Fraction result(num, den);
        return result;
    }

    Fraction Minus(const Fraction& other) {
        int num = this->_numerator * other._denominator - other._numerator * this->_denominator;
        int den = this->_denominator * other._denominator;
        Fraction result(num, den);
        return result;
    }

    Fraction Divide(const Fraction& other) {
        if (other._numerator == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
            return Fraction(0, 1);
        }
        int num = this->_numerator * other._denominator;
        int den = this->_denominator * other._numerator;
        Fraction result(num, den);
        return result;
    }

    bool IsZero() {
        return this->_numerator == 0;
    }

    void Print() {
        cout << this->_numerator << "/" << this->_denominator << endl;
    }
};