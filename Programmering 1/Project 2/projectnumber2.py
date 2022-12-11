def main():    
    
    
    
    
    
    def login_info():
       
       log_details = {"Username":"MEK1300",
                      "Password":"Python"}
       

       username = input("Username: ")
       password = input("Password: ")

       if password == log_details["Password"] and username == log_details["Username"]:
           print("\nWelcome", username)
           print("\nTo answer the question type in a, b, c or d in lowercase letters")
           quiz()


       else:
           print("\nInvalid username and/or password, Try again")
           print("\nThe login details are", log_details)
           login_info()


    login_info()

    
alter= ["a", "b", "c", "d",]
wrong = []
right= []
wrong_q=[]
def quiz():
        
        correct = 0
        incorrect = 0
        x=incorrect
        
         
        while correct==correct:
             
             print("\nQ1. What is the capital of Norway?\n\n a. Bergen\n b. Oslo\n c. Stavanger\n d. Trondheim")
             
             answer = alter[1] 
            
             response = input("Answer: ")
            
             if response == answer:
                correct += 1
                break
                
                
             elif response not in alter:
                print("\nType in one of the letters in lowercase letters")
                continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q1. What is the capital of Norway?")
                 right.append(answer)
                 x+=1
                 break
                
               
            
        while correct==correct:
                
                
             print("\nQ2. What is the currency of Norway?\n a. Euro\n b. Pound \n c. Krone\n d. Mark ")
                
             
             answer = alter[2] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q2. What is the currency of Norway?")
                 right.append(answer)
                 x+=1
                 break
            
        while correct==correct:
                
                
             print("\nQ3. What is the largest city in Norway? \n a. Oslo \n b. Stavanger\n c. Bergen \n d. Trondheim")
                
             
             answer = alter[0] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q3. What is the largest city in Norway?")
                 right.append(answer)
                 x+=1
                 break
            
        while correct==correct:
                
                
             print("\nQ4. When is the consitution day (national day) of Norway? \n a. 27th May \n b. 17th May \n c. 17th April \n d. 27th April")
                
             
             answer = alter[1] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q4. When is the consitution day (national day) of Norway?")
                 right.append(answer)
                 x+=1
                 break
                
        while correct==correct:
                
                
             print("\nQ5. What color is the background of the Norwegian flag? \n a. Red \n b. Blue\n c. White \n d. Yellow")
                
             
             answer = alter[0] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q5. What color is the background of the Norwegian flag?")
                 right.append(answer)
                 x+=1
                 break
            
        while correct==correct:
                
                
             print("\nQ6. How many countries does Norway border? \n a. 1\n b. 2 \n c. 3\n d. 4")
                
             
             answer = alter[2] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q6. How many countries does Norway border?")
                 right.append(answer)
                 x+=1
                 break
                
             
                     
        while correct==correct:
                
                
             print("\nQ7. What is the name of the university in Trondheim? \n a. UiS \n b. UiO \n c. NMBU \n d. NTNU")
                
             
             answer = alter[3]
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q7. What is the name of the university in Trondheim?")
                 right.append(answer)
                 x+=1
                 break
                
       
        while correct==correct:
                
                
             print("\nQ8. How long is the border between Norway and Russia? \n a. 96Km \n b. 196Km \n c. 296Km \n d. 396Km")
                
             
             answer = alter[1] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q8. How long is the border between Norway and Russia?")
                 right.append(answer)
                 x+=1
                 break
                
                  
        while correct==correct:
                
                
             print("\nQ9. Where in Norway is Stavanger?  \n a. North \n b. South \n c. South-West \n d. South-East")
                
             
             answer = alter[2] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q9. Where in Norway is Stavanger?")
                 right.append(answer)
                 x+=1
                 break
                
        while correct==correct:
                
                
             print("\nQ10. From which Norwegian city did the world famous composer Edvard Grieg come from? \n a. Oslo \n b. Bergen \n c. Stavanger \n d. Tromsø")
              
             
             answer = alter[1] 
             response = input("Answer: ")
             
             if response == answer:
                 correct += 1
                 break
                    
             elif response not in alter:
                 print("\nType in one of the letters in lowercase letters")
                 continue
             
             else:
                 wrong.append(response)
                 wrong_q.append("Q10. From which Norwegian city did the world famous composer Edvard Grieg come from?")
                 right.append(answer)
                 x+=1
                 break
                
        print("\nCorrect answers:", correct,"/10")
        print("\nIncorrect answers:", x,"/10")
        print("-"*30)
        print("Your wrong answers was:")
        print("-"*30)
               
        length=len(wrong)
        for i in range(length):
        
          print(wrong_q[i])
          print("Your wrong answers was :", wrong[i])
          print("The right answers was:", right[i])
          print("-"*30)
        
main()
