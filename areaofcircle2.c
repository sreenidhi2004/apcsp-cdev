#include <stdio.h>

#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }else {
printf("enter the start radius:\n");
scanf("%f",a);
printf("enter the reps: \n");
scanf("%d", b);
} 
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main

float areaOfCircle(float radius)
	{
float area = M_PI*radius*radius;
	return area;
	}



int main(int argc, char* argv[]) 

 {

float start = 5.2;
int reps = 3;


  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

 printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);

  // add your code below to call areaOfCircle function with values between
  // start and end

        for ( int i = 0; i < reps; i++)
        
        {
                float area = areaOfCircle(start + i);
                printf("The area of a circle with radius %f\n is %f\n", start + i, area); 
  }
}


