//The "pyramid" is a triangle of asterisks with a base of 11 (* * * * * *) and height of 6, this time flipped
#include <iostream>
int main(){
    char asteriskArray[6][11];
    for(int i = 0 ; i <= 5 ; i++){
        for(int j = 0 ; j <= 10 ; j++){
            if(j >= i && i+j <= 10 && (i+j)%2 == 0){
                asteriskArray[i][j] = '*';
                std::cout << asteriskArray[i][j];
                if((j+1)%11 == 0){
                    std::cout <<std::endl;
                }
            }
            else{
                asteriskArray[i][j] = ' ';
                std::cout << asteriskArray[i][j];
                if((j+1)%11 == 0){
                    std::cout <<std::endl;
                }
            }
        }
    }
}