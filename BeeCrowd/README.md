### Name: [Difference](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/Difference.c)
#### Description:
Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

#### Input
The input file contains 4 integer values.

#### Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

<hr>

### Name: [Salary](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/salary.c)
#### Description:
Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.
<ul>
<li>Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.</li> 
  <li>Don’t forget the space before and after the equal signal and after the U$.</li>
</ul>

#### Input:
The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.

#### Output:
Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.

<hr>

### Name: [Salary with bonus](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/salary-with-bonus.c)
#### Description:
Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.
<ul>
<li>Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.</li>
  <li>Don’t forget the blank spaces.</li>
</ul>

#### Input:
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

#### Output:
Print the seller's total salary, according to the given example.

<hr>

### Name: [Simple Calculate](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/simple-calculate.c)
#### Description:
In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

#### Input
The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

#### Output
The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.

<hr>

### Name: [Sphere](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/sphere.c)
#### Description:
Make a program that calculates and shows the volume of a sphere being provided the value of its radius `(R)` . `The formula to calculate the volume is: (4/3) * pi * R^3`. Consider (assign) for `pi` the value `3.14159`.

> Tip: Use `(4/3.0)` or `(4.0/3)` in your formula, because some languages (including C++) assume that the division's result between two integers is another integer. :)

#### Input
The input contains a value of floating point (double precision).

#### Output
The output must be a message "VOLUME" like the following example with a space before and after the equal signal. The value must be presented with 3 digits after the decimal point.

***

### Name: [Area](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/area.c)
#### Description:
Make a program that reads three floating point values: `A, B and C`. Then, calculate and show:
  * the area of the rectangled triangle that has base `A` and height `C`.
  * the area of the radius's circle `C`. `(pi = 3.14159)`
  * the area of the trapezium which has `A` and `B` by base, and `C` by height.
  * the area of ​​the square that has side `B`.
  * the area of the rectangle that has sides `A` and `B`.


#### Input:
The input file contains three double values with one digit after the decimal point.

#### Output:
The output file must contain `5` lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with `3` digits after the decimal point.

| Input Sample      | Output Sample |
| ----------- | ----------- |
| 3.0 4.0 5.2      | TRIANGULO: 7.800<br>CIRCULO: 84.949<br>TRAPEZIO: 18.200<br>QUADRADO: 16.000<br>RETANGULO: 12.000 |

**********

