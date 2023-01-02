print("Hello World!")
# def span():
#     eggs = "span eggs"
#     print(eggs)
# eggs = "global"
# print(eggs)
# span()
# print(eggs)


# word replacement problem
# sen = input("Enter your statement")
# wor = input("Enter the word to replace")
# rep = input("Enter the replacement word")
# print(sen.replace(wor, rep))


# List in python
# weekdays = ["Sunday", "Monday", "Tuesday",    "Wednesday", "Thursday", "Friday", "Saturday"]
# i = int(input("Enter between 1 to 7\n"))
# print(weekdays[i-1])
# print(weekdays[1:4]) from currrent index to the end
# print(type(weekdays))
# print(weekdays[-1])
# anything = ["name", 10, True]
# print(anything)
# List type implementation
# list1 = [1, 2, 3, 4, 5, 3, 2, 1]
# list2 = ["a", "b", "c", "d"]
# list1.sort()
# list1.extend(list2)
# print(list1)
# list2.append("hello")
# print(list2)
# print(len(list2))
# list1.insert(2, 6)
# print(list1)
# list1.remove(3)
# print(list1)
# print(list1.index(4))
# print(list1.count(5))
# print(list1)
# list1.reverse()
# list3 = list1.copy()
# print(list3)

# list1.clear()

# print(list1)

# dictories type implementation
# my_dict = {
#     'name': "Kshitiz",
#     'age': 21,
#     'college': "RNSIT"
# }
# print(my_dict['age'])


# for loop
# for letter in 'hello':
#     print(letter)
# my_list = ["hi", "my", "name", "is", "Kshitiz"]
# for item in my_list:
#     print(item)
# x = 0
# for i in range(50, 100):
#     x = x+i
# print(x)

# 2d list implentation
# my_list = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
# print(my_list[2][0])

# for lists in my_list:
#     for row in lists:
#         print(row)

# try except else
# try:
#     i = int(input("Enter the number"))
#     print(i)
# except:
#     print("Something went wrong")
# else:
#     print("Nothing went wrong")


# File operations
# file = open("GEEKS.txt", 'r')
# for each in file:
# print(each)
# print(file.read())
# print(file.read(10))
# file = open("GEEKS.txt", "w")
# file.write("working on values ")
# file.write("Error has not occured")

# file = open("GEEKS.txt", "a")
# file.write("Working condition are normal and everything is as per plan")
# file = open("GEEKS.txt", "r")
# print(file.read())
# for items in file.readline():
# print(items)
# file.close()


# Classes and objects
class simple_x:
    def __init__(self, name, age):
        self.name = name  # kind of a constructor in python
        self.age = age
        # print(self.name+" ", self.age)
    x = "Hello Everybody"


x = simple_x("Kshitiz", 27)
print(simple_x("Kshitiz", 27).x)
print(x.name+" ", x.age)
