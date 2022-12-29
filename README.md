# Operations-with-fractions-in-cpp
Simple arithmetic operations with fractions ;Addition, Substraction, Multiplication and Division.
# GCD and LCM used to form most simplified fractions as the final result
# GCD(Greatest common divisor)
* GCD of two or more numbers refers to the greatest number that can be obtained that can divide the numbers without living a remainder.

_Hint: The GCD is never greater than the smallest among the numbers you wish to find the GCD of_

_eg: The GCD of 12, 36 and 60 is 12 .The GCD of 15 and 18 is 3 .The GCD of 3 and 11 is 1._

*From the above we see that 12 <=12 ,3 <= 15 and 1 <= 3*

# LCM(Least Common Multiple)
* LCM of two or more numbers refers to the smallest number that can be obtained that can be divisible  the numbers without living a remainder.

_Hint: The LCM is  greater or equal to the highest among the numbers you wish to find the LCM of_

_eg: LCM of 12 and 15 is 60 because 60/12 is 5 remainder 0 while 60/15 is 4 remainder 0. LCM of 6 and 8 is 24 .LCM of 3 and 9 is 9_

*From the above we see that 60 >= 15 ,24 >= 8 and 9 >= 9*

* GCD is used in the multiplication and division , after the computation(multiplication and division) the gcd of the numerator and denominator of the answer is calculated using the gcd()
found in the code(file named fractions.cpp)

* GCD and LCM is used in the addition and substraction ,lcm() used in finding the lcm of the denominators then after the computation(addition or substraction) the gcd of the numerator and denominator of the answer is calculated using the gcd()
found in the code(file named fractions.cpp)

* OOP Object oriented paradigm was used ; a class Fraction created with the methods lcm(), gcd() , add(), substract() and multiply()
Creating objects outside this class i.e in the main function will still make it possible to access the methods mentioned above as they are public 


