#include <stdio.h>
#include <math.h>
#include <float.h>


double formula(double x, double y, double z) {
    double koren = -sqrt(y*y + (4.0 * (x*x)/3.0));
    double drob = sin((x*x*x)-y - fabs(x*y));
    double znam = x * z;
    return koren + (drob/znam);
}

int main() {
    double x0 = 1.0, x_max = 3.0, hx = 1.3;
    double y0 = -0.4, y_max = -0.2, hy = 0.1;
    double z0 = 0.5, z_max = 1.5, hz = 0.8;
    double max_U = 0;
    double max_x = 0.0, max_y = 0.0, max_z = 0.0;
    for (double x = x0; x <= x_max; x += hx) {
        for (double y = y0; y<=y_max; y += hy) {
            for (double z = z0; z<=z_max; z += hz) {
                double U = formula(x,y,z);
                printf("%f %f %f %f\n", x, y, z, U);

                if (U > max_U) {
                    max_U = U;
                    max_x = x;
                    max_y = y;
                    max_z = z;
                }
            }
        }
    }
    printf("Max U = %f pri takih x,y,z, %f %f %f", max_U, max_x, max_y, max_z);
}



