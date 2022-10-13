import random

print("Hey there! Lets see if you got some damn 6thsense")
attempts=[]
def gameStartsHere():
 playerAttempt=0
 randomNumber=int(random.randint(1,10))
 while(readyToPlay=='y'):
  enteredValue=int(input("Guess a number\n"))
  if(enteredValue<1 or enteredValue>10):
   print("Entered a valid number between 1 to 10")
  else:
        if(enteredValue > randomNumber):
            print("Entered Value is greater")
            playerAttempt += 1
        elif(enteredValue < randomNumber):
            print("Entered value is smaller")
            playerAttempt+=1
        else:
            print("congratulation")
            playerAttempt+=1
            print("No of attempts {}".format(playerAttempt))
            break

try:
 readyToPlay=input("This game is all about guessing a number !\n Are you in?y/n")
 while(readyToPlay=="y"):
  gameStartsHere()
 else:
    print("Thank You")

except Exception as e :
    print(e)
