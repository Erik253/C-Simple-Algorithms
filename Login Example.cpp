#include <cstdlib>
#include <iostream>

using namespace std;

int main()
    {
          string login;
          int    senha;
          
          cout << "Painel Administrativo \n" << endl;
          
          cout << "Digite seu login: \n";
          cin    >> login;
          
          cout << "\nDigite sua senha: \n";
          cin   >> senha;
          
          if ( (login =="admin" || login =="ADMIN") && senha == 1234 )
             cout <<"\n********* Autenticado:) !*********\n" << endl;
             
          else
             cout << "\n********* Dados incorretos, tente novamente! *********\n" << endl;
          
          system("PAUSE");
          
          return 0;
          
}
