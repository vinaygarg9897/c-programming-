#include<stdio.h>
int main(){
	enum Suit{ Hearts,Diamond,Clubs,Spades
	};
	enum Rank{
		Two,Three,Four,Five,Six,Seven,Eight,Nine,Jack,Queen,King,Ace
	};
	
	for(enum Suit suit=Hearts;suit<=Spades;suit++){
		for(enum Rank rank=Two;rank<=Ace;rank++){
			
		 switch(rank){
		 	 case Two :
		 	 	        printf("Two");
		 	 	        break;
	         case Three :
		 	 	        printf("Three");
		 	 	        break;
             case Four :
		 	 	        printf("Four");
		 	 	        break;
              case Five :
		 	 	        printf("Five");
		 	 	        break;
              case Six :
		 	 	        printf("Six");
		 	 	        break;

              case Seven :
		 	 	        printf("Seven");
		 	 	        break;
              case Eight :
		 	 	        printf("Eight");
		 	 	        break;

               case Nine :
		 	 	        printf("Nine");
		 	 	        break;
                 case Jack :
		 	 	        printf("Jack");
		 	 	        break;
                  case Queen :
		 	 	        printf("Queen");
		 	 	        break;
                  case   King :
		 	 	        printf("King");
		 	 	        break;
                   case Ace :
		 	 	        printf("Ace");
		 	 	        break;
             }
			 
			 printf("of");
			 
		  switch(suit){
		  	    case Hearts:
		  	    	          printf("Hearts");
		  	    	          break;
		  	    case Diamond :  
				               printf("Diamond");
							   break;
				case Clubs : 
				               printf("Clubs");
							   break;
				case Spades :   
				              printf("Spades");
							     break;			   			   	          
		  }	 	
		  
		  printf("\n");
		}
	}
}
