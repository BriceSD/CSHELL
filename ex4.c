int main(int argc, char *argv[]){
  char msg[9] = "bonjour!";
  char *adrMsg, *ptrCar, c;
  short longueur;

  adrMsg = msg;

  ptrCar = &msg[8];

  ptrCar--;

  longueur = (short)(ptrCar-(adrMsg+3));

  c = *ptrCar;

  c = *--ptrCar;

  ptrCar++;

  c = *ptrCar++;

  *(ptrCar-5) = c;
}
