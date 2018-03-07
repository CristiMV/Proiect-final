
//pentru retinerea pinilor conectati la optocuploare (pentru schimbarea sensului)
const int leftStopPin = 12, rightStopPin = 13;


const int transportMotorPin= 8;  //pinul pt comanda motorului de transportMotorPinsport
const int dirPin = 9;  //pinul pentru schmibarea sensului motorului folosit la transportMotorPinsportul stanga-dreapta 

const int windingMotorPin =11;  //pinul pt comanda motorului de windingMotorPininare

int prevTimeTransport, prevTimeWinding, now;

int perTransport, minPerTransport = 6;  //perioada minima necesara pentru ca motorul de transportMotorPinsport sa realizeze un pas este de 6 milisecunde
int perWinding, minPerWinding = 4;  //perioada minima necesara pentru ca motorul care windingMotorPinineaza sa realizeze un pas este de 4 milisecunde


void setup() {
  
  pinMode (leftStopPin, INPUT);
  pinMode(rightStopPin, INPUT);
  
  pinMode (dirPin, OUTPUT);
  pinMode(transportMotorPin, OUTPUT);
  
  pinMode (windingMotorPin, OUTPUT);

  //Initializarea periodelor pasilor pentru cele doua motoare
  perTransport = 6;
  perWinding = 4;

  //Nu se accepta o perioda mai mica decat perioda minima
  //In cazul in care s-a facut o initializare gresita a perioadelor
  if( perTransport < minPerTransport) perTransport = minPerTransport;  
  if( perWinding < minPerWinding) perWinding = minPerWinding;
}


void loop() {

  //Se stabileste sensul motorului de transport
  if( digitalRead ( leftStopPin ) )        //daca s-a ajuns la limita din stanga
  {
    digitalWrite(dirPin, 0);     //schimba sensul
  }
  else if ( digitalRead( rightStopPin) )   //daca s-a ajuns la limita din dreapta
  {
    digitalWrite(dirPin, 1);    //schimba sensul
  }
  
  now = millis();   //actualizeaza timpul curent
                 //apoi misca motoarele
  go( transportMotorPin, perTransport, prevTimeTransport );
  go( windingMotorPin, perWinding, prevTimeWinding );
}


void go(int pinStepper, int per, int& prevTime)   //functia primeste ca parametri pinul pe care se trimite comanda de pas, perioda pasului
//si momentul in care s-a facut ultimul pas (acesta din urma se modifica cand se face un pas)
{
  if ( now - prevTime <= per/2 )
  {
    digitalWrite(pinStepper, LOW );
  }
  
  if ( now - prevTime >= per )
  {
    digitalWrite(pinStepper, HIGH);
    prevTime = now;   //actualizeaza momentul la care s-a facut ultimul pas
  }
}




