/* 
#Tipos de datos simples
"""Documentación
        Author: <Ortiz Bravo Oscar>
        date: <15/02/2023>
        Description: Descripción de los tipos de datos en python
        Param: [numero] [tipo]
*/ 
#include<stdio.h>
int main (){
	
	// Esto es una variable llamada type
	char type;
	
	printf("\nTipos de datos\n\n");
//Se solicita la opcion a realizar de las opciones que guarda el programa de datos y se guarda en type
        printf("a)Int\n");
        printf("b)Float\n");
        printf("c)Complex\n");
        printf("d)String\n");
        printf("e)Bytes\n");
        
        scanf("%c",&type);
//Se registra las opciones que va a tener el programa
switch (type) {
              case 'a':
		      //Se imprime la descripcion del tipo entero
                    printf("\n Int es un tipo de dato numérico que abarca el conjunto de números enteros ");
        			printf("\n Por ejemplo: 1,2,3,4,5");
                        break;
				case 'b':
		      //Se imprime la descripcion del tipo float
                    printf("\n Float es un tipo de dato numérico que abarca el conjunto de números flotantes ");
      				  printf("\n Por ejemplo: 1.2, 2.5, 3.9, 4.8, 5.0");
                        break;

				case 'c':
		      //Se imprime la descripcion del tipo complex
                    printf("\n Un número con parte real y uno con parte imaginaria");
       				 printf("\n Por ejemplo: 1j ");
                        break;

				case 'd':
		      //Se imprime la descripcion del tipo srting
                    printf("\n Es un conjunto de caracteres ");
      				  printf("\n Por ejemplo: ejemplo ");
                        break;

				case 'e':
		      //Se imprime la descripcion del tipo byte
                    printf("\n Cadenas de texto codificadas como pata de bits inmutable ");
        			printf("\n Por ejemplo: + b'\xcf\x84o\xcf\x81\xce\xbdo\xcf\x82'.decode('utf-16')");
                        break;
                        
                default:
                	printf("\n Opción invalida");
                }


	return 0;
}
