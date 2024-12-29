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
    //Function for updating the game atate
    void updateGame () {
        int prevX=snakeTail[0];
        int prevTailY=[0];
        int prev2X,prevY;
        snakeTailX[0]=x;
        snakeTailY[0]=y;
        for (int i=1;i<snakeTailLen;i++){
            prev2X=snakeTailX[i];prev2Y=snakeTailY[i];snakeTailX[i]=prevX;snakeTailY[i]=prevY;prevX=prev2X;prevY=prev2Y;
            switch (sDir){
                case LEFT:
                x--;
                break;
                case RIGHT:
                x++;
                break;
                case UP:
                y--;
                break;
                case DOWN:
                y++;
                break;
            }
            //Checks for snake's collision with the wall(|)
            if (x>=width||x<0||y>=height||y<0)
            isGameOver=true;
            //Checks for collision with the tail(0)

            for (int i=0;i<snakeTailLen;i++){
                if (snakeTailX[i]==x&& snakeTailY[i]==y)
                isGameOver=true;
            }
            //Checks for snake's collision with the food(#)
            if (x==fruitCordX && y==fruitCordY){
                playerScore+=10;
                fruitCordX=rand()%width;
                fruitCordY=rand()% height;
                snakeTailLen++;
            }
        }
        //Function to set the game difficulty level
        
    }


 }
 



