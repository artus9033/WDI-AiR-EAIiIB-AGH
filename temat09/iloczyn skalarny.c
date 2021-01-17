///skonczone

#include <stdio.h>
#include <stdlib.h>

float iloczyn_skalarny(float vec1[],float vec2[], size_t len){
    float result = 0;
    for(int i = 0; i < len; i++){
        result += vec1[i]*vec2[i];
    }
   return result;
}

int main(){
    float vec1[] = {0,2,3};
    float vec2[] = {0,7,0};
    printf("%f\n",iloczyn_skalarny(vec1,vec2, 3));
    float vec3[] = {1,2,3,4,5};
    float vec4[] = {6,7,8,9,10};
    printf("%f",iloczyn_skalarny(vec3,vec4, 5));
    return 0;
}
