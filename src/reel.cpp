#include<vector>
#include<iostream>

using namespace std;

int main(){

// initialisation des variables 

int i;
int j;
int k;
int l;
int m;
int n;

string menu;
float enter;
float del;
float tri = 0;

vector <float> numbers(0);

// affichage du menu 

cout<<"Bienvenue dans le programme de stockage de réels"<<endl;
cout<<"vous pourrez supprimer un ou plusieurs nombres après en avoir saisi dans la base"<<endl;
cout<<"Merci d'entrer un réel, entrez 0 pour arrêter la saisie"<<endl;


// suppression d'un nombre à enlever en premier dans la liste


for(i=0; i< 100; i++){

cin>>enter;

if(enter != 0){

numbers.push_back(enter);

i++;
// affichage des nombres saisis par l'utilisateur 
cout<<"vous avez entré les nombres suivants : "<<endl;

for(j=0; j<numbers.size(); j++){
cout<<numbers[j]<<endl;
}

// tri des nombres + affichage
cout<<"affichage après tri"<<endl;

for(m=0; m<numbers.size(); m++){
for(n=1; n<numbers.size(); n++){
if(numbers[m] > numbers[n]){
numbers[n] = tri;
numbers[m] = numbers[n];
tri = numbers[m];
}
m++;
}
n++;
cout<<numbers[j]<<endl;
}

if( menu == "a"){
cout<<"choisissez un réel à bannir la première fois dans la liste"<<endl;
cin>>del;
for(k=0; k<numbers.size(); k++){
if(numbers[k] == del){
numbers[k] = 0;
}
}
}
// bannir un nombre de toute la liste
cout<<"appuyez sur la lettre b pour supprimer un nombre de toute la liste"<<endl;
cin>>menu;

if( menu == "b"){
cout<<"choisissez un réel à bannir de toute la liste"<<endl;
cin>>del;
for(l=0; l<numbers.size(); l++){
if(numbers[l] == del){
numbers[l] = 0;
l++;
}
}

// quitter si l'utilisateur entre 0
}else{

return 0;

}
}
}
//fin du programme
return 0;
}
