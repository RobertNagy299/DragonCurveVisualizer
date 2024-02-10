<h1>C - Dragon curve visualizer</h1>

 <!--### [YouTube Demonstration](https://youtu.be/7eJexJVCqJo)-->

<h2>Description</h2>
Project consists of a simple C program that uses the paint.h header, linked lists, and recursion. The program starts drawing the dragon fractal on the terminal. The number of iterations can be changed in the source code.
<br />


<h2>Languages and Utilities Used</h2>

- <b>C</b> 
- <b>paint.h file</b>
- <b>paint.c file</b>
- <b>gfx.h file</b>
- <b>gfx.c file</b>

<h2>Environments Used </h2>

- <b>Debian 12 (Linux)</b>
- <b>Visual Studio Code</b>

<h2>Program walk-through:</h2>

<p align="left">
Open the folder in Visual Studio Code, open a new terminal, and enter the following command to compile the code:<pre>gcc fractal.c paint.c gfx.c -lX11 -lm -o program -Wall </pre> 
<b>Note</b>: "program" is just an arbitrary name I chose for the compiled file, you can change it to whatever you want it to be. Just make sure that when you run the code using ./program, you run it with your own file name instead, like this: ./yourfilename<br><br>
<img src="https://i.imgur.com/04KZCnd.png" height="80%" width="80%" alt="Linux command to compile fractal.c"/>
<br />
<br />
Run the binary:  <br/>
<img src="https://i.imgur.com/tcTyMUE.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
Enter the number of passes: <br/>
<img src="https://i.imgur.com/nCIbXbg.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
Confirm your selection:  <br/>
<img src="https://i.imgur.com/cdFHBiU.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
Wait for process to complete (may take some time):  <br/>
<img src="https://i.imgur.com/JL945Ga.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
Sanitization complete:  <br/>
<img src="https://i.imgur.com/K71yaM2.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
Observe the wiped disk:  <br/>
<img src="https://i.imgur.com/AeZkvFQ.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
</p>

<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
