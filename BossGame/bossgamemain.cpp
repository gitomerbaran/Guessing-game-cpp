#include <iostream>
#include <cstdlib>
#include <ctime>

#include <sstream>



using namespace std;

class Boss {
public:
	 int i;
     int newpoint;
     int newpointA=0; 
	 string choise; 
	 
      public :menu(){
        
        for(i=0;i<10000;i++){
        cout<<"*** B O S S    G A M E ***"<< endl;
        cout<<"---------------------------------------"<< endl;
        cout<<"1. Number Guessing Game"<< endl;
        cout<<"2. Alphabetic Guessing Game"<< endl;
        cout<<"3. Points"<< endl;
        cout<<"4. Credits"<< endl;
        cout<<"5. Exit."<< endl;
         
         cin>>choise;
         
        if(choise=="1"){
        	Num();
        
        
		}
		 else if(choise=="2"){
		 	Alphabetic();
		 }
		 else if(choise=="3"){
		 	Points();
		 }
		 else if(choise=="4"){
		    Credits();
		 }
		 else if(choise=="5"){
		 	 i=10001; exit(0);
		 }
		 else{
		 	cout<<"You entered a different value. Try again.\n"<<endl;
		 	menu();
		 }
     }

        }
    
     Alphabetic(){
        
        
     
     
        string chooseA;
        int pointA;
       
     
      for(int x=0;x<10000;x++) { 
          
   
          
           
       
           
         
           
               cout<<"You will try to guess the correct letter"<<endl;
               cout<<"1- 3 chances to find \t 2- 5 chances to find\t 3- Return Menu"<<endl;
            
                cin>>chooseA;
             
           
                if(chooseA=="1"){
                    char c = 'a';
					srand(time(0));
					int random= rand() % 25;
                     c = c + random;
     
                cout<<"We can start now! You have 3 chances to get it right."<<endl; 
                cout<<"You get 10 points if you guess the correct letter on the first guess, and 5 points on the second guess."<<endl;
               
                int j=0;
                char guessA = 0;
                while(j<3){
                    cout<<"Enter to Guess: "<<endl;
                    
                    cin>>guessA;
                  
                    if(guessA==c && j==0){
                        j=3;
                        cout<<"Congratulations!Found it on your first try"<<endl;
                        cout<<" You earned 10 points"<<endl;
                        cout<<"-----------------------"<<endl;
                        pointA+=10;
                         newpointA=pointA;
                    }
                  
                     
                    else if(guessA==c && j!=0){
                        j=3;
                        cout<<"Congratulations!Found it"<<endl;
                        cout<<" You earned 5 points"<<endl;
                        cout<<"-----------------------"<<endl;
                        pointA+=5;
                         newpointA=pointA;
                    }
                  
                  
                    else{
                        cout<<"Sorry not the right answer try again\n-------------------------"<<endl;
                    } 
                    
               
                 
                    j++;
            }
                if(!(guessA==c)){
                   cout<<"Sorry you didn't guess the letter correctly :( "<<endl;
                   cout<<"The correct letter :"<<c<<endl;
                   cout<<"------------------------"<<endl;
                    
                }
                
                }
               
               
                else if(chooseA=="2"){
                    cout<<"We can start now! You have 5 chances to get it right."<<endl;
                    
                     char c = 'a';
					srand(time(0));
					int random= rand() % 25;
                     c = c + random;
                    
                     int j=0;
                 char guessA='0';
                while(j<5){
                    cout<<"Enter to Guess: "<<endl;
                    
                    cin>>guessA;
                  
                    if(guessA==c && j==0){
                        j=5;
                        cout<<"Congratulations!Found it on your first try"<<endl;
                        cout<<" You earned 10 points"<<endl;
                        cout<<"------------------------"<<endl;
                        pointA+=10;
                         newpointA=pointA;
                    }
                  
                     
                      else if(guessA==c && j!=0){
                        j=5;
                       cout<<"Congratulations!Found it"<<endl;
                       cout<<" You earned 5 points"<<endl;
                       cout<<"-----------------------"<<endl;
                        pointA+=5;
                         newpointA=pointA;
                    }
                       else{
                        cout<<"Sorry not the right answer try again\n-------------------------"<<endl;
                    }
                         
               
                    j++;
            }
                if(!(guessA==c)){
                    cout<<"Sorry you didn't guess the letter correctly :( "<<endl;
                    cout<<"The correct letter :"<<c<<endl;
                    cout<<"------------------------"<<endl;
                    
                }
                    
                }
                 else if(chooseA=="3"){
                i=10001; 
                  menu();
                 
                   
                   
                }
                
        
           
           
          
          
          
                if(chooseA!="1" && chooseA!="2" && chooseA!="3" ){
                   cout<<"You made the wrong choice"<<endl;
                   
                   
                   }
        
    }
        
    }
    
    
    Num(){
    
        
        string choose;
        int point;
        int newpoint0;
     
      for(int x=0;x<10000;x++) { 
          
   
          
           
       
           
         
           
                cout<<"Is it between 1-10 or 1-100? Choose number "<<endl;
                cout<<"1 Between 1-10 \t 2 Between 1-100\t 3 Return Menu"<<endl;
            
                cin>>choose;
             
           
                if(choose=="1"){
                cout<<"We can start now! You have been given a number from 1-10 and you have 2 chances to get it right."<<endl;
                cout<<"You get 10 points if you guess the correct number on the first guess, and 5 points on the second guess."<<endl;
                srand(time(0));
			    int randomnumber=rand() % 10 + 1;
			    
                int i=0;
                
                int guess;
                
                while(i<2){
                   cout<<"Enter to Guess: "<<endl;
                    
                   cin>>guess;
                  
                    if(guess==randomnumber && i==0){
                        i=2;
                       cout<<"Congratulations!Found it on your first try"<<endl;
                       cout<<" You earned 10 points"<<endl;
                       cout<<"-----------------------"<<endl;
                        point+=10;
                        newpoint=point;
                    }
                  
                      else if(guess<randomnumber){
                            cout<<"Less than the correct number"<<endl;
                            }
                      else if(guess>randomnumber){
                            cout<<"Greater than the correct number"<<endl;
                      }
                    else if(guess==randomnumber){
                            i=2;
                           cout<<"Congratulations!Found it on your second try"<<endl;
                           cout<<"You earned 5 points"<<endl;
                           cout<<"-----------------------"<<endl;
                            point+=5;
                             newpoint=point;
                            }
                   
                   	  
                   	
				   
                           
                    
               
                 
                    i++;
            }
                if(guess!=randomnumber){
                    cout<<"Sorry you didn't guess the number correctly :( "<<endl;
                    cout<<"The correct number :"<<randomnumber<<endl;
                    cout<<"------------------------"<<endl;
                    
                }
                
                }
               
               
                else if(choose=="2"){
                    cout<<"We can start now! You have been given a number from 1-100 and you have 5 chances to get it right."<<endl;
                    
                    srand(time(0));
                    int randomnumber=rand() % 100 + 1;
                    
                     int i=0;
                int guess=0;
                while(i<5){
                    cout<<"Enter to Guess: "<<endl;
                    
                    cin>>guess;
                  
                    if(guess==randomnumber && i<3){
                        i=5;
                        cout<<"Congratulations!Found it on your first try"<<endl;
                        cout<<" You earned 10 points"<<endl;
                        cout<<"------------------------"<<endl;
                        point+=10;
                         newpoint=point;
                    }
                  
                      else if(guess<randomnumber){
                            cout<<"Less than the correct number"<<endl;
                            }
                      else if(guess>randomnumber){
                          cout<<"Greater than the correct number"<<endl;
                      }
                    else if(guess==randomnumber && i>2){
                            i=5;
                           cout<<"Congratulations!Found it on your second try"<<endl;
                           cout<<"You earned 5 points"<<endl;
                           cout<<"------------------------"<<endl;
                            point+=5;
                             newpoint=point;
                            }
                       
               
                    i++;
            }
                if(guess!=randomnumber){
                    cout<<"Sorry you didn't guess the number correctly :( "<<endl;
                    cout<<"The correct number :"<<randomnumber<<endl;
                    cout<<"------------------------"<<endl;
                    
                }
                    
                }
                 else if(choose=="3"){
                i=10001; 
                  menu();
                 
                   
                   
                }
                
        
           
           
          
          
          
                if(choose!="1" && choose!="2" && choose!="3" ){
                   cout<<"You made the wrong choice"<<endl;
                   
                   
                   }
              
          
      
          
    }
   
    
      
        }
          Points(){
        
        cout<<"Number Guessing earned from games: "<<newpoint<<endl;
        cout<<"Alphabetic Guessing earned from games: "<<newpointA<<endl;
        cout<<"Total points earned from all games: "<<newpointA+newpoint<<endl;
        cout<<"3-Return Menu"<<endl;
        
        string chooseP;
        cin>>chooseP;
         if(chooseP=="3"){
                i=10001; 
                  menu();
                  
                   
                   
                 }else{
                	cout<<"You made the wrong choise\n"<<endl;
                	Points();
				}
				}
            
       Credits(){
       
        cout<<"\nName: Omer Berkay Baran\nSt Id: ******\n----------------------"<<endl;
           
        cout<<"3-Return Menu"<<endl;
        
         string choosep;
         cin>>choosep;
         if(choosep=="3"){
                i=10001; 
                  menu();
                  
                   
                   
                }
                else{
                	cout<<"You made the wrong choise\n"<<endl;
                	Credits();
				}
    }
    
	    




};

int main() {
	
	
	Boss  boss1;
	boss1.menu();
	
	
	
	
	
	
	
	
	
	return 0;

}

