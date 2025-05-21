
//PATTERN PRINTING 6

#include <iostream>
using namespace std;


int main() {
   int n;
   cin>>n;
  
for(int i=0;i<n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<"*";
        
    }
    cout<<endl;
}
   
    return 0;
}
//SAMPLE 1
****
***
**
*
//SAMPLE 2
******
*****
****
***
**
*



   
//PATTERN
#include <iostream>
using namespace std;

int main() {
      int n=4;
      for(int i=1;i<=n;i++){
          for(int j=0;j<n-i;j++){
              cout<<"  ";
          }
          for(int k=1;k<(2*i);k++){
              cout<<"* ";
              
          }
          cout<<endl;
          
      }
      
        for(int i=1;i<=n-1;i++){
          for(int j=0;j<i;j++){
              cout<<"  ";
              
              
          }
          for(int k=0;k<(2*n)-(2*i)-1;k++){
              cout<<"* ";
              
          }
          cout<<endl;
          
          
          
      }
    
      
      
      
      
      
      
    return 0;
}

      * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      * 



//PATTERN 14
#include <iostream>
using namespace std;

int main() {
    int n=5;
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" "; 
            
        }
        
        cout<<endl;
        
    }
   

    return 0;
}
//or
#include <iostream>
using namespace std;


int main() {
     int n=5;
     
     
     int ctr=1;
     
     
     for(int i=0;i<n;i++){
         for(int j=0;j<=i;j++){
             cout<<ctr<<" ";
             
         }
         ctr+=1;
         cout<<endl;
         
         
     }
     

    return 0;
}
//OUTPUT
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 


