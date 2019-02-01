#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

class Car {
 public:
  Car(int _gasAmount, int _capacity);

    void fill();
    bool isFull();

    int get_gasAmount() const;
    void set_gasAmount(int _gasAmount);

    int get_capacity() const;
    void set_capacity(int _capacity);

 private:
    int _gasAmount;
    int _capacity;


};


#endif //PETROLSTATION_CAR_H
