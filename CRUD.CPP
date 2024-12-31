#include<iostream>
#include<vector>
#include<string>
using namespace std;
//make structure item
 class Item;
   string name; 
   int id;
   double price;

   void display(){
    cout<<"id"<<id<< "name"<<name<<"price"<<price<<endl;
   }
   //function prototype
   //function to create anew item
   void createItem(vector<Item>&item);
   //function to read and display item
   void readItem(const vector<Item>&item);
   //function to update  items
   void updateItem(vector<Item>&item);
   //function to delete items
   void deleteItem(vector<Item>&item);

   int main(){
    vector<Item>item;
    int choice;
   }



