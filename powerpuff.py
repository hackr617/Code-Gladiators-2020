'''
The first line of input consists of the number of ingredients, N

The second line of input consists of the N space-separated integers representing the quantity of 
each ingredient required to create a Powerpuff Girl.

The third line of input consists of the N space-separated integers representing the 
quantity of each ingredient present in the laboratory.

Print the maximum number of powerpuff girls that can be created
'''

def main():
    number_of_ingredients=0
    ingredients_required=[]
    ingredients_quantity=[]

    number_of_ingredients=int(input())

    text_ingredients=input()
    for i in range(number_of_ingredients):
        ingredients_required.append(int(text_ingredients.split()[i]))

    text_ingredients=input()
    for i in range(number_of_ingredients):
        ingredients_quantity.append(int(text_ingredients.split()[i]))


    min_number=0

    for idx in range(number_of_ingredients):
        quantity=int(ingredients_quantity[idx]/ingredients_required[idx])

        #initialize
        if min_number==0:
            min_number=quantity

        # we find smaller number
        elif quantity<min_number:
            min_number=quantity

    print(min_number)

main()

