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

### Name: [Average 3](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/average3.c)
BeeCrowd problem : [1040](https://www.beecrowd.com.br/judge/en/problems/view/1040)
#### Description:

Read four numbers (`N1, N2, N3, N4`), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights `2`, `3`, `4` e `1` respectively, for these 4 scores and print the message "`Media:` " (Average), followed by the calculated result. If the average was `7.0 or more`, print the message "`Aluno aprovado.`" (Approved Student). If the average was `less than 5.0`, print the message: "`Aluno reprovado.`" (Reproved Student). If the average was `between 5.0 and 6.9`, including these, the program must print the message "`Aluno em exame.`" (In exam student).

In case of exam, read one more score. Print the message "`Nota do exame: `" (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by `2`) and print the message “`Aluno aprovado.`” (Approved student) in case of average `5.0 or more`) or "`Aluno reprovado.`" (Reproved student) in case of average `4.9 or less`. For these 2 cases (approved or reproved after the exam) print the message "`Media final: `" (Final average) followed by the final average for this student in the last line.

#### Input
The input contains four floating point numbers that represent the students' grades.

#### Output
Print all the answers with one digit after the decimal point.

| Input Sample  |	Output Sample   |
|---------------|-----------------|
|2.0 4.0 7.5 8.0<br>6.4 | Media: 5.4<br>Aluno em exame.<br>Nota do exame: 6.4<br>Aluno aprovado.<br>Media final: 5.9|
|2.0 6.5 4.0 9.0  | Media: 4.8<br>Aluno reprovado.|
|9.0 4.0 8.5 9.0  |Media: 7.3<br>Aluno aprovado.|
|9.0 4.0 8.5 9.0|Media: 7.3<br>Aluno aprovado.|
************************************************

