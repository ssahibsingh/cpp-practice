#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string title, float rating)
    {
        this->title = title;
        this->rating = rating;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string title, float rating, float videoLength) : CWH(title, rating)
    {
        this->videoLength = videoLength;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Video Length: " << videoLength << endl;
        cout << "Rating: " << rating << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string title, float rating, int words) : CWH(title, rating)
    {
        this->words = words;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Words: " << words << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}