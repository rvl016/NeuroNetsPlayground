#if !defined "actFunc"
   #include "actFunc"
#endif

#if !defined MAX_LAYERS
   #define MAX_LAYERS 10
#endif

#define IDLE 0
#define READY 1
#define BUSY 2

#define MAX( a, b) ((a) > (b) ? (a) : (b))


class Neuron 
{

   public :

      static int count = 0, maxID = 0;
      int id, state = IDLE, activFunc;
      float activation, threshold, input;
      Layer *layer;


      Neuron( activFunc);
      bool grow( Neuron neuron, float w);
      Neuron replicate( );
      Neuron die( );
      bool activate( this->activFunc, this->input);

   private :

      friend class Activation; 
      bool threshFunc( );

};

#define OUTPUT_LAYER 1
#define INPUT_LAYER 0
#define HIDDEN_LAYER 2

class Layer
{

   public :

      static int count = 0, maxID = 0;
      int type, outFunc, neurons;
      Neuron **neuron;

   private :

      int softMax( Neuron **neuron, int neuron);
      int max( Neuron **act, int neuron);

};
