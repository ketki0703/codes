# codes
Here's a step-by-step explanation of the algorithm used in the code:

Read the number of airports (n) from the user.

1.Create a vector fuel of size n to store the fuel units for each airport.

2.Read the fuel units for each airport from the user and store them in the fuel vector.

3.Define the minimumPlanesRequired function that takes the fuel vector as input and returns the minimum number of planes required to reach the last airport.

4.Initialize variables:
n as the size of the fuel vector (number of airports).
planes to keep track of the minimum number of planes required.
currentFuel to keep track of the available fuel as we move from one airport to another.

5.Iterate through the fuel vector starting from the second airport (i = 1):
Decrement currentFuel by 1 to account for the fuel required to move to the next airport.
Check if currentFuel becomes negative, indicating that it is not possible to reach the last airport. If so, return -1.
Check if the fuel at the current airport (fuel[i]) is greater than the current available fuel (currentFuel).

6.If true, it means a new plane needs to be hired to continue the journey. Increment planes by 1 and update currentFuel to the fuel at the current airport (fuel[i]).

7.After the loop, return the value of planes as the minimum number of planes required to reach the last airport.

8.In the main function:
Prompt the user to enter the number of airports (n).
Read the fuel units for each airport from the user and store them in the fuel vector.
Call the minimumPlanesRequired function with the fuel vector to get the minimum number of planes required.

9. Display the result:
If the result is -1, it means it is not possible to reach the last airport.
Otherwise, display the minimum number of planes required.

The algorithm follows a greedy approach. It iterates through the airports and checks if a new plane needs to be hired whenever the available fuel is not sufficient to reach the next airport. By selecting the airport with the maximum fuel whenever a new plane is required, it ensures that the minimum number of planes are hired to reach the last airport.






