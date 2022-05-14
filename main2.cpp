/*
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main() {
    Mat image = imread("/Users/yasserroot/Documents/ISEP/C++/Project/morphology.png");
    imshow("Original Image", image);


    int down_width = 300;
    int down_height = 200;
    Mat resized_down;

    //resize down
    resize(image, resized_down, Size(down_width, down_height), INTER_LINEAR);

    int up_width = 600;
    int up_height = 400;
    Mat resized_up;

    //resize up
    resize(image, resized_up, Size(up_width, up_height), INTER_LINEAR);


    imshow("Resized Down by defining height and width", resized_down);
    waitKey();
    imshow("Resized Up image by defining height and width", resized_up);
    waitKey();

    destroyAllWindows();

    return 0;
}*/
