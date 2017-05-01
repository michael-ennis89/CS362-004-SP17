
Michael Ennis
30April2017
Quiz 2

I first implemented the function inputChar(). I simply placed the 9 different options
available in the testme if statements, into an array. To get a random char from the array
I created an integer that would take a random number modulus between 0-8 and then I
returned that char[randomnumber] to the testme function.

The Second function inputString() is similar to the previous function. I placed the
4 different options in the if statement from testme into an array. Next I allocated a
dynamic array to store a 5 letter word, the 6th space for the null terminating character.
Next in the for loop i take out 5 chars from the 4 options add the null character and
send it back to testMe.

The first part of the loop is the state working up to 9. Once it is at state 9 it needs
to randomly spell the work reset. All in all it took 174 iterations for my random function
to complete on the first time.
