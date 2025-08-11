#include<iostream> 
#include<vector> 

using namespace std; 


class Solution{
public: 
bool isRobotBounded(string instructions) {
  int a = 0; 
  int b = 0; 
  bool N = true, S = false, E =false, W = false; 
  int x =0, y =0; 
  for(auto i : instructions){
    if(i=='G'){
      if(N){
        a = 0; 
        b = 1; 
      }else if(S){
        a =0; 
        b =-1;
      }else if(E){
        a = 1; 
        b =0; 
      }else if (W){
        a = -1; 
        b =0; 
      }
    }else if (i=='L'){
      if(N){
        N = false; 
        W = true; 
      }else if (S){
        S = false; 
        E = true; 
      }else if (W){
        W= false; 
        S = true; 
      }else if (E){
        E=false; 
        N = true; 
      }
    }else if (i=='R'){
      if(N){
        N = false; 
        E = true;
      }else if (S){
        S = false; 
        W = true; 
      }else if (W){
        W = false; 
        N = true;
      }else if (E){
        E =false; 
        S = true; 
      }
    }
    x = x + a; 
    y = y +b; 
  }
return ((x == 0 && y == 0)|| N==false); 
  
}
};
int main(){
  string instructions = "GGLLGG";
  Solution sol; 
  cout << boolalpha << sol.isRobotBounded(instructions) << endl; 
  return 0; 
}
