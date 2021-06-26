def welcome_menu():
    print( "Welcome to Chula Chana!!! ")
    print( "Available commands ")
    print( "1. Check in user ")
    print( "2. Check out user ")
    print( "3. Print people count ")
    x = int(input("Please input any number : "))
    print("--------------------------------------------------------------")
    if(x==1):
        check_in()
    if(x==2):
        check_out()
    if(x==3):
        show_list()    

def check_in():
    print("Enter phone number : ")
    number = input()
    print("1:Mahamakut building, \n2:Sara Phra Kaew, \n3:CU Sport Complex, \n4:Sanam Juub, \n5:Samyan Mitr Town")
    x = int(input("Please input any number : "))
    while(x>5 or x<1):
        x= int(input("Invalid places number, pls input any number again : "))
    if number in user:
        places_count[user[number]]-=1
    user[number]=x
    places_count[x]+=1
    print("--------------------------------------------------------------")

def check_out():
    number = input("Enter phone number : ")
    if number not in user:
        print("Good bye")
        return
    place_out=user.pop(number)
    places_count[place_out]-=1
    print("tel:"+number+"checked out")
    print("--------------------------------------------------------------")

def show_list():
    for i in range (1,6):
        print(str(i)+". "+places_name[i-1]+": "+str(places_count[i]))
    print("--------------------------------------------------------------")


user = {} #key = telNumber , value = places
places_count={1:0,2:0,3:0,4:0,5:0} # key = places , value = peopleCount
places_name=["Mahamakut building", "Sara Phra Kaew", "CU Sport Complex", "Sanam Juub", "Samyan Mitr Town"]
# 1:Mahamakut building,
# 2:Sara Phra Kaew, 
# 3:CU Sport Complex,
# 4:Sanam Juub,
# 5:Samyan Mitr Town

welcome_menu()
print("continue the program ? (y/n)")
c=input()
while(c=='y'):
    welcome_menu()
