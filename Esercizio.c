#include <stdio.h>
#include <string.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = {'\0'};
	menu ();

	do{
	scanf ("%c", &scelta);

	switch (scelta)
	{
		case 'A':
				moltiplica();
				break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
        case 'D':
        		return 0;
	}
}	if(	scelta != 'A' || scelta != 'B' || scelta != 'C' || scelta != 'D');{
	printf ("Inserisci i giusti caratteri\n");
	scanf ("%c", &scelta);}
}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Uscita\n");

}


void moltiplica ()
{
	double  a,b,prodotto = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%lf", &a);
	scanf ("%lf", &b);

	prodotto = a * b;

	printf ("Il prodotto tra %lf e %lf e': %lf", a,b,prodotto);
	printf ("\nPer moltiplicazione premi A\nPer divisione premi B\nPer inserire una stringa premi C\nPer uscire premi D\n");
}


void dividi ()
{
        double  a,b,divisione = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%lf", &a);
		printf ("Inserisci il denumeratore:");
        scanf ("%lf", &b);

        divisione = a / b;

        printf ("La divisione tra %lf e %lf e': %lf", a,b,divisione);
        printf ("\nPer moltiplicazione premi A\nPer divisione premi B\nPer inserire una stringa premi C\nPer uscire premi D\n");
}





void ins_string () 
{
			char stringa[10];
        	printf ("Inserisci la stringa:");
        	scanf ("%s", &stringa);
        	printf ("Hai inserito %s", &stringa);
			printf ("\nPer moltiplicazione premi A\nPer divisione premi B\nPer inserire una stringa premi C\nPer uscire premi D\n");
}

