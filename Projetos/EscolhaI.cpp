#include <iostream>
using namespace std;


int main(){
    
   int mes;
   
   cout << "Escolha um m�s do ano: " << endl;
    cout << "1. Janeiro\n";
    cout << "2. Fevereiro\n";
    cout << "3. Mar�o\n";
    cout << "4. Abril\n";
    cout << "5. Maio\n";
    cout << "6. Junho\n";
    cout << "7. Julho\n";
    cout << "8. Agosto\n";
    cout << "9. Setembro\n";
    cout << "10. Outubro\n";
    cout << "11. Novembro\n";
    cout << "12. Dezembro\n";
    cout << "Digite o n�mero do m�s de 1 a 12 : ";
    cin >> mes;
    
    ;
    switch (mes) {
   case 1:
    cout << " Janeiro: 31 DIAS ";
    break;
  case 2:
    cout << "Fevereiro: 28 DIAS(29 DIAS EM ANOS BISSEXTOS";
    break;
  case 3:
    cout << "Mar�o: 31 DIAS ";
    break;
  case 4:
    cout << "Abril: 30 DIAS";
    break;
  case 5:
    cout << "Maio: 31 DIAS";
    break;
  case 6:
    cout << "Junho: 30 DIAS";
    break;
  case 7:
    cout << "Julho: 31 DIAS";
    break;

  case 8:
    cout << "Agosto: 31 DIAS";
    break;
  case 9:
    cout << "Setembro: 30 DIAS";
    break;
  case 10:
    cout << "Outubro: 31 DIAS";
    break;
  case 11:
    cout << "Novembro: 30 DIAS";
    break;
  case 12:
    cout << "Dezembro: 31 DIAS";
    break;
    
  

}
   
}
