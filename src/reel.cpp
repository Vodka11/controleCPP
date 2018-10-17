#include<vector>
#include<iostream>

using namespace std;

int main(){

int i;
int j;
int k;
int l;

string menu;
float enter;
float del;

vector <float> numbers(0);

cout<<"Bienvenue dans le programme de stockage de réels"<<endl;
cout<<"vous pourrez supprimer un ou plusieurs nombres après en avoir saisi dans la base"<<endl;
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

cout<<"appuyez sur la lettre a pour supprimer un nombre"<<endl;
cin>>menu;

if( menu == "a"){
cout<<"choisissez un réel à bannir la première fois dans la liste"<<endl;
cin>>del;
for(k=0; k<numbers.size(); k++){
if(numbers[k] == del){
numbers[k] = 0;
}
}
}

 if( menu == "b"){
cout<<"choisissez un réel à bannir de toute la liste"<<endl;
cin>>del;
for(l=0; l<numbers.size(); l++){
if(numbers[l] == del){
numbers[l] = 0;
l++;
}
}
 
}else{

return 0;


}
}
}
return 0;
}
