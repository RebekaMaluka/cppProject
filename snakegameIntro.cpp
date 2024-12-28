//this is my snakegame project
#include<iostream>
#include<conio.h>
#include<windows.h>//for sleep()


using namespace std;

const int width=80;
const int height=20;
int x,y;
int fruitCordX,fruitCordY;
int playerScore;
int snakeTailX[100],snakeTailY[100];
int snakeTailLen;
enum snakesDirection{STOP=0,LEFT,RIGHT,UP,DOWN};
enum snakesDirectionDir;
bool isGameOver;
 
 void GameInit(){
    isGameOver=false;
    snakesDirection::STOP;
    x=width/2;
    y=height/2;
    fruitCordX=rand()% width;
    fruitCordY=rand()%height;
    playerScore=0;
 }
 //Function for creating the game board and rendering
 void GameRender(string playerName){
    system("cls");//clear the console

    //Creating top walls with '_'
    for (int i=0;i<width+2;i++)
    cout <<"_";
    cout << endl;
    for (int i=0;i<height;i++){
        for(int j=0;j<=width;j++){
            //creating side wall with '|'
            if (j==0||j==width)
            cout<<"|";

            //Creating snake's head with '0'
        }
    }

 }
 



