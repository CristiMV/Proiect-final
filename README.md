# Proiect final Arduino - Voicu Cristian Marius

Proiectul meu este un aparat de bobinat.

BOM: https://docs.google.com/spreadsheets/d/1pAV8tlNkW99GAcifB2H-6p0AnuCfOBNcSrPQ-GOcB38/edit?usp=sharing

Aparatul este constituit din urmatoarele:


Partea electronica:

-	caseta de protectie (in interior este conexiunea sursei la 220 V alternativ si o siguranta de 0,6 A)
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




Functionare:

La conectare aparatului la priza (cu jumperele de pe placa de deasupra a driverului puse in slot-uri) aparatul intra in functiune (pornesc cele doua motoare).

Motorul cu axul mai lung are rol de bobinare.

Celalalt motor are rol de transport: in timp ce tija filetata este invartita, piulita aflata pe ea este tinuta pentru a nu se roti, dar i se permite o miscare liniara stanga-drepata si astfel este obligata sa se deplaseze de-a lungul tijei.

Cele doua optocuploare determina limitele din stanga, respectiv drepta pana la care se poate deplasa piulita (si implicit limitele din stanga si dreapta pana la care ajunge sfoara cand este bobinata). Cand piulita ajunge in dreptul unui optocuplor se optureaza fanta dintre emitatorul (un LED cu emitere in infrarosu) si receptorul optocuplorului (un fototranzistor) si se trimite un semnal catre Arduino, care comanda schimbarea sensului de rotatie a motorului de transport.

Pentru oprire se scoate din priza aparatul. Pentru a opri doar un motor se poate scoate un jumper de pe placa de deasupra a driverului sau se poate scoate de pe placa Arduino firul pe care se transmite comanda de pas pentru acel motor.




Fire conectate la Arduino si rolul lor:

Negru - se conecteaza la GND

Verde - pas motor transport (se conecteaza la pinul 8)

Alb - sens motor transport (pinul 9)

Albastru - pas motor bobinare (pinul 11)

Maro - optocuplor stanga (pinul 12)

Galben - optocuplor dreapta (pinul 13)
