# Exercice-char-chart-in-C

That program removes the empty spaces contained at the beginning of the char chart and once it hits another symbol of the 
ascii table, the function(strltrim) modify char_chart previously passed in parameter and then returns it.

# What did i learn?

* I learn to pass a chart in parameter to a function (and that a chart transfered in parameter is converted into a pointer variable).
* I relearn how to use pointer:
1) A pointer variable contain the address of a variable.
2) If you want to modify or use the data contain in the variable "pointed" you'll have to dereference that pointer by putting * before its name.
   If you don't put that *, you'll modify the address contained in that pointer variable instead.
3) When a chart is transmitted in parameter to function, it is converted in a pointer so if you want to access the other cells of that chart
  from the function, you'll have to add an integer to it. Exemple: 
                    int main()
                    {
                      char char_chart[10];
                      other_function(char_chart);
                    }
                    char* other_function(char* pointer_char_chart)
                    {
                        pointer_char_chart                      // point the cell number 0 of char_chart from the main function.
                        pointer_char_chart=pointer_char_chart+1 // point the cell number 1 of char_chart from the main function.
                        pointer_char_chart=pointer_char_chart+2 // point the cell number 2 of char_chart from the main function.
                                                                //And so on...
                    }
                    
When you add an integer to a pointer variable it moves and will "point" a number egale to the lenght of pointer type (*int, *char, *float, ...), in other word the pointer variable will "point" the chart's cell next to the one it previsously "pointed".
