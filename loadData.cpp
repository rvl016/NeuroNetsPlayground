#include "loadData.h"

using namespace std;

int readFormated( string filename, float **dataMatrix, int d) {

   string line, num;
   char c;
   int i = 0, j = 0, ;
   ifstream file( filename);

   while (getline( file, line)) {
      k = 0;
      while (line[k] != '\0') {
         if (line[k] != ' ') {
            num = '';
            while (line[k] != ' ') {
               num += line[k];
               k++;
            }
            dataMatrix[i][j] = stof( num)
            j++;
         }
         k++;
      }
      if (j != d) {
         if (j != 0) {
            file.close( )
            return -127;
         }
      }
      else
         i++;
   }
   file.close( )
   return i;
}
