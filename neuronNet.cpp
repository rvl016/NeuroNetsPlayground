
#include <iostream>
#define DEBUG 1
#define MAX_LAYERS 10


#define BUSY 0
#define READY 1
#define DEAD 2


bool Neuron::getInput( Neuron neuron) {
   if (! neuron.ready) 
      return false;
   
}

bool Neuron::activate( Neuron neuron) {

Neuron::Neuron( int layer, int activFunc) {
   this->layer = layer;
   this->id = id++;
   this->func = Activation( activFunc);
}
