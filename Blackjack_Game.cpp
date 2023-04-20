#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void tittle(){
   // this is the tittle 
    cout << "====================" << endl;
    cout << "|    BALCK JACK     |" << endl;
    cout << "====================" << endl; 
}

int main()
{
    // we declare it into main
    tittle();
    // this is the random cards
    srand(time(NULL));
    int ranNum1 = rand() % 13;
    int ranNum2 = rand() % 13;
    
    cout << " First card:  " << ranNum1 << endl;
    cout << " Second card:  " << ranNum2 << endl;
    int sum = ranNum1 + ranNum2;
    cout << " SUM: " << sum << endl;
    
    // we check if they win or loss
    if (sum == 21){
        cout << " YOU WIN";
    }else if (sum > 21){
        cout << " YOU LOSS";
    }
    // this is the drew card
    else if (sum < 21){
    // we check if they want to drew card
    int i = 0;
    do{
    cout << " Do you want to Drew Card? ";
    char op;
    cout << " pres Y/N: ";
    cin >> op;
    // this is the drew card
    int ranDrew = rand() % 13;
    int sum1 = ranNum1 + ranNum2 + ranDrew;
     
      //if we type Y this will be print
    if (op == 'y' || op == 'Y'){
      // we check if sum < 21 again we increament
        if (sum1 < 21){
        cout << " SUM: " << sum1 << endl;
        i++;
        // we check if not we break it because it can be win or loss
        } else if (sum1 == 21){
            cout << " YOU WIN";
            break;
            }else if (sum1 > 21){
                cout << " YOU LOSS";
                break;
                }
     // if no we break it            
    }else if (op == 'n' || op == 'N'){
      break;
    }
    }while (i < 2);
    }

}

