
#if !defined NEURON_H_
   #include "neuron.h"
#endif

#define ACTIVE_SIGM 0
#define ACTIVE_TANH 1 
#define ACTIVE_IDEN 2
#define ACTIVE_RELU 3
#define ACTIVE_HTNH 4
#define ACTIVE_SIGN 5

using namespace Neuron;

friend class Activation  
{
   public :
      float output( int order, float x, float *y, int func);
   private :
      // activation functions
      bool sigmoid( int order, float x, float *y);
      bool relu( int order, float x, float *y);
      bool ident( int order, float x, float *y);
      bool tanh( int order, float x, float *y);
};
