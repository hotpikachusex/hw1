#include <iostream>

unsigned int fibonacci(unsigned int zahl) {
    if (zahl == 0) { // Die Fibonacci-Zahl von null ist null
      return 0;
    }
    
    if (zahl ==1) { // Die Fibonacci-Zahl von eins ist eins
      return 1;
    }
    
    //Ansonsten wird die Summe der zwei vorherigen Fibonacci-Zahlen zurückgegeben
    return fibonacci(zahl -1) + fibonacci(zahl -2);
}

int main() {
  unsigned int zahl;
  
  std::cout << "Bitte Zahl eingeben: ";
  std::cin >> zahl;
  std::cout << "Die Fibonacci-Zahl von " << zahl <<
      " ist " << fibonacci(zahl) << std::endl;
}
