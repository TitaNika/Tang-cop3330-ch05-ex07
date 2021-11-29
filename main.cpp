/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tony Tang
 */

#include "std_lib_facilities.h"

double solve_root(double a, double b, double c)
{
  double root;

  root = pow(b, 2) - (4*a*c);

  if(root < 0) 
  {
    cout << "The root is not possible.\n";
    exit(1);
  }
  else
  {
    root = sqrt(root);
  }

  cout << "\nSquare root equals: " << root << "\n";

  return root;
}

int main() 
{

  double a,b,c;
  double root;
  double x1, x2;

  cout << "Enter the value for 'a':\n";
  cin >> a;
  cout << "Enter the value for 'b':\n";
  cin >> b;
  cout << "Enter the value for 'c':\n";
  cin >> c;

  root = solve_root(a, b, c);

  x1 = ((-1*b) + root) / (2*a);
  x2 = ((-1*b) - root) / (2*a);

  if(x1 == x2)
  {
    cout << "X value equals: " << x1 << "\n";
  }
    cout << "X values equals: " << x1 << " and " << x2 << ".\n";

  return 0;
}

/**
How do you know that your results are plausible?
- The results were further verified by the actual equation itself, where I insert the said values for a, b, and c and compare to see if the results were the same as that displayed by the code. 

Can you check that they are correct?
- Yes, the equation itself serves this purpose. Ex: If A = 3, B = -1, and C = -2, then root should be 5 with the x values being 1 and -2/3. This was displayed in both the code and the handwritten evaluation. 
**/