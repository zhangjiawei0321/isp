//写一段opencv读取图片的代码，然后将图片转换为灰度图，再将灰度图转换为二值图
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main()
{
    Mat srcImage = imread("1.jpg");
    if (srcImage.empty())
    {
        cout << "can not load image" << endl;
        return -1;
    }
    imshow("srcImage", srcImage);
    Mat grayImage;
    cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
    imshow("grayImage", grayImage);
    Mat binaryImage;
    threshold(grayImage, binaryImage, 100, 255, THRESH_BINARY);
    imshow("binaryImage", binaryImage);
    waitKey(0);
    return 0;
}