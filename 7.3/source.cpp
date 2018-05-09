#include <iostream>

using std::cin;
using std::cout;
using std::endl;


struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

//protos
void display_box(const box);
void calculate_box_volume(box *);


int main()
{
    box my_box = {"box co", 10, 10, 10, 0};
    box *my_box_point = &my_box;
    display_box(my_box);
    calculate_box_volume(my_box_point);
    display_box(my_box);

    return 0;
}

//definitions
void display_box(const box my_box)
{
    cout << "Maker: " << my_box.maker << endl;
    cout << "Height: " << my_box.height << endl;
    cout << "Width: " << my_box.width << endl;
    cout << "Length: " << my_box.length << endl;
    cout << "Volume: " << my_box.volume << endl;
}

void calculate_box_volume(box *my_box)
{
    my_box->volume = (my_box->height)*(my_box->width)*(my_box->length);
}