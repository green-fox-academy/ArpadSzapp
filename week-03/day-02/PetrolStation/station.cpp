#include "station.h"
#include "car.h"

station::station(){

  _gasAmount = 100;

};

void station::fill(Car car) {

  while( !car.isFull() ) {
    car.set_gasAmount(car.get_gasAmount() + 1);

    _gasAmount--;
  }

}

