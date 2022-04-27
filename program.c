#include<stdio.h>
void CalcArea(int);
void CalcPerimeter(int);
void CalcVolume(int);
int main(){
	int l;
	
	printf("Enter the LENGTH of the cube: \n");
	scanf("%d", &l);
	
	CalcArea(l);
	CalcPerimeter(l);
	CalcVolume(l);
	
	return 0;
}
void CalcArea(int l){
	int area;
	area = 6*l*l;
	printf("\nThe area of the cube is: %d", area);
}
void CalcPerimeter(int l){
	int perimeter;
	perimeter = 12*l;
	printf("\nThe perimeter of the cube is: %d", perimeter);
}
void CalcVolume(int l){
	int volume;
	volume = l*l*l;
	printf("\nThe volume of the cube is: %d", volume);
}
