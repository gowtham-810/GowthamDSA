
//PRIME NUMBERS FROM 2 TO N


#include <iostream>
using namespace std;


int main() {
    int n=11;
    int ctr=0;
    
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i%j)==0){
                ctr++;
            }
        }
            if(ctr==2){
                cout<<i<<" ";
            }
            ctr=0;
            
        
        
        
    }
    

    return 0;
}
