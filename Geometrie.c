/*
Beschreibung: Geometrie Funktion um Dreieck, Quadrat, Kreis, Wuerfel und Kugel.
 */

#include <stdio.h>
#include <math.h>

#define Pi 3.14
double pythagoras(double a, double b){
double ergebnis=1;
ergebnis= (a*a)+(b*b);   // Ergebnis ist das Quadrat des Hypotenuse.
	if(ergebnis > 0){  // Groesser als 0, weil die Wurzel von 0 existiert nicht.
        	return sqrt(ergebnis);   // Wurzel von Ergebnis.
        }
        else{
        	return 0;
        }
}

double konvertRadius(double c){ // c ist das Quadrat von der Hypotenuse.
	return sqrt ( c / Pi );

}

double kubusVolumen( double c){
	return c*c*c;
}

double kugelVolumen(double r){
	return ( (4 * Pi * r * r *r) / 3 );
}

int main(){
	double x=1.9, y=4.2, z=1.0;
	printf("Geben Sie die Katheten eines rectwinkligen Dreieck\n");
	scanf("%lf %lf", &x,&y);
	z=pythagoras(x,y);
	printf("Die laenge der Hypotenuse ist: %lf\n", z);

	double r=1.0;
	r=konvertRadius( (z * z) / Pi );
	printf("Der Raduis r= %lf\n", r );  // Das Quadrat von der Hypotenuse muss durch Pi geteilt sein.

	double v=1.0;
	v=kubusVolumen( z );
	printf("Der Volume des Wuerfels ist: %lf \n", v); // pythagoras(x,y), weil der Hypotenuse einen Katheten ist.

	printf("Der Volume des Kugels mit dem Radius r ist: %f\n", kugelVolumen( r ) );

	return 0;
}
