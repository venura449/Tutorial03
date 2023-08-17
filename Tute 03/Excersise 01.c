# include <stdio.h>
/* This  code Take input from user and calculate Area and circumference of that circle
-----------------------------------------------------------------------------------------------------------------------------------------
*/
int PI=3.14159;
int radius;             // Assign Varibale to take the value of radius
float Area;             //  Asssign varibale to take the value of calculated Area
float Circumference;    //Assign the varibale to take the valuwe of Calculated Circumference
float Diameter;
 int main()
{
    printf("Enter the radius : ");           // This Line prints the text " Enter the Radius"
    scanf("%d",&radius);//calculating area and circumference of circle using formula A=pi*r^2,
    Area=2*3.14*radius*radius;           // This line Calculate the Area using Pi*(radius)^2
    Circumference = 2 * 3.14 * radius ;  // This line calculate the circumference using 2*pi*radius formula
    Diameter=2*radius;
    printf("Diameter is %.2f\n",Diameter); // This Line prints the Diameter of the circle
    printf("Circumferance is %f\n",Circumference); // This Line prints the Circumference
    printf("Area is %.2f ",Area);//This line prints the Area Limiting to two decimal points
	return 0;

}
