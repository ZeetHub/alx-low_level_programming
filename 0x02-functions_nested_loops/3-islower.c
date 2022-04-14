#include "main.h"                                                 
                                                                  
/**                                                               
 *  *_islower - verifies if a character is lower case                
 *   *@ch: is the character to be checked                             
 *    *Return: 1(true) if ch is lowercase, 0(false) if not.            
 *     */                                                               
int _islower(int ch)                                              
{                                                                 
	        return (ch >= 'a' && ch <= 'z');                          
}    