### Name: [Coordinates of a Point](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/coordinates-of-point.c)
BeeCrowd problem : [1041](https://www.beecrowd.com.br/judge/en/problems/view/1041)
#### Description:

Write an algorithm that reads two floating values (**x** and **y**), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (***x = y = 0***).

![Coordinates](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1041.png)

>If the point is at the origin, write the message "**`Origem`**".
>If the point is at ***X*** axis write "**`Eixo X`**", else if the point is at ***Y*** axis write "**`Eixo Y`**".

#### Input
The input contains the coordinates of a point.

#### Output
The output should display the quadrant in which the point is.

| Input Sample  |	Output Sample |
|---|---|
| 4.5 -2.2      |Q4     |
|0.1 0.1    |Q1 |
|0.0 0.0  |Origem|
*****************************

### Name: [Simple Sort](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/simple-sort.c)
BeeCrowd problem : [1042](https://www.beecrowd.com.br/judge/en/problems/view/1042)
#### Description:
Read three integers and sort them in ***ascending*** order. After, print these values in *ascending order*, *a blank line* and then *the values in the sequence as they were readed*.

#### Input
The input contains three integer numbers.

#### Output
Present the output as requested above.

| Input Sample  |	Output Sample |
|-------|--------|
| 7 21 -14 |-14<br>7<br>21<br><br>7<br>21<br>-14|
| -14 21 7  | -14<br>7<br>21<br><br>-14<br>21<br>7  |
*************

### Name: [Triangle](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/triangle.c)
BeeCrowd problem : [1043](https://www.beecrowd.com.br/judge/en/problems/view/1043)
#### Description:
Read three point floating values (`A`, `B` and `C`) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:

**`Perimetro = XX.X`**

If it is not possible, calculate the area of the trapezium which basis `A` and `B` and `C` as height, and print the message:

**`Area = XX.X`**
#### Input
The input file has tree floating point numbers.
#### Output
Print the result with one digit after the decimal point.

|Input Sample |	Output Sample |
|-----|--------|
|6.0 4.0 2.0|Area = 10.0|
|6.0 4.0 2.1|Perimetro = 12.1|
*************

### Name: [Multiples](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/multiples.c)
BeeCrowd [#1044](https://www.beecrowd.com.br/judge/en/problems/view/1044)
#### Description:
Read two nteger values (`A` and `B`). After, the program should print the message "**`Sao Multiplos`**" (are multiples) or "**`Nao sao Multiplos`**" (aren’t multiples), corresponding to the read values.

#### Input
The input has two integer numbers.

#### Output
Print the relative message to the input as stated above.

|Input Sample	| Output Sample |
|-------------|---------------|
|6 24   | Sao Multiplos |
| 6 25  | Nao sao Multiplos |
*****************

### Name: [Triangle Types](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/triangle-types.c)
BeeCrowd [#1045](https://www.beecrowd.com.br/judge/en/problems/view/1045)
#### Description:
Read 3 double numbers (`A`, `B` and `C`) representing the sides of a triangle and *arrange them in decreasing order*, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:
* if **`A ≥ B + C`**, write the message: **`NAO FORMA TRIANGULO`**
* if **`A2 = B2 + C2`**, write the message: **`TRIANGULO RETANGULO`**
* if **`A2 > B2 + C2`**, write the message: **`TRIANGULO OBTUSANGULO`**
* if **`A2 < B2 + C2`**, write the message: **`TRIANGULO ACUTANGULO`**
* if the three sides are the same size, write the message: **`TRIANGULO EQUILATERO`**
* if only two sides are the same and the third one is different, write the message: **`TRIANGULO ISOSCELES`**

#### Input
The input contains three double numbers, `A (0 < A)` , `B (0 < B)` and `C (0 < C)`.

#### Output
Print all the classifications of the triangle presented in the input.

| Input Samples |	Output Samples |
|---------------|----------------|
|7.0 5.0 7.0    |TRIANGULO ACUTANGULO<br>TRIANGULO ISOSCELES|
|6.0 6.0 10.0   |TRIANGULO OBTUSANGULO<br>TRIANGULO ISOSCELES|
|6.0 6.0 6.0    |TRIANGULO ACUTANGULO<br>TRIANGULO EQUILATERO|
|5.0 7.0 2.0    |NAO FORMA TRIANGULO|
|6.0 8.0 10.0   |TRIANGULO RETANGULO|
*************************************

### Name: [Game Time](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/game-time.c)
BeeCrowd [#1046](https://www.beecrowd.com.br/judge/en/problems/view/1046)
#### Description:

Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of *24 hours*. The message must be printed in portuguese “**`O JOGO DUROU X HORA(S)`**” that means “*THE GAME LASTED X HOUR(S)*”

#### Input
Two integer numbers representing the start and end time of a game.

#### Output
Print the duration of the game as in the sample output.

|Input Sample |	Output Sample |
|-------|--------|
|16 2 |O JOGO DUROU 10 HORA(S)|
|0 0  |O JOGO DUROU 24 HORA(S)|
|2 16 |O JOGO DUROU 14 HORA(S)|
*******************************

### Name: [Game Time With Minutes](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/game-time.c)
BeeCrowd [#1047](https://www.beecrowd.com.br/judge/en/problems/view/1047)
#### Description:

Read the start time and end time of a game, in hours and minutes (**initial hour, initial minute, final hour, final minute**). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

> Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

#### Input
Four integer numbers representing the start and end time of the game.

#### Output
Print the duration of the game in hours and minutes, in this format: “**`O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)`**” . Which means: the game lasted `XXX hour(s)` and `YYY minutes`.

|Input Sample |	Output Sample |
|-------------|----------------|
| 7 8 9 10    |O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)|
|7 7 7 7    |O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)|
|7 10 8 9|O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)|
************************************************

### Name: [Salary Increase](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/salary-increase.c)
BeeCrowd [#1048](https://www.beecrowd.com.br/judge/en/problems/view/1048)
#### Description:

The company ABC decided to give a salary increase to its employees, according to the following table:

|Salary |	Readjustment Rate |
|-------|:-------------------:|
|0 - 400.00<br>400.01 - 800.00<br>800.01 - 1200.00<br>1200.01 - 2000.00<br>Above 2000.00|15%<br>12%<br>10%<br>7%<br>4%|

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
#### Input
The input contains only a floating-point number, with 2 digits after the decimal point.
#### Output
Print **3** messages followed by the corresponding numbers (see example) informing `the new salary`, `the among of money earned` and `the percentual obtained by the employee`.   

Note:   
**`Novo salario:`  means "New Salary"**   
**`Reajuste ganho:` means "Money earned"**   
**`Em percentual:` means "In percentage"**   
| Input Sample |	Output Sample |
|--------|-----------------|
|400.00  |Novo salario: 460.00<br>Reajuste ganho: 60.00<br>Em percentual: 15 %|
|800.01 |Novo salario: 880.01<br>Reajuste ganho: 80.00<br>Em percentual: 10 %|
|2000.00|Novo salario: 2140.00<br>Reajuste ganho: 140.00<br>Em percentual: 7 %|
*************

### Name: [DDD](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/ddd.c)
BeeCrowd [#1050](https://www.beecrowd.com.br/judge/en/problems/view/1050)
#### Description:

Read an integer number that is the code number for phone dialing. Then, print the destination according to the following table:

![DDD list](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1050.png)


If the input number isn’t found in the above table, the output must be:    
***DDD nao cadastrado***
That means “DDD not found” in Portuguese language.

#### Input
The input consists in a unique integer number.

#### Output
Print the city name corresponding to the input DDD. Print DDD nao cadastrado if doesn't exist corresponding DDD to the typed number.

| Input Sample  |	Output Sample |
|---------------|---------------|
|11   | Sao Paulo |
*******************

### Name: [Animal](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/animal.c)
BeeCrowd [#1049](https://www.beecrowd.com.br/judge/en/problems/view/1049)
#### Description:

In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.
![animal](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1049_b.png)

#### Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

#### Output
Print the animal name according to the given input.

| Input Samples	|  Output Samples |
|--------------|-------------------|
|vertebrado<br>mamifero<br>onivoro| homem |
|vertebrado<br>ave<br>carnivoro|aguia|
|invertebrado<br>anelideo<br>onivoro|minhoca|
*****************************************

### Name: [Taxes](https://github.com/SabidMahmud/programming-problem-solving/blob/main/BeeCrowd/beginner/taxes.c)
BeeCrowd [#1051](https://www.beecrowd.com.br/judge/en/problems/view/1051)
#### Description:
In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation. The currency of this country is Rombus, whose symbol is `R$`.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.

![Taxes](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1051_en.png)

Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.

Input
The input contains only a float-point number, with 2 digits after the decimal point.

Output
Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point. If the value is up to 2000, print the message "**`Isento`**".

| Input Samples |	Outputs Samples |
|--------------|------------------|
|3002.00|R$ 80.36|
|1701.12|Isento|
|4520.00|R$ 355.60|
******************