#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include <opencv4/opencv2/opencv.hpp>     
#include <opencv4/opencv2/core.hpp> // Basic OpenCV structures (cv::Mat, Scalar)
#include <opencv4/opencv2/videoio.hpp>
#include <opencv4/opencv2/highgui.hpp>  // OpenCV window I/O

using namespace std; 
using namespace cv;


int main(int argc, char** argv) {

    VideoCapture video("/Users/aamaya3/Desktop/ek210 vids/IMG_4776.mp4");
    
    if (!video.isOpened()) {
        cerr << "Error: Could not open video file." << endl;
        return 1;
    }
}t