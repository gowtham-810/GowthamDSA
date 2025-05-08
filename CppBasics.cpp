//Getting input/output from the user
#include <iostream>
using namespace std;

int main() {
    
    int a;
    string name;
    char b;
    cin>>a;
    cin>>name;
    cin>>b;
    
    cout<<a<<endl;
    cout<<name<<endl;
    cout<<b<<endl;
    

    return 0;
}


//Triangles formation using if and else
#include <iostream>
using namespace std;
int main() {

    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a+b+c)==180){
        cout<<"Triangles can be Formed";
        
    }
    else{
        cout<<"Triangles cannot be formed";
    }


    return 0;
}


//Grade using if, elseif, else
#include <iostream>
using namespace std;

int main() {
     
    int mark;
    cin>>mark;
    if(mark>=90){
        cout<<"Grade A";
    }
    else if(mark>=80){
        cout<<"Grade B";
    }
    else if(mark>=60){
        cout<<"Grade C";
    }
    else if(mark>=35){
        cout<<"Grade D";
    }
    else{
        cout<<"Fail";
    }

    return 0;
}


//Concatenating firstName and lastName and printing n times
#include <iostream>
using namespace std;

int main() {
    string firstName,lastName;
    int n;
    
    cin>>firstName>>lastName;
    cin>>n;
    for(int i=0;i<n;i++){
          cout<<firstName+lastName<<endl;
        
    }
    

    return 0;
}
