#ifndef _HARDWARE_PROFILE_H
#define _HARDWARE_PROFILE_H
#define LEDA_SetDigitalOutput() (TRISAbits.TRISA7 = 0) // Seteo de led como salida.
#define LEDB_SetDigitalOutput() (TRISBbits.TRISB14 = 0) // Seteo de led como salida.

#define LEDA_SetHigh() (LATAbits.LATA7 = 1)// Pone en nivel alto
#define LEDA_SetLow()  (LATAbits.LATA7 = 0)// Pone en nivel bajo
#define LEDA_Toggle()  (LATAbits.LATA7 = !LATAbits.LATA7)// Invierte de nivel

#define LEDB_SetHigh() (LATBbits.LATB14 = 1)// Pone en nivel alto
#define LEDB_SetLow()  (LATBbits.LATB14 = 0)// Pone en nivel bajo
#define LEDB_Toggle()  (LATBbits.LATB14 = !LATBbits.LATB14)// Invierte de nivel

#endif