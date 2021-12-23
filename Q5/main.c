/*Considerando 
typedef{
float x,y,z;}vetor; 
para representar um vetor R^3,calcule a soma de dois vetores.*/

#include <stdio.h>

typedef  struct {
  float x;
  float y;
  float z;
}vetor;

int main(void) {
  vetor arr;
  float vetor2[3]={55.6, 77.7, 88.8};
  float vetor3[3];
  int i;
  arr.x=10.5;
  arr.y=155.5;
  arr.z=1.5;
  
  for(i=0; i<1;i++){
    vetor3[i] = vetor2[i]+arr.x;
    vetor3[i+1] = vetor2[i+1]+arr.y;
    vetor3[i+2] = vetor2[i+2]+arr.z;
  }
  for(i=0; i<3;i++){
    printf("%.1f\n", vetor3[i]);
  }

}
