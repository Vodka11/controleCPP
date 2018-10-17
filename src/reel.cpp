#include<vector>
#include<iostream>

using namespace std;

int main(){

int i;
int j;
float enter;

vector <float> numbers(0);

cout<<"Bienvenue dans le programme de stockage de réels"<<endl;
cout<<"Merci d'entrer un réel, entrez 0 pour arrêter la saisie"<<endl;


for(i=0; i< 100; i++){

cin>>enter;

if(enter != 0){

numbers.push_back(enter);

i++;

cout<<"vous avez entré les nombres suivants : "<<endl;

for(j=0; j<numbers.size(); j++){
cout<<numbers[j]<<endl;
}

}else{

return 0;


}
}

return 0;
}
