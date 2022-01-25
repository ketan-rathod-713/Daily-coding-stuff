# String functions
story = "Once upon a time there was as as utube name harry who uploaded python course harry"
print(story[0:5])

print(len(story))  # length of story
print(story.endswith("se"))  # kya story se se khatam ho rahi he ha ha
print(story.count("as"))  # count the number of a
print(story.count("a"))
print(story.count(""))  # why this is 77 and not 76

print(story.capitalize())  # capitalise the first one

# it will return posn if there else -1 and ye pehli vali occurance kahi batayega ha ha
print(story.find("harry"))

# ye puri string me jitne bhi occcurances hoge use changge kar dega
print(story.replace("harry", "Codewithharrry"))

#  escape sequences

str = " harry is a good boy. \n He is  in new line with \t a tab ha ha and it is backs\\lash"
print(str)
