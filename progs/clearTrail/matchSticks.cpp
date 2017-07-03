#include<iostream>
using namespace std;


int main() {
	int match_sticks = 21;
	int userSticks;
        int myPick;
        cout<<"Total MatchSticks = "<<match_sticks<<endl;

	while(match_sticks > 0) {
                if(match_sticks == 1) { 
                    cout<<"You lost the game!!\n"; 
                    break;
                }
		cout<<"your turn, Please pick a 1,2,3 or 4 sticks\n";
		cin>>userSticks;
                
                /*if(match_sticks == 1) {
                   cout<<"I lost the game\n";
                   break;
                }*/

                /*if(match_sticks == 5)
                   myPick = 4 - userSticks;
                else*/
                myPick = 5 - userSticks;
		
                cout<<"My pick is "<<myPick<<endl;
                
		match_sticks = match_sticks - (myPick + userSticks); 
                cout<<"Matchsticks left = "<<match_sticks<<endl;
	}
	
	return 0;
}
