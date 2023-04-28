#include <iostream>
using namespace std;

long int liczjedynki(unsigned long int liczba){
    int jedynki=0;
    while(liczba!=0){
        if(liczba bitand 1){
            jedynki++;
        }
        liczba>>=1;
        }
        return jedynki;
    }
long int sumajedynek(long int T[],int size){
  
  if(size==0){
      return liczjedynki(T[size]);
  }
  else{ 
      return liczjedynki(T[size])+sumajedynek(T,size-1);
  }
  
}    


double wpisywanie(double T[][6],int wiersze,int kolumny){
    for(int i=0;i<wiersze;i++){
        for(int j=0;j<kolumny;j++){
            cin>>T[i][j];
        }
    }
}
double wypisywanie(double T[][6],int wiersze,int kolumny){
     for(int i=0;i<wiersze;i++){
        for(int j=0;j<kolumny;j++){
            cout<<T[i][j]<<" ";
        }
    }
}
double maximin(double T[][6],int wiersze,int kolumny,double &srednia,double &min,double &max){
    double suma=0;
    double dzielnik=0;
    max=T[0][0];
    min=T[0][0];
      for(int i=0;i<wiersze;i++){
        for(int j=0;j<kolumny;j++){
            if(T[i][j]<min){
                min=T[i][j];
            }
            if(T[i][j]>max){
                max=T[i][j];
            }
            suma=suma+T[i][j];
            dzielnik++;
        }
    }
    srednia=suma/dzielnik;
}

int main(){
    
    int choose;
    cin>>choose;
    switch(choose){
        case 1:{
            int jakies=0;
            int size=11;
            long int T[11];
            for(int i=0;i<size;i++){
                cin>>T[i];
            }
            cout<<sumajedynek(T,size-1)<<" ";
            for(int i=0;i<size;i++){
                cout<<T[i]<<" ";
            }
            break;
        }
        case 2:{
            const int wiersze=5;
            const int kolumny=6;
            double T[wiersze][kolumny];
            wpisywanie(T,wiersze,kolumny);
            double srednia=0;
            double min;
            double max;
            maximin(T,wiersze,kolumny,srednia,min,max);
            cout<<min<<" "<<max<<" "<<srednia<<" ";
            wypisywanie(T,wiersze,kolumny);
            break;
        }
        default:{
            cout<<"Wrong task number.";
        }  
    }   
}