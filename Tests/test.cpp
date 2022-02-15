#include <iostream>
 #include <cmath>
 using namespace std;
 // initialisiere double-Variable temperatur
double temperatur{ 272.0 };
// initialisiere Zeigervariable ptemperatur mit Adresse von
double* ptemperatur{ &temperatur };
 // Version 2: mit Uebergabewerten (call by value) und Rueckgabewert
 double pcal2(double qs, double iw, double lw)
 {
 double ergebnis;
ergebnis = qs*qs*lw / pow((iw + lw), 2);
*ptemperatur = 25;
 // liefere Ergebnis per return zurueck
 return ergebnis;
 }

 int main()
 {

 double quellspannung = 10.;
 double innenwiderstand = 50.;
 double lastwiderstand;
 double leistung;
cout << "Lastwiderstand eingeben:" << temperatur;
 cin >> lastwiderstand;
 // hole Ergebnis ab
 leistung = pcal2(quellspannung, innenwiderstand, lastwiderstand);
 cout << "Leistung am Lastwiderstand = " << leistung << " " << temperatur << " "<< ptemperatur <<" Watt"
<< endl;
 return 0;
 }
