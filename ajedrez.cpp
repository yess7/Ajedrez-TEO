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
    
// Inicializar el modo de gráficos pasando
    // tres argumentos para la función initgraph
  
    // & gdriver es la dirección de gdriver
    // variable, & gmode es la dirección de
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
                // patrón y color de relleno
                // para cajas negras 
                setfillstyle(SOLID_FILL, BLACK); 
  
               
                // creando rectángulo
                // con largo y ancho
                // con talla 30
                rectangle(x, y, x + 30, y + 30); 
  
               
// Llenar un área cerrada
                floodfill(x + 1, y + 1, WHITE); 
  
              
// Establecer negro en verdadero
                black = 1; 
            } 
  
            
// Si el bloque actual es para
            // color como blanco
            else { 
                setcolor(WHITE); 
  
                
// establece el relleno actual
                // patrón y color de relleno
                // para cajas blancas
                setfillstyle(SOLID_FILL, WHITE); 
  
               // creando rectángulo
                // con largo y ancho
                // con talla 30
                rectangle(x, y, x + 30, y + 30); 
  
                
// Llenar un área cerrada 
                floodfill(x + 1, y + 1, WHITE); 
  
                // Establecer negro a falso
                black = 0; 
            } 
  
           
// Incremento para la siguiente fila
            x = x + 30; 
  
           
// función de retardo en la biblioteca
            // "dos.h" para mantener el
            // funcionar por algún tiempo
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
    // y espere hasta que el usuario dé cualquier tipo de
    // entrada en turbo c
    getch(); 
  
   
// la función de cerrar gráfico se usa para salir
    // desde la pantalla gráfica
    closegraph(); 
} 
