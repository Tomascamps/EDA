//EDA
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
//1
typedef struct complejo1 complex;
struct complejo1{
  int real;
  int **imaginario;
  }
 complex c1;
 //2
 typedef struct alumno alum;
 struct alumno{
  char *nom;
  unsigned int cuenta;
  unsigned int semestre;
  char *carrera;
  }
  //3
  typedef struct nodo nodo;
  strcut nodo{
    int data;
    node *sig;}
  nodo n1,n2; 
    n1.sig=n2;
    //4
  typedef struct matriz matriz;
  struct matriz{
    int ren;
    int col;
    float **datos;
    }
   matriz m;
   m.datos=(float**)malloc(sizeof(float*)*ren);
   //5
   int **arre;
    arre=(int**)malloc(sizeof(int*));
   //6
   nodo n3,*t;
    t=(nodo*)malloc(sizeof(nodo));
    t=n3;
  //8
  complex c2;*c;
  c=(complex*)malloc(sizeof(complex));
  c=c2; 
  
  
  }
  
   
   
 
    
  
  

  
