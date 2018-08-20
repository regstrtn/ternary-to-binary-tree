#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

static int position =0;
string input1 = "((a > b) ? ((n > m) ? r : w) : d)";
class Node{
   public:
      string data;
      Node * left;
      Node * right;
      Node(string data){
         this->data = data;
         this->left = NULL;
         this->right = NULL;
      }
}
string GetToken(string input1){
   string token = "";

   while(input1[position] == '(' || input1[position] == '?' || input1[position] == ')' || input1[position] == ':')
      position++;

   while(input1[position] != ')' && input1[position] != ':'){           //  ((a>b)?((c>d)?q:p):f)
      token += input1[position];
      position++;
   }
   return token;
}
Node* BuildBinaryTree(string input1){

      if(input1[position] == ':' )
         return NULL;

      Node * root = new Node(NULL);
      root-> data = GetToken(input1);

      cout<<root->data<<endl;

      root->left = BuildBinaryTree(input1);
      root->right = BuildBinaryTree(input1);
      while(input1[position] == ')')
         position++;
      position+=1;      // To skip colon

      return root;
   }

int main(){
   Node * root;
   root = BuildBinaryTree(input1)
   return 0;  
}
ExpToBT.cpp
Displaying ExpToBT.cpp.
