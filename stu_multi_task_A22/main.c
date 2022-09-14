/*******************************************************************************
   	FileName:     main.c
	
 
	Description: 
      
 * * REVISION HISTORY:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author        	Date      	Version     Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Serge Hould      2022-09-14  V1.0        First version of source file
 *
 * 
 * 	Student must complete the revision history every week.
 * 		
 *******************************************************************************/

#include <xc.h>
#include <stdio.h>
#include "console.h"

   
int main( void){
    uart1_init();
    set_stdio(C_UART1);
    printf("\n\rMultiTask \n");

    while(1){
    }

}// main

