
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    
    int a = 10; 
    int b = 2; 
    int c = 6; 
  
    
    if (a < b) { 
     
        if (c < b) { 
            printf("%d is the greatest", b); 
        } 
        else { 
            printf("%d is the greatest", c); 
        } 
    } 
    else { 
      
        if (c < a) { 
            printf("%d is the greatest", a); 
        } 
        else { 
            printf("%d is the greatest", c); 
        } 
    } 
  
    return 0; 
}
