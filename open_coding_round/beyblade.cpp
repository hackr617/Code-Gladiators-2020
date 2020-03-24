/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>

/*

A player wins the game only if his battle power is strictly higher than the opponents battle power.
We have to find the optimal arrangement of our team such that we win the most number of games possible.

To fight in an optimal manner, player power should be strictly higher to win the fight, 
but the difference with the opponent power should be minimum to avoid wastage as that battle power 
could be used elsewhere. So we basically use a greedy algorithm, and match the smallest possible 
value greater than the opponents value.
*/


int main(int argc, char *a[])
{
	//Write code here
	int t;

	std::cin>>t;
	for(int i=0;i<t;i++){

		int N;
		std::vector<int> Players;
		std::vector<int> Opponents;

		std::cin>>N;

		for(int i=0;i<N;i++){
			int input;

			std::cin>>input;
			Players.push_back(input);
		}
		for(int i=0;i<N;i++){
			int input;

			std::cin>>input;
			Opponents.push_back(input);
		}


		std::sort(Players.begin(),Players.end());
		std::sort(Opponents.begin(),Opponents.end());

		int win_count=0;

		// Opponent vector size is fixed
		for(int i=0;i<N;i++){
			int minimum_number=0;
			int idx=-1;

			for(int j=0;j<Players.size();j++){

				// first check if player can defeat opponent
				if(Players[j]>Opponents[i]){

					// check if minimum_number is initialized
					if(minimum_number==0){
						minimum_number=Players[j];
						idx=j;
					}
					//then check if we find smaller minimum_number
					else if(Players[j]<minimum_number){
						minimum_number=Players[j];
						idx=j;
					}
				}

			}
			if(minimum_number!=0){
				Players.erase(Players.begin()+idx);
				win_count+=1;
			}
		}

		std::cout<<win_count<<"\n";
	}

}
