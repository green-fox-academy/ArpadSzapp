#include "car.h"


Car::Car(int gasAmount, int capacity) {
  _gasAmount = gasAmount;
  _capacity = capacity;
}

  void Car::fill() {

        _gasAmount ++;
}

bool Car::isFull() {

  return _capacity==_gasAmount;


}

void Car::set_gasAmount(int _gasAmount) {
  Car::_gasAmount = _gasAmount;
}
void Car::set_capacity(int _capacity) {
  Car::_capacity = _capacity;
}

int Car::get_gasAmount() const {
  return _gasAmount;
}

int Car::get_capacity() const {
  return _capacity;
}