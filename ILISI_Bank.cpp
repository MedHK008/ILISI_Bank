// ILISI_Bank.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Account.h"
#include "Customer.h"
#include "Current_Account.h"


using namespace ILISI_Bank;
int main()
{
     Customer* c1 = new Customer("C1", "C1");
     Customer* c2 = new Customer("C2", "C2");
      Devise* b1 = new Devise("MAD", 1000);
      Devise* b2 = new Devise("MAD", 3000);
      Account* A1 = new Current_Account(c1, b1, "25102024");
      Account* A2 = new Current_Account(c2, b2, "25102024");
      Current_Account* A3;
      Devise* d2 = new Devise("MAD", 20000);
      Devise* d3 = new Devise("MAD", 3000);

      A1->printAccount();
      A2->printAccount();

      A1->crediter(d2,"25102024");
      A1->debiter(d3);
      A1->transfer(*A2, d3);
      //A3->transfer(*A2, d3);
      A1->printAccount();
      A2->printAccount();

      delete c1, b1,b2, A1, A2, c2, d2,d3;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
