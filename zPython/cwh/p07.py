# string is a data type in python
#  it is the sequence of characters
# 3 types = by using single ,double ,triple quotes ha ha
a = 34
b = "Harry's"  # use triple quotes when you want your string to be printed literally as we pasted / written
print(b)
print(a, b)  # both will print ha ha
print(type(b))
c = "car"
# String length


# String slicing
print(b[0]+b[1])  # hence we can access each element and so on
# b[0] = k  we can't do that
print(b[1:4])  # 1 and 2 3 print hoga this is slicing ha ha

# Concationation of two strings
print(b + c)  # concatination ha ha

# we also uses negative indices sometimes
# when we want to access last element by using -1
print(b[2:])  # python will automatically take upto last element

# Negative indices we start from last as -1 and then last to second is -2
#  for 5 size it is -5 -4 -3 -2 -1
# so last one is -4

print(b[-4:-1])  # This is same as b[1:4]

# Sliccing with skip value
# skip 2 means har dusri value ko print karo , alternatively
# May be it is usefull sometimes
d = b[1:4:2]  # 2 means har dusre ko print karo
print(d)
d = b[1::2]  # 2 means har dusre ko print karo
print(d)
