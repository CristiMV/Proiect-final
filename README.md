# Proiect final - Voicu Cristian Marius

Proiectul meu este un aparat de bobinat.

BOM: https://docs.google.com/spreadsheets/d/1pAV8tlNkW99GAcifB2H-6p0AnuCfOBNcSrPQ-GOcB38/edit?usp=sharing

Aparatul este constituit din urmatoarele:


Partea electronica:

-	caseta legatura prevazuta cu conexiune 220 V alternativ, siguranta 0,6 A
-	sursa de alimentare: 5V / 4A;  12V /1A
-	montaj electronic cu rol de driver pentru motoare, format din doua parti:

    •	placa cu tranzistoarele de putere (tranzistoare MOSFET, radiatoare, rezistori, diode, condensatori)

    •	placa cu logica de comanda si surse stabilizate de tensiune de 9V (pentru Arduino), respectiv 5V (pentru driver)  (stabilizatoare tensiune, radiatoare, circuite integrate logice seria CMOS 4000, rezistori, condensatori) 
-	placa Arduino Uno
-	doua motoare pas cu pas
-	doua optocuploare cu fanta
-	conductoare pentru conexiuni;



Partea mecanica:
o placa PAL (cu rol de suport) si componente mecanice:
-	de transmitere a miscarii: tija filetata, cuplaj rigid, tija de ghidaj, axul pe care se bobineaza, cuplaj elastic (pentru preluarea si amortizarea descentrarilor)
-	de asamblare: sina de aluminiu, profile L pentru montaj, platbanda perforata, suruburi, saibe, piulite, distantiere
