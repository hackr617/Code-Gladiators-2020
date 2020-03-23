/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>

/*
The first line of input consists of the number of ingredients, N

The second line of input consists of the N space-separated integers representing the quantity of 
each ingredient required to create a Powerpuff Girl.

The third line of input consists of the N space-separated integers representing the 
quantity of each ingredient present in the laboratory.

Print the maximum number of powerpuff girls that can be created
*/

int main(int argc, char *a[])
{
    //Write code here
	int num_ingredients;

	std::vector<int> ingredients_required;
	std::vector<int> ingredients_quantity;

	std::cin>>num_ingredients;

	for(int i=0;i<num_ingredients;i++){
		int input_string;
		std::cin>>input_string;

		ingredients_required.push_back(input_string);
	}

	for(int i=0;i<num_ingredients;i++){
		int input_string;
		std::cin>>input_string;

		ingredients_quantity.push_back(input_string);
	}

	int minimum_number;

	for(int i=0;i<num_ingredients;i++){
		int quantity;

		quantity=ingredients_quantity[i]/ingredients_required[i];

		// initialise
		if(minimum_number==0){
			minimum_number=quantity;
		}
		else if(quantity<minimum_number){
			minimum_number=quantity;
		}
	}

	std::cout<<minimum_number<<"\n";

}

