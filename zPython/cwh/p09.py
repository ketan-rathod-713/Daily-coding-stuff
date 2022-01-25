# name = input("Enter your name : \n")
# print("Good afternoon , "+ name)


# problem 2 fill the letter template

# from sqlite3 import Date


# name = input("Enter your name")
# date = input("Enter date ")

# print("Dear " + name+"\n"+"You are selected !\n"+date)

# letter = '''Dear <|NAME|>,
# Greetings from coding house ha ha,
# You are selected !

# Date : <|DATE|>
# '''

# name = input("enter your name \n")
# date = input("enter date \n")
# letter = letter.replace("<|NAME|>", name)
# letter = letter.replace("<|DATE|>", date)
# print(letter)


# Write a program to detect double spaces in a string

# str = "There  are  two double spaces in this line ha ha"
# print(str.count("  "))
# print(str.find("  "))  # it will return posn dont get confused ha ha

# replace double spaces with single spaces

str = "There  are  two  double sp  aces"
str = str.replace("  ", " ")
print(str)  # in future we will use loop and so on ha ha
