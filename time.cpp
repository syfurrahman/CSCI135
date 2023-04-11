/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: LAB 10 D
Add a new function
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
The function should produce and return a new TimeSlot for
the movie nextMovie, scheduled immediately after the time slot ts.
*/

#include <iostream>

using namespace std;

class Time { 
public:
    int h;
    int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

Time addMinutes(Time time0, int min) {
    Time new_time;

    new_time.h = time0.h + (time0.m+min)/60;

    new_time.m = (time0.m+min)%60;

    return new_time;
}

int minutesSinceMidnight(Time time) {

    int nums_of_mins = time.h*60+time.m;

    return nums_of_mins;
}

int minutesUntil(Time earlier, Time later) {

    int hourdif = later.h - earlier.h;

    int minutesdif = later.m - earlier.m ;

    return hourdif*60+minutesdif;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {

    TimeSlot nextTimeSlot;

    nextTimeSlot.movie = nextMovie;
    
    nextTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);

    return nextTimeSlot;
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts) {

    Time endingTime= addMinutes(ts.startTime , ts.movie.duration);

    printMovie (ts.movie);

    cout << "[starts at " << ts.startTime.h  << ":" << ts.startTime.m << ", ends by " << endingTime.h << ":" << endingTime.m << "]" << endl;
}

int main() {
    Time first;
    Time second;
    int minutes;
    Time now;    // creates a new variable (or object)
    now.h = 17;  // assigns its hours field
    now.m = 45; 

    cout << "Enter time : " << endl;
    cin >> first.h >> first.m;

    cout <<"Enter time: " << endl;
    cin >> second.h >> second.m;

    cout << "Enter mins: " << endl;
    cin >> minutes;

    cout << minutesSinceMidnight(first) << endl;

    cout << minutesUntil(first, second) << endl;

    addMinutes(now, minutes);

    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}};
    TimeSlot afternoon = {movie2, {14, 45}};
    TimeSlot late =  {movie2, {21, 45}};

    printTimeSlot(morning);
    printTimeSlot(daytime);
    printTimeSlot(evening);
    printTimeSlot(afternoon);
    printTimeSlot(late);

    TimeSlot nextTimeSlot;
    nextTimeSlot = scheduleAfter(morning,movie1);

    printTimeSlot(nextTimeSlot);

    return 0;
}