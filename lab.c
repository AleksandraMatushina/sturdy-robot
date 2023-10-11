#include <stdio.h>
#include <math.h>
float func(float N, float M, float K) {
    return sin(fabs((M - sqrt(N)) * (N - M / (K * K + N * N / 4))));
}
void main() {
    for (float x = 0; x <= 3; x += 1.2)
    {
        for (float y = 0; y <= 1; y += 0.55)
        {
            for (float z = 1; z <= 2; z += 0.6)
            {
                float u = func(x, y, z);
                printf("x = %f ", x);
                printf("y = %f ", y);
                printf("z = %f ", z);
                printf("u(x,y,z) = %f\n", u);
