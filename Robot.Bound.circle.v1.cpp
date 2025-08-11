#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
    bool isRobotBounded(string instructions) {
      
      vector<vector<int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}}; 
      int x = 0; 
      int y = 0; 
      int indx = 0;
      for(auto i : instructions){
       
        if(i=='L'){
          indx = (indx+3)%4; 
        }else if (i=='R'){
          indx = (indx+1)%4; 
        }else{
          x += dir[indx][0]; 
          y += dir[indx][1]; 
        }
      }
      return ((x==0 && y ==0) || indx!=0); 
      
    }
};
int main(){
  string instructions = "GGLLGG";
  Solution sol; 
  cout << boolalpha << sol.isRobotBounded(instructions) << endl; 
  return 0; 
}
