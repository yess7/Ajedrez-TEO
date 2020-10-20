// C program to create a chess board 
#include <conio.h> 
#include <dos.h> 
#include <graphics.h> 
#include <stdio.h> 
  
// Driver Code 
void main() 
{ 
    // Auto detection 
    int gr = DETECT, gm; 
    int r, c, x = 30, y = 30, black = 0; 
    
// Inicializar el modo de gr�ficos pasando
    // tres argumentos para la funci�n initgraph
  
    // & gdriver es la direcci�n de gdriver
    // variable, & gmode es la direcci�n de
    // gmode y "C: \\ Turboc3 \\ BGI" es el
    // ruta del directorio donde se almacenan los archivos BGI
 
  
   
    initgraph(&gr, &gm, "C:\\TURBOC3\\BGI"); 
  
      // Itera en 8 filas
    for (r = 0; r < 8; r++) { 
  
        // intera 8 columnas
        for (c = 1; c <= 8; c++) { 
  
            
               // Si el bloque actual es para
            // color como negro
            if (black == 0) { 
  
              
                // establecer el siguiente color como blanco
                setcolor(WHITE); 
  
                // establece el relleno actual
                // patr�n y color de relleno
                // para cajas negras 
                setfillstyle(SOLID_FILL, BLACK); 
  
               
                // creando rect�ngulo
                // con largo y ancho
                // con talla 30
                rectangle(x, y, x + 30, y + 30); 
  
               
// Llenar un �rea cerrada
                floodfill(x + 1, y + 1, WHITE); 
  
              
// Establecer negro en verdadero
                black = 1; 
            } 
  
            
// Si el bloque actual es para
            // color como blanco
            else { 
                setcolor(WHITE); 
  
                
// establece el relleno actual
                // patr�n y color de relleno
                // para cajas blancas
                setfillstyle(SOLID_FILL, WHITE); 
  
               // creando rect�ngulo
                // con largo y ancho
                // con talla 30
                rectangle(x, y, x + 30, y + 30); 
  
                
// Llenar un �rea cerrada 
                floodfill(x + 1, y + 1, WHITE); 
  
                // Establecer negro a falso
                black = 0; 
            } 
  
           
// Incremento para la siguiente fila
            x = x + 30; 
  
           
// funci�n de retardo en la biblioteca
            // "dos.h" para mantener el
            // funcionar por alg�n tiempo
            delay(30); 
        } 
        if (black == 0) 
            black = 1; 
        else
            black = 0; 
  
        delay(30); 
        x = 30; 
        y = 30 + y; 
    } 
  
    
// getch se usa para mantener la pantalla de salida
    // y espere hasta que el usuario d� cualquier tipo de
    // entrada en turbo c
    getch(); 
  
   
// la funci�n de cerrar gr�fico se usa para salir
    // desde la pantalla gr�fica
    closegraph(); 
} 
