#include "Polynomial.h"

polynomial::polynomial() {
  coefficient = 0;
  exponent = 1;
  constant = 0;
}

polynomial::polynomial(double exponent, double constant, double coefficient) {
  this->exponent = exponent;
  this->constant = constant;
  this->coefficient = coefficient;
}

polynomial::~polynomial() {
}
