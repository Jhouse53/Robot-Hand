# Robot-Hand
Benton / Shrey Robot Hand project for school

## Project Pre Planning

### Proposal

Here is our initial proposal for our Robot arm project:

[Google Doc Proposal](https://docs.google.com/document/d/1pJv--MkpJIrZVuyjbc_YNHxrnz6IX2q_PzAKAFET-n0/edit?usp=sharing)

## Project Description

### Code Summary:

#### Code Snippets

Here we initialize the flex sensors into pins

```c++

const int flexPin = A0; //pin A0
const int flexPin1 = A1;
const int flexPin2 = A2;
const int flexPin3 = A3;
const int flexPin4 = A4;

```
This is the main part of out code which turns our flex sensor readings into "servo language". We have this piece of code 5 times with different "value" variables and "angle" variables that are unique to its own sensor.

```c++

value = analogRead(flexPin);               //flexpin
angle = map(value, 755, 910, 0, 180);//Map value 0-1023 to 0-255 (PWM)
Serial.print("sensor0: ");
Serial.print(angle);
myservo.write(angle);
delay(40);
    
```
[Click Here to see the full code](https://github.com/Jhouse53/Robot-Hand/blob/main/Code/sketch_jun02a.ino)

#### Code Reflection

The code for this project was supposed to be easy, in theory, but ended up a lot more difficult than I thought. One of the main challenges at first, when we were still planning on using a button to freeze all motion of the hand, was to get the booleans working properly. It took a lot of trial and error and some help from the teachers to get it working right. After that, a big problem was the flex sensors. When you map the value from flex sensore language to servo language, you enter in 2 numbers in between which the sensor gives readings. The problem was, that all the sensors were slightly different in the values it gave, so I had to aually calibrate all of them to get each of the individual map values. You also cant move them around because if the wiring doesn't match up with how you initially calibrated it, you ust recalibrate. That was slight pain. Other than that, there was a lot of tweaking based on how the actual figer was moving, but in the end, we got it to function right.

## CAD

###  CAD Summary:
 
#### Version 1

##### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V1%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V1%20pic2.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V1%20pic1.PNG?raw=true" width="200">

#### Version 2
Version 2 was the first version that we worked with and attempted to print out. One of the main problems with this design was that it was to small and it didn't print well.
##### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V2%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V2%20pic2.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V2%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V2%20pic2.PNG?raw=true" width="200">

#### Version 3
Version 3 was the updated version of version 2 we only focused on the fingers for version 3 and made some changes. The most important changes we made were changes to the width of the finger and the addition of some indentations that were suppose to be used to attach string to.
##### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V3%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V3%20pic2.PNG?raw=true" width="200">

#### Version 3.2
Version 3.2 is similar to Version 3 in most ways aside from a couple of differences. One being the new hand that was created along with the updated hands and some small updates to the fingers such as an increase to the length of the finger and the addition of another set of indentations on the back of the finger.
##### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V3.2%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V3.2%20pic2.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V3.2%20pic1.PNG?raw=true" width="200">

#### CAD Reflection
One of the main problems we ran into in our CAD design was that it was to small and the joints were to small and the 3D printer had a hard time printing them. and even if it did print it there would be heavy forces acting on it that would most likely break it. Design 2 was the first design we attempted to print out its major issue was that it was entirely to small. Both the fingers and the joints were to small and wouldn't be able to function properly.

## Final Product

### Code:

#### Summary
The code, which started off as being looked at as the most difficult part of the project, wasn't too difficult after all. It was mainly the fact of us never using flex sensors before, and not knowing the possible errors that could come with it. We ended up having to recode and rewire many times, but all of those issues we might not run into if we were to do a similar project. Some were power issues, while some were issues with each flex sensor being slightly different in its values. It took us time, but the code came out pretty good.

#### Code Snippets

This is the main part of out code which turns our flex sensor readings into "servo language". The previous snippet was out work in progress code, which worked, but was not consistent, efficent, or dependable. With a few tweaks and changes, we got to this version of the code, which was by far the best, and worked amazingly!

```c++

value = analogRead(flexPin);         //Read and save analog value from potentiometer
  //Serial.println(value);               //Print value
  angle = map(value, 145, 260, 180, 0);//Map value 0-1023 to 0-255 (PWM)
  angle = constrain(angle, 0, 180); //Stop mapped values from going over 180 or below 0
  Serial.print("finger1: ");
  Serial.print(angle);
  myservo.write(angle);
  delay(40);
    
```

### CAD:

#### Summary

For CAD, we didn't make any other huge changes to the actual palm design, but there were plenty of other things to do. This was the letdown part of our project. I'm going to be completely honest. It was a terrible design. Which was sort of expected when your trying to make a human hand in Onshape from scratch for the first time, but still it was bad - Aesthetically and Functionally. The design wasn't thought out the best - we had to use filament wire for our joints because the holes were too small, and a long allen wrench for the axle, with tape as spacers between. The fingers wouldn't actually work and curl completely, which we tried spraying with some WD-40, which helped a lot. Another huge roadblock was the servo wasn't actually pulling enough string to curl the finger on its own, so we had to make a spool to fit on the servo that would have the right circumfrence to pull the string far enough. Again, CAD was bad, but next time we know.

#### CAD Pictures & Videos

https://user-images.githubusercontent.com/63983735/173067711-6213c0d6-ea40-421b-83aa-efc5781ea266.mov

<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/1C18D147-B1F6-45C2-8197-8EC1F30F4C25.jpeg" width="300"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/F27DDD6A-D293-496A-B3B4-0CDAEFB3B5D2.jpeg" width="300"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/C5CA714E-753B-4774-99D3-E968C54DD222.jpeg" width="300">

## Reflection
[Rotten Filaments](https://github.com/shrey45/Project-Rating/blob/main/README.md) Score - **73%**

You can see why we rated it that by this video⬇️

