#include<iostream>
using namespace std;

int main(){
    int n;
    int counter = 1;
    cout <<"n = " <<endl;
    cin >> n;
    cout<<"n = "<<n<<" ";

    while(n!=1){
        if(n%2 == 1){
            n = 3*n+1;
        }
        else{
            n = n/2 ;
        }
        cout<<n<<" ";
        counter = counter +1;
    }
    cout <<endl<<"counter = "<<counter<<endl;

    return 0; 
}



