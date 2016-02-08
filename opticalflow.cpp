#include "opencv2/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/videoio/videoio.hpp"
#include "opencv2/video/tracking.hpp"


int main(int argc, char** argv){
    VideoCapture cap(-1);
    if (!cap.isOpened())
    {
        cout << "Cannot open camera" << endl;
        return -1;
    }

    namedWindow("Output",CV_WINDOW_AUTOSIZE);
    while (1)
    {
        Mat frame;
        bool bSuccess = cap.read(frame);
        if (!bSuccess)
        {
            cout << "Cannot read a frame from camera" << endl;
            break;
        }
        imshow("Output", frame);
    }