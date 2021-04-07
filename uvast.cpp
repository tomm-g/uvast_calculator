#include <stdio.h>
#include <math.h>

// UVAST v0.1 
// Project to automate the boring uvast equations in mechanics

float final_velocity_time(float u, float a, float t){

    float v = u + (a * t);

    return v;
}

float distance_initial_time(float u, float a, float t){

    float s = (u * t) + (0.5*a*(t*t));

    return s;
}

float acceleration_initial_final_time(float u, float v, float t){

    float a = (v - u)/t;

    return a;
}
float time_initial_final_acceleration(float u, float v, float a){

    float t = (v - u)/a;

    return a;
}

float initial_final_acceleration_time(float v, float a, float t){

    float u = v - (a*t);

    return u;
}

float initial_displacement_acceleration_time(float s, float a, float t){

    float u = (s - 0.5*a*(t*t))/t;

    return u;
}

float acceleration_displacement_initial_time(float s, float u, float t){

    float a = (2*(s - u*t))/(t*t);

    return a;
}

void time_initial_acceleration_displacement(float u, float a, float s){

    printf("Might want to still to pen and paper for this one\n");
    printf("It might get a little awkward\n");
}

int main(){

float u; // initial velocity
float v; // final velocity
float a; // acceleration
float s; // displacement
float t; // time

float final_value;

printf("**********************************************************\n");
printf("Please select a suitable equation from the following list:\n");
printf("1. v = u + at\n2. s = ut + 1/2at*t\n3. a = (v-u)/t\n4. t = (v-u)/a\n");
printf("5. u = v-(a*t)\n6. u = (s - 1/2at*t)/t\n7. a = (2(s-ut))/t*t\n");
printf("\n\nEnter Number:\n");


int input;
scanf("%d", &input);

printf("\n\nPlease input required variables\n(for unknowns adn/or unused variable please enter a zero)\n");

printf("\nu = ");
scanf("%f", &u);

printf("\nv = ");
scanf("%f", &v);

printf("\na = ");
scanf("%f", &a);

printf("\ns = ");
scanf("%f", &s);

printf("\nt = ");
scanf("%f", &t);

if (input < 1 || input > 7){
    printf("Please enter a valid input");
}

else if (input == 1){
   printf("\nv = %f", final_velocity_time(u, a, t));
}

else if (input == 2){
    printf("\ns = %f", distance_initial_time(u, a, t));
}

else if (input == 3){
    printf("\na = %f", acceleration_initial_final_time(u, v, t));
}

else if (input == 4){
    printf("\nt = %f", time_initial_final_acceleration(u,v,a));
}

else if (input == 5){
    printf("\nu = %f", initial_final_acceleration_time(v, a, t));
}

else if (input == 6){
    printf("\nu = %f", initial_displacement_acceleration_time(s, a, t));
}

else if (input == 7){
    printf("\na = %f", acceleration_displacement_initial_time(s, u, t));
}





}