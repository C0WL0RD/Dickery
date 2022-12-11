### This program will give you the option to write an integer between 1-1000. The program itself will have chosen a random integer. If you write an integer that is below the programs random integer, you will get a message that says that the integer you wrote is too low, and vice versa 

import random
def main ():
   attempt = 5
   number = random.randint(1,1000)
   while attempt <= 5:
       attempt = attempt - 1
       if attempt <= -1:
        print("-"*81)   
        print("Sorry! You did not manage to guess the number. You have reached the guessing limit")
        print("-"*81)
        print("\n The number was",number)
        break


       attempt_used = 5 - attempt 
       if True: 
        guess = (input("Guess a number between 1-1000: "))

        
        if not guess.isdigit():
           print("-"*40)    
           print("Invalid input, use numbers from 1-1000")
           print("-"*40)   
           print(attempt,"attempt(s) left")
        else:
         guess = int(guess)
         
         
         if guess > 1000 or guess < 1:
          print("-"*40)   
          print("Invalid input, use numbers from 1-1000")
          print("-"*40)   
#If you write an integer above 1000 or below 0, this message will pop up and you will lose one of your attempt          
          
         elif number == guess:
          print("-"*69)  
          print("Congratulation! You guessed the number in", attempt_used,"attempt(s)")
          print("-"*69)
          print("\n The number was",number)
          
          break 
       # Once guessed, the loop will break
         
         elif number > guess:  
          print("-"*31)  
          print("You guessed too low!")
          print(attempt,"attempt(s) left")
         
          
         elif number < guess:
          print("-"*31) 
          print("You guessed too high!")
          print(attempt,"attempt(s) left")
# You will get a message that says that the number you guessed was too high in comarison with the programs number.
         

         attempt_used = 5 - attempt 
   while attempt_used >= 5 or number == guess:
       restart = str(input("Do you want to try again? ")).upper()
       if restart == "YES": 
           print("-" *36)
           main()
           break
       #Once the user types YES, the game will restart and the program will have chosen a new integer
       
       
       elif restart == "NO":
           print("-"*12)
           print ("Well played!")
           print("-"*12)
           break
# Once the user types NO, the message "Well played" will come up and the game will end
       
       
       else:
         print("-"*46)
         print("Write either YES to continue or NO to end game")
         print("-"*46)    
# If you don´t write either YES or NO, this message will come up and you will be given a new chance to write YES or NO
main()