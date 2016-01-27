// mouse_move_example.cpp

#include<opencv2/highgui/highgui.hpp>

#include<iostream>

// function prototypes ////////////////////////////////////////////////////////////////////////////
void mouseMoveCallback(int event, int x, int y, int flags, void* userData);

///////////////////////////////////////////////////////////////////////////////////////////////////
int main(void) {

    cv::Mat image(600, 800, CV_8UC3, cv::Scalar(0.0, 0.0, 0.0));         // declare a blank image

    cv::namedWindow("blank image");

    cv::setMouseCallback("blank image", mouseMoveCallback);

    cv::imshow("blank image", image);

    cv::waitKey(0);

    return(0);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
void mouseMoveCallback(int event, int x, int y, int flags, void* userData) {

    if (event == CV_EVENT_MOUSEMOVE) {
        std::cout << "mouse move at " << x << ", " << y << "\n";
    }

}