### Name: [The Greatest](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/the-greatest.c)
#### Description:
Make a program that reads 3 integer values and present the greatest one followed by the message **"eh o maior"**. Use the following formula:
![MaiorAB](https://latex.codecogs.com/gif.latex?MaiorAB%20%3D%20%5Cfrac%7Ba&plus;b&plus;%7Ca-b%7C%7D%7B2%7D)

#### Input
The input file contains 3 integer values.

#### Output
Print the greatest of these three values followed by a space and the message **“eh o maior”**.


|Input Samples |	Output Samples |
|------------- | --------------- |
|   7 14 106   | 106 eh o maior  |
|   217 14 6   | 217 eh o maior  |

*****
### Name: [Consumption](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/consumption.c)
#### Description:
Calculate a car's average consumption being provided the total distance traveled (in *Km*) and the spent fuel total (in *liters*).

#### Input
The input file contains two values: one integer value ***X*** representing the total distance (in ***Km***) and the second one is a floating point number ***Y***  representing the spent fuel total, with a digit after the decimal point.

#### Output
Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "***km/l***".

| Input Sample | Output Sample  |
|--------------|----------------|
| 500<br>35.0  | 14.286 *km/l*  |
| 2254<br>124.4| 18.119 *km/l*  |
|4554<br>464.6 | 9.802 *km/l*   |

****
### Name: [Distance Between Two Points](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/distance-between-points.c)
#### Description:
Read the four values corresponding to the `x` and `y` axes of two points in the plane, p<sub>1</sub> (x<sub>1</sub> , y<sub>1</sub>) and p<sub>2</sub> (x<sub>2</sub>, y<sub>2</sub>) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

Distance = ![distance](https://latex.codecogs.com/gif.latex?%5Cinline%20%5Csqrt%7B%28x_2-x_1%29%5E2&plus;%28y_2-y_1%29%5E2%7D)

#### Input
The input file contains two lines of data. The first one contains two double values: x<sub>1</sub> y<sub>1</sub> and the second one also contains two double values with one digit after the decimal point: x<sub>2</sub> y<sub>2</sub>.

#### Output
Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.

| Input Sample       | Output Sample |
|---------------     |---------------|
|1.0 7.0<br>5.0 9.0  | 4.4721        |
|-2.5 0.4<br>12.1 7.3|  16.1484      |

*********

### Name: [Distance](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/distance.c)
#### Description:
Two cars (X and Y) leave in the same direction. The car `X` leaves with a constant speed of `60 km/h` and the car `Y` leaves with a constant speed of `90 km/h`.

In one hour (`60` minutes) the car `Y` can get a distance of 30 kilometers from the `X` car, in other words, it can get away one kilometer for each `2` minutes.

Read the distance (`in km`) and calculate how long it takes (`in minutes`) for the car `Y` to take this distance in relation to the other car.

#### Input
The input file contains 1 integer value.

#### Output
Print the necessary time followed by the message "`minutos`" that means minutes in Portuguese.

| Input Sample  | Output Sample |
|---------------|---------------|
|  30           | 60 minutos    |
| 110           | 220 minutos   |
| 7             | 14 minutos    |
***********

### Name: [Fuel Spent](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/fuel-spent.c)
#### Description:
Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does **`12 Km/L`**. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in ***hours***) and the same average speed (***km/h***). In this way, you can get distance and then, calculate how many ***liters*** would be needed. Show the value with three decimal places after the point.

#### Input:
The input file contains two integers. The first one is the spent time in the trip (in ***hours***). The second one is the average speed during the trip (in ***Km/h***).

#### Output:
Print how many ***liters*** would be needed to do this trip, with three digits after the decimal point.

| Input Sample  |	Output Sample |
|---------------|---------------|
| 10 <br> 85    |    70.833     |
| 2 <br> 92     |    15.333     |
| 22 <br> 67    |   122.833     |
***************

### Name: [Banknotes](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/banknotes.c)
#### Description:
In this problem you have to read an *integer* value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are ***100, 50, 20, 10, 5, 2 and 1***. Print the read value and the list of banknotes.

#### Input:
The input file contains an *integer* value ***N*** (`0 < N < 1000000`).

#### Output:
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “`Presentation Error`”.

|Input Sample| 	Output Sample   |
|------------|------------------|
| 576        |  576 <br> 5 nota(s) de R$ 100,00<br>1 nota(s) de R$ 50,00<br>1 nota(s) de R$ 20,00<br>0 nota(s) de R$ 10,00<br>1 nota(s) de R$ 5,00<br>0 nota(s) de R$ 2,00<br>1 nota(s) de R$ 1,00 |

**************
### Name: [Time Conversion](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/time-conversion.c)
#### Description:
Read an integer value, which is the duration in *seconds* of a certain event in a factory, and inform it expressed in **hours:minutes:seconds**.

#### Input:
The input file contains an integer ***N***.

#### Output:
Print the read time in the input file (`seconds`) converted in `hours:minutes:seconds` like the following example.

| Input Sample  |	Output Sample |
|---------------|---------------|
| 556           |   0:9:16      |
| 1             |   0:0:1       |
| 140153        |   38:55:53    |

**************

### Name: [Age in Days](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/age-in-days.c)
#### Description:
Read an integer value corresponding to a person's age (in *days*) and print it in years, months and days, followed by its respective message **ano(s)**, **mes(es)**, **dia(s)**.

>Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.

#### Input:
The input file contains 1 integer value.

#### Output:
Print the output, like the following example.

| Input Sample	|  Output Sample  |
|---------------|-----------------|
|     400       |1 ano(s)<br>1 mes(es)<br>5 dia(s)|
*********

### Name: [Average 1](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/average1.c)
#### Description:
Read two floating points' values of double precision ***A*** and ***B***, corresponding to two student's grades. After this, calculate the student's average, considering that grade ***A*** has weight `3.5` and ***B*** has weight `7.5`. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “`Presentation Error`”. Don’t forget the space before and after the equal sign.

#### Input:
The input file contains `2` floating points' values with one digit after the decimal point.

#### Output:
Print the message "`MEDIA`"(average in Portuguese) and the student's average according to the following example, with 5 digits after the decimal point and with a blank space before and after the equal signal.

| Input Samples |	Output Samples  |
|---------------|-----------------|
| 5.0<br>7.1    | MEDIA = 6.43182 |
****************

### Name: [Average 2](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/average2.c)
#### Description:
Read three values (variables `A`, `B` and `C`), which are the three student's grades. Then, calculate the average, considering that grade `A` has weight `2`, grade `B` has weight `3` and the grade `C` has weight `5`. Consider that each grade can go from 0 to 10.0, always with one decimal place.

#### Input:
The input file contains `3` values of floating points (double) with one digit after the decimal point.

#### Output:
Print the message "`MEDIA`"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.

| Input Samples |	Output Samples  |
|---------------|-----------------|
| 5.0<br>6.0<br>7.0| MEDIA = 6.3 |
**************

### Name: [Banknotes and Coins](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/banknotes-and-coins.c)
#### Description:
Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of `100, 50, 20, 10, 5, 2`. The possible coins are of `1, 0.50, 0.25, 0.10, 0.05 and 0.01`. Print the message “`NOTAS:`” followed by the list of notes and the message “`MOEDAS:`” followed by the list of coins.

#### Input
The input file contains a value of floating point *N (0 ≤ N ≤ 1000000.00)*.

#### Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

| Input Sample  |	Output Sample |
|---------------|---------------|
|  576.73       | NOTAS:<br>5 nota(s) de R$ 100.00<br>1 nota(s) de R$ 50.00<br>1 nota(s) de R$ 20.00<br>0 nota(s) de R$ 10.00<br>1 nota(s) de R$ 5.00<br>0 nota(s) de R$ 2.00<br>MOEDAS:<br>1 moeda(s) de R$ 1.00<br>1 moeda(s) de R$ 0.50<br>0 moeda(s) de R$ 0.25<br>2 moeda(s) de R$ 0.10<br>0 moeda(s) de R$ 0.05<br>3 moeda(s) de R$ 0.01|
***

### Name: [Selection Test 1](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/selection-test-1.c)
#### Description:
Read 4 integer values `A, B, C and D`. Then if `B` is greater than `C` and `D` is greater than `A` and if the sum of `C` and `D` is greater than the sum of `A` and `B` and if `C` and `D` were positives values and if `A` is *even*, write the message “`Valores aceitos`” (Accepted values). Otherwise, write the message “`Valores nao aceitos`” (Values not accepted).

#### Input
Four integer numbers `A, B, C` and `D`.

#### Output
Show the corresponding message after the validation of the values​​.

|Input Sample  |	Output Sample |
|--------------|----------------|
|5 6 7 8      | Valores nao aceitos |
| 2 3 2 6     | Valores aceitos     |
****************

### Name: [Bhaskara's Formula](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/bhaskara's-formula.c)
#### Description:
Read 3 floating-point numbers. After, print the roots of *bhaskara’s formula*. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “`Impossivel calcular`”.

#### Input
Read 3 floating-point numbers (double) `A`, `B` and `C`.

#### Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.

|Input Samples	|  Output Samples |
|--------------|------------------|
|10.0 20.1 5.1 | R1 = -0.29788<br>R2 = -1.71212|
|0.0 20.0 5.0  |  Impossivel calcular |
**********

### Name: [Area of Circle](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/area-of-circle.c)
#### Description:
The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that `π = 3.14159`:

Calculate the area using the formula given in the problem description.

#### Input
The input contains a value of floating point (double precision), that is the variable R.

#### Output
Present the message "`A=`" followed by the value of the variable, as in the example bellow, with four places after the decimal point. Use all double precision variables. Like all the problems, don't forget to print the end of line after the result, otherwise you will receive "`Presentation Error`".

|Input Samples|Output Samples|
|-------------|--------------|
|2.00|  A=12.5664 |
|100.64|A=31819.3103|
****************
### Name: [Interval](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/interval.c)
#### Description:
You must make a program that read a float-point number and print a message saying in which of following intervals the number belongs: `[0,25]` `(25,50]`, `(50,75]`, `(75,100]`. If the read number is less than zero or greather than 100, the program must print the message “`Fora de intervalo`” that means *"Out of Interval"*.
>The symbol '**(**' represents greather than. For example:
>* `[0,25]` indicates numbers between 0 and 25.0000, including both.
>* `(25,50]` indicates numbers greather than 25 (25.00001) up to 50.0000000.
>
#### Input
The input file contains a floating-point number.

#### Output
The output must be a message like following example.

| Input Sample  |	Output Sample |
|---------------|---------------|
|25.01  | `Intervalo (25,50]`     |
|25.00  | `Intervalo [0,25]`      |
|100.00 | `Intervalo (75,100]`    |
|-25.02 | `Fora de intervalo`|
***********

### Name: [Snack](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/interval.c)
#### Description:
Using the following table, write a program that reads a ***code*** and the ***amount of an item***. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.
![Chart](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1038_en.png)
#### Input
The input file contains two integer numbers `X` and `Y`. `X` is the product code and `Y` is the quantity of this item according to the above table.

#### Output
The output must be a message "`Total: R$` " followed by the total value to be paid, with 2 digits after the decimal point.

| Input Sample  |	Output Sample |
|---------------|---------------|
|3 2  | `Total: R$ 10.00` |
|4 3  | `Total: R$ 6.00`  |
|2 3  | `Total: R$ 13.50`|
*************************
