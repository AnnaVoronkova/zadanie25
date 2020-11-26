#include <iostream>
using namespace std;

int main(){
    int x = 0;
    for (int i = 489421; i <=489440; i++){
        for(int j = 1; j <= i; j++){
            if (i%j == 0){
                x++;
                cout << j << ' ';
            }
        if(x == 4){
                cout << endl << i << endl;
            }
    }
    }
    return 0;
}
