/*********************************************
 	* Universidad Sergio Arboleda
	* Fecha: 01 de marzo de 2022
	* Autora: Juan Jurado
	* Materia: Bryan Garavito
	* Tema: Implementación Posix (Library)
	* interfaz del modulo para multiplicar 2 matrices sin variables globales.
	* Se requiere que el diseño sea modular.
	* El modulo implementará los hilos que harán el cálculo del producto
**********************************************/


#ifndef MODULE_C_H_INCLUDE
#define MODULE_C_H_INCLUDE

typedef struct argsThreads{
    int numThreads;
    int matrixSize;
    double **matrixA;
    double **matrixB;
    double **matrixR;
    int idThread;
} strucHilos;

void sampleStart();
void sampleEnd();
double randNumber();
void initMatrix(int SZ, double *Ma, double *Mb, double *Mr);
void printMatrix(int SZ, double *M);
void MM1c(int size, double *Ma, double *Mb, double *Mr);
void MM1f(int size, double *Ma, double *Mb, double *Mr);
double ** memReserve(int size);
void initMatrix_DoublePointers(double **MA, double **MB, double **MC, int size);
void printMatrix_DoublePointers(double **M, int size);
void printTransposed(int size, double *M);
void *multMM(void *arg);
void MM1cOMP(int hilos, int size, double *Ma, double *Mb, double *Mr);
void MM1fOMP(int hilos, int size, double *Ma, double *Mb, double *Mr);

#endif
