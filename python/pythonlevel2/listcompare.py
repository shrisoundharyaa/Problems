# list compare using loop and set

list_input1 = input()
list_input2 = input()
list1 = list_input1.split()
list2 = list_input2.split()



# for i in list1:
#     if i in list2:
#         if i not in a:
#             a.append(i)

set1 = set(list1)
set2 = set(list2)

a = set1.intersection(set2)



if a:
    print(list(a))
else:
    print("no common elements")


# this list equal
list_input1 = input()
list_input2 = input()
list1 = list_input1.split()
list2 = list_input2.split()
 
is_equal =  set(list1) == set(list2)
print(is_equal)