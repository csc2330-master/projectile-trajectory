# Saving the World, one Vaccine at a Time

A villain has dispersed an aerosol agent that is affecting the health of the inhabitants of a city. An antidote has been created but it has to be delivered using projectiles. A projectile luncher is build and delivery packages made ready. They have recruited you to write a program to help them determine the initial speed of the package and angle they need to set the barrel to get to the places the package needs to go.

We need to brush up some physics for this!

When a projectile is shot with an initial speed of ![equation](https://latex.codecogs.com/gif.latex?v_%7Bo%7D) and with a angle ![equation](https://latex.codecogs.com/gif.latex?%5Ctheta) then the following formulas apply:

Decomposing the initial speed:
* ![equation](https://latex.codecogs.com/gif.latex?v_%7Box%7D%3Dv_o%5Ccos%5Ctheta)
* ![equation](https://latex.codecogs.com/gif.latex?v_%7Boy%7D%3Dv_o%5Csin%5Ctheta)

The speed at any ![equation](https://latex.codecogs.com/gif.latex?%28x%2Cy%29)
* ![equation](https://latex.codecogs.com/gif.latex?V_x%3DV_o%5Ccos%5Ctheta)
* ![equation](https://latex.codecogs.com/gif.latex?V_y%3DV_o%5Csin%5Ctheta-gt)

The position at any given time:
* ![equation](https://latex.codecogs.com/gif.latex?x%3DV_o%5Ccos%5Ctheta%20t)
* ![equation](https://latex.codecogs.com/gif.latex?y%3DV_o%5Csin%5Ctheta-%5Cfrac%7B1%7D%7B2%7Dgt%5E2)

From these equations we can calculate how long is the projectile going to take to reach ![equation](https://latex.codecogs.com/gif.latex?y%3D0):
![equation](https://latex.codecogs.com/gif.latex?0%3DV_o%5Csin%5Ctheta%20t%20-%20%5Cfrac%7B1%7D%7B2%7Dgt%5E2)
![equation](https://latex.codecogs.com/gif.latex?0%3Dt%20%5Cleft%20%28V_o%5Csin%5Ctheta%20-%20%5Cfrac%7B1%7D%7B2%7Dgt%20%5Cright%20%29)
Therefore:
![equation](https://latex.codecogs.com/gif.latex?y%20%3D%200%2C%20t%3D0)
and
![equation](https://latex.codecogs.com/gif.latex?y%3D0%2C%20t%3D%5Cfrac%7B2V_o%5Csin%5Ctheta%7D%7Bg%7D)

Now we can find the distance:
![equation](https://latex.codecogs.com/gif.latex?x%3DV_o%5Ccos%5Ctheta%20t)
Substitute t, for the moment the package is going to hit the ground:
![equation](https://latex.codecogs.com/gif.latex?x%3DV_o%5Ccos%5Ctheta%20%5Cleft%20%28%5Cfrac%7B2V_o%5Csin%5Ctheta%7D%7Bg%7D%20%5Cright%20%29)
Rearranging:
![equation](https://latex.codecogs.com/gif.latex?x%3D%20%5Cfrac%7B2%5Csin%5Ctheta%20%5Ccos%5Ctheta%20%7BV_o%7D%5E2%7D%7Bg%7D)
Using trigonometric identity for double angle: 
![equation](https://latex.codecogs.com/gif.latex?2%5Csin%5Ctheta%20%5Ccos%5Ctheta%20%3D%20%5Csin%7B2%5Ctheta%7D)
We end up with:
![equation](https://latex.codecogs.com/gif.latex?x%20%3D%20%5Cfrac%7B%7BV_o%7D%5E2%5Csin%7B2%5Ctheta%7D%7D%7Bg%7D)

Create the program that runs like the following:
