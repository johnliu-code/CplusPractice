// PracticeCplusplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{    

    cout << "Practice: Excercice 12 \n";
  
    int inputValeur, max = 0, min = 0, occupenceDuMax = 0, occupenceDuMin = 0,  loopcounter = 0;

    do
    {
        cout << "Give a mark (-1 to finish) : \n";
        cin >> inputValeur;

        //Check value is if out of the range 0 to 20
        if (inputValeur < -1 || inputValeur > 20)
        {
            cout << "Donnez le valeur entre 0 et 20 \n";
            cout << "Give a mark (-1 to finish) : \n";
            cin >> inputValeur;
        }

        if (loopcounter == 0)                                  //First loop pass the valid value to min and max, for compare with others
            min = max = inputValeur;

        if (inputValeur != -1 && inputValeur <= min) {          // Min should not be -1, when entre -1 will only for existe the loop
            if (inputValeur == min)                       
                occupenceDuMin++;                              //Get min value existe times
            min = inputValeur;
        }
  
        if (inputValeur >= max) {
            if (inputValeur == max) 
                occupenceDuMax++;                                //Get max value existe times
            max = inputValeur;
        }

        if (inputValeur != -1)
            loopcounter++;                                       //Incrise counter when valid input
    }
    while (inputValeur != -1);

    //Print out results only if entre value -1, and get any valid input value;
    if (inputValeur == -1 && loopcounter != 0) {   
        cout << "Marks est total " << loopcounter << " fois: \n";
        cout << "Maximum score : " << max << ", total: " << occupenceDuMax << " fois." << endl;
        cout << "Minimum score : " << min << ", total: " << occupenceDuMin << " fois." << endl;
    }

}

