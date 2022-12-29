// Simple arithmetic operations with fractions
#include<iostream>
#include<algorithm>

using namespace std;

class Fractions{
    private:
        int numerator;
        int denominator;
    
    public:
        Fractions(int num, int deno){
            numerator = num;
            denominator = deno;
        }
        int getDenominator(){
            return denominator;
        }
        int getNumerator(){
            return numerator;
        }
        int gcd(int a, int b){
            int gcd, minimum, count;
            count = 1;
            minimum = min(a,b);
            //Loops starts from 1 because 1 is a divisor for all numbers
            while(count <= minimum){
                if(a%count==0 && b%count==0){
                    gcd = count;
                }
                count += 1;

            }
            return gcd;

        }
        int lcm(int a, int b){
            int lcm;
            lcm = max(a,b);
            while(lcm % a != 0 || lcm % b != 0){
                lcm += 1;
            }
            return lcm;
        }
        void multiply(Fractions f1){
            int num, deno,divisor;
            deno = this->denominator * f1.denominator;
            num = this->numerator * f1.numerator;

            //Using GCD to get most simplified fraction result
            divisor = gcd(num, deno);
            num = num/divisor;
            deno = deno/divisor;
            
            cout<<"Mutliplication = "<<num<<"/"<<deno<<'\n';

        }
        void divide(Fractions f1){
            int num, deno, divisor;
            deno = this->denominator * f1.numerator;
            num = this->numerator * f1.denominator;

            //Using GCD to get most simplified fraction result
            divisor = gcd(num, deno);
            num = num/divisor;
            deno = deno/divisor;

            cout<<"Division = "<<num<<"/"<<deno<<'\n';
        }
        void add(Fractions f1){
            int num, deno,divisor;

            //Using LCM and GCD to get most simplified fraction result

            deno = lcm(this->denominator, f1.denominator);
            num = (deno/this->denominator*this->numerator) + (deno/f1.denominator*f1.numerator);

            divisor = gcd(num, deno);
            num = num/divisor;
            deno = deno/divisor;
            cout<<"Addition = "<<num<<"/"<<deno<<'\n';
        }
        void substract(Fractions f1){
            int num, deno,divisor;

            //Using LCM and GCD to get most simplified fraction result

            deno = lcm(this->denominator, f1.denominator);
            num = (deno/this->denominator*this->numerator) - (deno/f1.denominator*f1.numerator);

            divisor = gcd(num, deno);
            num = num/divisor;
            deno = deno/divisor;
            cout<<"Substraction = "<<num<<"/"<<deno<<'\n';
        }
        void display(){
            cout<<numerator<<"/"<<denominator<<'\n';
        }

};
int main(){
    Fractions fract1(2,3);
    Fractions fract2(1,2);
    Fractions fract3(5,11);
    Fractions fract4(6,5);
    Fractions fract5(5,9);
    Fractions fract6(5,3);
    Fractions fract7(6,8);

    cout<<"Multiplication of 5/11 and 1/2: \n";
    fract3.multiply(fract2);
    cout<<'\n';

    cout<<"Division of 2/3 and 1/2: \n";
    fract1.divide(fract2);
    cout<<'\n';

    cout<<"Addition of 1/2 and 2/3: \n";
    fract2.add(fract1);
    cout<<'\n';

    cout<<"Substraction of 2/3 and 5/11: \n";
    fract1.substract(fract3);
    cout<<'\n';

    cout<<"Multiplication of 6/5 and 2/3: \n";
    fract4.multiply(fract1);
    cout<<'\n';

    cout<<"Division of 5/9 and 3/5: \n";
    fract5.divide(fract6);
    cout<<'\n';

    cout<<"Substraction of 6/8 and 1/2: \n";
    fract7.substract(fract2);
    cout<<'\n';
    
}