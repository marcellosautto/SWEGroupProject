#pragma once

//OpenCV Lib
#include<opencv2/opencv.hpp>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include <opencv2/core/cvstd.hpp>

//SFML Lib
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

//C++ Lib
#include<iostream>
#include<array>
#include<Windows.h>
#include<string>
#include<fstream>

using namespace std;

//Define

#define PROG_NAME "Gazer_Eyes"

//Global Commands
#ifndef GUARD_H
#define GUARD_H

void errorMessageExit(string message);
void message(string message, string title);

#endif 
