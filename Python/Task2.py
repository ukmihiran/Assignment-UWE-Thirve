# Task 2 : Python Array
# Student Num: 21058644 

import math
from functools import reduce

# initializing array list
num_list = [1,2,3,4,5,6,7,8,9,10]

def is_sorted():

    if((num_list == sorted(num_list)) or (num_list == sorted(num_list, reverse=True))):
        print('True')
    else:
        print('False')

def find_gcd():

    gcd = reduce(math.gcd, num_list) 
    print(gcd)

def find_lcm():

    lcm = 1
    for i in num_list:
        lcm = lcm*i//math.gcd(lcm, i)
    print(lcm)

def find_intersec():
    
    tmp_arr = []

    for i in range(len(num_list)):     #create Temp list 
        tmp_arr.append(i)

    new_list = [num_list[i] - tmp_arr[i] for i in range(len(num_list))] #find intersection of num_list and newlist
    intersection_set = set.intersection(set(num_list), set(new_list))
    
    intersection_list = list(intersection_set)
    print(intersection_list)

def rep_items():
    
    rep_arr = {i:num_list.count(i) for i in num_list}  # search repeated numbers
    print(rep_arr)

def main():
    is_sorted()
    find_gcd()
    find_lcm()
    find_intersec()
    rep_items()

if __name__ == "__main__":
    main()