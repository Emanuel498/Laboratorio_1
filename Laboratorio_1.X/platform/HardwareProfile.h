#ifndef _HARDWARE_PROFILE_H   /* Guard against multiple inclusion */
#define _HARDWARE_PROFILE_H
#define LEDA_SetDigitalOutput() (TRISAbits.TRISA7 = 0)
#define LEDB_SetDigitalOutput() (TRISBbits.TRISB14 = 0)

#define LEDA_SetHigh() (LATAbits.LATA7 = 1)// Pone en nivel alto // Mirar lo del LATX en datasheet pag.114
#define LEDA_SetLow()  (LATAbits.LATA7 = 0)// Pone en nivel bajo
#define LEDA_Toggle()  (LATAbits.LATA7 = 1)// Invierte de nivel

#define LEDB_SetHigh() (LATBbits.LATB14 = 1)// Pone en nivel alto
#define LEDB_SetLow()  (LATBbits.LATB14 = 0)// Pone en nivel bajo
#define LEDB_Toggle()  (LATBbits.LATB14 = 1)// Invierte de nivel

#endif