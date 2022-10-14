/*

DDA stands for Digital Differential Analyzer. It is an incremental method of scan conversion of line.
In this method calculation is performed at each step but by using results of previous steps.

Advantages of DDA
-> It is a faster method than method of using direct use of line equation.
-> This method does not use multiplication theorem.
-> It allows us to detect the change in the value of x and y ,so plotting of same point twice is not possible.
-> This method gives overflow indication when a point is repositioned.
-> It is an easy method because each step involves just two additions

Disadvantages of DDA
-> It involves floating point additions rounding off is done. Accumulations of round off error cause accumulation of error.
-> Rounding off operations and floating point operations consumes a lot of time.
-> It is more suitable for generating line using the software. But it is less suited for hardware implementation.

More refrences can be found here: https://www.javatpoint.com/computer-graphics-dda-algorithm

Q. Implement DDA algorithm for drawing a line segment between two given points.

*/