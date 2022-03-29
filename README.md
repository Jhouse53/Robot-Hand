# Robot-Hand
Benton / Shrey Robot Hand project for school

## Project Pre Planning

### Proposal

Here is our initial proposal for our Robot arm project:

[Google Doc Proposal](https://docs.google.com/document/d/1pJv--MkpJIrZVuyjbc_YNHxrnz6IX2q_PzAKAFET-n0/edit?usp=sharing)

### Project Description

## Code

### Summary

### Code Snippets

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
[Click Here to see the full code](https://github.com/Jhouse53/Robot-Hand/blob/main/Code/FlexsensorCode.ino)

### Code Reflection

The code for this project was supposed to be easy, in theory, but ended up a lot more difficult than I thought. One of the main challenges at first, when we were still planning on using a button to freeze all motion of the hand, was to get the booleans working properly. It took a lot of trial and error and some help from the teachers to get it working right. After that, a big problem was the flex sensors. When you map the value from flex sensore language to servo language, you enter in 2 numbers in between which the sensor gives readings. The problem was, that all the sensors were slightly different in the values it gave, so I had to aually calibrate all of them to get each of the individual map values. You also cant move them around because if the wiring doesn't match up with how you initially calibrated it, you ust recalibrate. That was slight pain. Other than that, there was a lot of tweaking based on how the actual figer was moving, but in the end, we got it to function right.

## CAD

### Summary
 
### Version 1

#### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V1%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V1%20pic2.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V1%20pic1.PNG?raw=true" width="200">

### Version 2
Version 2 was the first version that we worked with and attempted to print out. One of the main problems with this design was that it was to small and it didn't print well.
#### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V2%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V2%20pic2.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V2%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V2%20pic2.PNG?raw=true" width="200">

### Version 3
Version 3 was the updated version of version 2 we only focused on the fingers for version 3 and made some changes. The most important changes we made were changes to the width of the finger and the addition of some indentations that were suppose to be used to attach string to.
#### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V3%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V3%20pic2.PNG?raw=true" width="200">

### Version 3.2
Version 3.2 is similar to Version 3 in most ways aside from a couple of differences. One being the new hand that was created along with the updated hands and some small updates to the fingers such as an increase to the length of the finger and the addition of another set of indentations on the back of the finger.
#### Images
<img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V3.2%20pic1.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Palm%20V3.2%20pic2.PNG?raw=true" width="200"> <img src="https://github.com/Jhouse53/Robot-Hand/blob/main/Images/Robot%20Hand%20Finger%20V3.2%20pic1.PNG?raw=true" width="200">

### CAD Reflection
One of the main problems we ran into in our CAD design was that it was to small and the joints were to small and the 3D printer had a hard time printing them. and even if it did print it there would be heavy forces acting on it that would most likely break it. Design 2 was the first design we attempted to print out its major issue was that it was entirely to small. Both the fingers and the joints were to small and wouldn't be able to function properly.

## Physical Project

## Reflection
[Rotten Filaments](https://github.com/shrey45/Project-Rating/blob/main/README.md) Score - **73%**
