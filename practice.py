
# # # print("Enter Your Fucking Name dont write pussy, fuck, suck, asshole or dick\n")

# # # name=input()


# # # g="Hello \"" + name + "\" i am with  you dont worry lets fuck"

# # # # print(g[6:6+len(name):2])
# # # # print(g[6:6+len(name):2])
# # # # # print(g[6:6+len(name):2])
# # # # g=g.upper()
# # # print(g.replace("fuck","****"))


# # Letter_content='''

# # Dear <|reciver_name>

# #           My name is <|sender_name> and i am glad to say you that you are selceted
# #           for company Amazone we have seen your projects and hardwork toward python
# #           we need you to make our company forward.

# #           contact me on
# #           Email  : anna@amazon.com               Thanks <|reciver_name>
# #           Mob    : +91-9874563211


# # '''

# # print("Enter Recivers's Name \n")
# # Reciver=input()
# # print("Enter Sender's Name \n")
# # Sender=input()


# # Letter_content=Letter_content.replace("<|reciver_name>",Reciver)
# # Letter_content=Letter_content.replace("<|sender_name>",Sender)

# # print(Letter_content)

# # a=[1,5,3,4,7,8,2,5,4,6,3,2,1,9]
# # print(a)
# # a.sort()
# # a.extend("201547523")
# # print(a)
# # a.sort()
# # print(a)
# # b=["Znkit","Anuj"]
# # b.insert(1,"kalu")
# # i=0
# # for i in range(0,4)
# #    b[i]=b[i].capitalize
# #    i=i+1
# # #    print(i)

# # b.sort()
# # print(b)


# # a=(1,2,3,4,3,5,5,2,2,2,2,12)
# # print(a)
# # # a=a.pop(2)
# # print(a)
# # # a[0]=9
# # # print(a)

# dick={

#   "Ritik" : "He is a coder",
#   "Ankit" : "He is a professional Gamer",
#   "Govind": "He is chutiya",
#   "Raju"  : "He is a scientist"

# }

# # var=1
# # while var==1:

# #  print("\nEnter name \n")
# #  name=input()

# print(dick.items())

# new_dick={

#     "i":"coder",
#     "Raju":"now i am updated"
# }

# dick.update(new_dick)

# print(dick.items())

s = "12:01:00AM"

if s[8] == 'P':
    a = int(s[0:2])
    b = a
    b = str(b)
    a = a+12
    a = str(a)
    s = s.replace(b, a)
    print(s)
else:

    a = int(s[0:2])
    if(a > 11):
        b = a
        b = str(b)
        a = a-12
        a = str(a).rjust(2, '0')
        a = str(a)

        s = s.replace(b, a)
        print(s[0:8])

    else:
        print(s[0:8])
