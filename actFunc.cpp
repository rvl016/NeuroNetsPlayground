#if !defined ACTFUNC_H_
   #include "actFunc.h"
#endif

#if !defined CMATH_H_
   #include "actFunc.h"
#endif

using namespace Neuron::Activation;

Activation

bool sigmoid( int order, float x, float *y) {
   if (order == 0)
      y = 1 / (1 + exp( -x));
   else if (order == 1) 
      y = exp( -x) / (1 + exp( -x))^2;
   else 
      return false;
   return true;
}

bool relu( int order, float x, float *y) {
   if (order == 0)
      y = MAX( x, 0);
   else if (order == 1) 
      if (x > 0) 
         y = 1;
      else if (x < 0) 
         y = 0;
      else 
         y = .5;
   else 
      return false;
   return true;
}

bool ident( int order, float x, float *y) {
   if (order == 0)
      y = x;
   else if (order == 1) 
      y = 1;
   else 
      return false;
   return true;
}

bool tanh( int order, float x, float *y) {
   if (order == 0)
      y = (exp( 2*x) - 1) / (exp( 2*x) + 1);                                   
   else if (order == 1) 
      y = 2*exp( 2*x) / (exp( 2*x) + 1)^2
   else 
      return false;
   return true;
}
