#include <iostream> 
#include <string>  
#include <algorithm>  

using namespace std;  
 void ArithmeticExpression::inputAndConvertToPostfix()
    {
       char inputChar; //declaring inputChar
       int i = 0; //inizalize i to 0

       cout << "Enter the Arithmetic Expression(No Spaces): ";

       while( ( inputChar = static_cast<char>( cin.get() ) ) != '\n' )
       {
          if (i >= MAXSIZE) break; //exits program if i is greater than or equal to 100

          if(isdigit(inputChar) || isOperator(inputChar))
          {
             inFix[i] = inputChar; //copies each char to inFix array
             cout << inFix[i] << endl;
          }
          else
             cout << "You entered an invalid Arithmetic Expression\n\n" ;

          }

          // increment i;
          i++;
          convertToPostfix(inFix, postFix);


       }




    bool ArithmeticExpression::isOperator(char currentChar)
    {

        if(currentChar == '+')
            return true;
        else if(currentChar == '-')
            return true;
        else if(currentChar == '*')
            return true;
        else if(currentChar == '/')
            return true;
        else if(currentChar == '^')
            return true;
        else if(currentChar == '%')
            return true;
        else
            return false;
    }

    bool ArithmeticExpression::precedence(char operator1, char operator2)
    {
        if ( operator1 == '^' )
           return true;
        else if ( operator2 == '^' )
           return false;
        else if ( operator1 == '*' || operator1 == '/' )
           return true;
        else if ( operator1 == '+' || operator1 == '-' )
           if ( operator2 == '*' || operator2 == '/' )
              return false;
           else
              return true;

        return false;
    }

   void ArithmeticExpression::convertToPostfix(char * const inFix, char * const postFix)
        {
           Stack2<char> stack;

           const char lp = '(';

           stack.push(lp); //Push a left parenthesis ‘(‘ onto the stack.

           strcat(inFix,")");//Appends a right parenthesis ‘)’ to the end of infix.

          // int i = 0;
           int j = 0;

           if(!stack.isEmpty())
           {

               for(int i = 0;i < 100;){

                   if(isdigit(inFix[i]))
                   {
                        postFix[j] = inFix[i];
                        cout << "This is Post Fix for the first If: " << postFix[j] << endl;
                        i++;
                        j++;
                   }

                    if(inFix[i] == '(')
                   {
                       stack.push(inFix[i]);
                       cout << "The InFix was a (" << endl;
                       i++;
                       //j++;
                   }

                    if(isOperator(inFix[i]))
                               {
                            char operator1 = inFix[i];

                            cout << "CUrrent inFix is a operator" << endl;
                                   if(isOperator(stack.getTopPtr()->getData()))
                                       {
                                       cout << "The stack top ptr is a operator1" << endl;
                                       char operator2 = stack.getTopPtr()->getData();
                                           if(precedence(operator1,operator2))
                                           {
                                               //if(isOperator(stack.getTopPtr()->getData())){
                                                   cout << "The stack top ptr is a operato2" << endl;
                                                   postFix[j] = stack.pop();
                                                   cout << "this is post fix " << postFix[j] << endl;
                                                   i++;
                                                   j++;
                                              // }

                                           }

                                       }
                                   else

                                       stack.push(inFix[i]);
                                   // cout << "Top Ptr is a: "<< stack.getTopPtr()->getData() << endl;



                               }

                    for(int r = 0;r != '\0';r++)
                        cout << postFix[r] << " ";

                        if(inFix[i] == ')')
                       {
                           while(stack.stackTop()!= '(')
                         {
                               postFix[j] = stack.pop();
                               i++;
                               j++;
                                }
                           stack.pop();

                            }
                       }
           }

                   }