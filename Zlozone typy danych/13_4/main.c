#include <stdio.h>
#include <stdlib.h>

struct WeatherInfo{
    float temperature;
    float humidity;
    float windSpeed;
};

int main()
{
    struct WeatherInfo w1 = {36.6, 44.1, 10.1};
    struct WeatherInfo w2 = {-18.6, 89.1, 20.1};

    printf("Temperature: %.2f\nHumidity: %.2f\nWind Speed: %.2f\n\n", w1.temperature, w1.humidity, w1.windSpeed);
    printf("Temperature: %.2f\nHumidity: %.2f\nWind Speed: %.2f\n", w2.temperature, w2.humidity, w2.windSpeed);

    return 0;
}
