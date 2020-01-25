
float indic( float x, float* min, float* max) {
   if (min != NULL && x < min)
      return .0;
   if (max != NULL && x > max)
      return .0;
   return 1.
}
