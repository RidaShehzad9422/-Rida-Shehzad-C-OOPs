#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 || j == 7 || i == 1 || i == 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
       for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
    if (j == 1 || (i == 1 && j < 7) ||(i == 4 && j < 7) ||    (i == 7 && j < 7) ||               
                (j == 7 && (i > 1 && i < 4)) || 
                (j == 7 && (i > 4 && i < 7)))   
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
     for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i == 1 || i == 7 || j == 1) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
       for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 ||                  
                (i == 1 && j < 7) ||       
                (i == 7 && j < 7) ||       
                (j == 7 && i > 1 && i < 7)) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
     for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 || i == 1 || i == 4 || i == 7) // Left vertical + top, middle, bottom
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
     for (int i=1; i<=10; i++)
 {
 	for(int j=1; j<=10; j++)
 	if(i==1 || i==5 || j==1 || j==20) 
	 {
	 cout<<"*";
	 }
 	else
	cout<<" ";
 	cout<<endl;
}
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i == 1 ||   i == 7 ||  j == 1 ||                                             
                (j == 7 && i >= 4) ||     
                (i == 4 && j >= 4))       
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
     for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 || j == 7 || i == 4) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
          for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i == 1 || i == 7 || j == 4) 
                cout << "*";
            else    cout << " ";
        }
        cout << endl;
    }
       for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i == 1 ||               
                j == 7 ||               
                (i == 7 && j <= 4))      
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
       
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 ||               
                (i + j == 5) ||         
                (i - j == 3))          
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
     for (int i = 1; i <= 8; i++){
     	for (int j = 1; j <= 14; j++) 
     	if (j == 1||j==1||i==8)
     	 cout << "*";
     	   else
                cout << " ";
           cout << endl;      
	 }
	   for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (j == 1 ||                 
                j == 6 ||                  
                (i == j && i <= 6/2) ||    
                (i + j == 6 + 1 && i <= 6/2)) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
      for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 ||              
                j == 5 ||             
                i == j)                
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
       for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 8; j++) {
            if (i == 1 || i == 7|| j == 1 || j == 8) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
       for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 ||               
                i == 1 ||               
                i == 4 ||               
                (j == 7 && i <= 4))      
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
     for (int i = 1; i <= 7 ;i++) {
        for (int j = 1; j <= 7; j++) {
            
            if (i == 1 ||                              
                i == 7 ||                              
                j == 1 ||                              
                j == 7 ||                              
                (i == j && i >= 5))                    
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
     for (int i = 0; i < 7; i++) 
    {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || (i == 0 && j < 4) || (i == 3 && j < 4) ||
                (j == 4 && i > 0 && i < 3) || (i - j == 2 && i > 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;  
    }
    for (int i = 0; i < 7; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            if ((i == 0 && j > 0) || 
                (i == 3 && j > 0 && j < 5) || 
                (i == 6 && j < 5) ||
                (j == 0 && i > 0 && i < 3) || 
                (j == 5 && i > 3 && i < 6))
                cout << "*";
            else
                cout << " ";
        }

        cout << "   ";  

        cout << endl;  
}
       for (int i = 0; i < 7; i++)   
    {
        for (int j = 0; j < 7; j++) {
		
            if (i == 0 || j == 3)
                cout << "*";
            else
                cout << " ";
        }

        cout << "   ";   
        cout << endl;   
    }
    
    for (int i = 0; i < 7; i++)     
    {
        for (int j = 0; j < 6; j++)   
        {
            if (((j == 0 || j == 5) && i < 6) || 
                (i == 6 && j > 0 && j < 5))
                cout << "*";
            else
                cout << " ";
        }

        cout << "   ";  
        cout << endl;   
    }
   for (int i = 0; i < 7; i++)   
    {
        for (int j = 0; j < 13; j++)   
        {
            if (j == i)                     
                cout << "*";
            else if (j == 12 - i)           
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
       for (int i = 0; i < 7; i++) {          
        for (int j = 0; j < 7; j++) {     
            if (j == 0 || j == 6 ||        
               (i >= 3 && j == i) ||        
               (i >= 3 && j == 6 - i))     
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
       for (int i = 0; i < 7; i++) {      
        for (int j = 0; j < 7; j++) {   
            if (j == i || j == 6 - i)    
                cout << "*";
            else
                cout << " ";
        }
        cout << " ";                     
        cout << endl;
    }
      for (int i = 0; i < 7; i++) {       
        for (int j = 0; j < 7; j++) {   
            if ((i < 3 && (j == i || j == 6 - i))   
                || (i >= 3 && j == 3))             
                cout << "*";
            else
                cout << " ";
        }
        cout << " ";  
        cout << endl;
    }
      for (int i = 0; i < 7; i++) {      
        for (int j = 0; j < 7; j++) {   
            if (i == 0 || i == 6          
                || j == 6 - i)            
                cout << "*";
            else
                cout << " ";
        }
        cout << " ";   
        cout << endl;
    }
}







