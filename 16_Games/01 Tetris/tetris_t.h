//
// Created by tao_xiang on 9/25/19.
//

#ifndef INC_01_TETRIS_TETRIS_T_H
#define INC_01_TETRIS_TETRIS_T_H

#include <stdint.h>

class tetris_t {
protected:

     uint8_t current_type;

public:
    tetris_t() : current_type(0) {}

    virtual void getNextShape(int* arr)=0;
};

class _:public tetris_t{

    int shapes[2][4]=
            {
            0,1,2,3,
            0,4,8,12
            };

public:


     void getNextShape(int *arr) override {
        current_type++;
        current_type%=2;
        arr[0]=shapes[current_type][0];
        arr[1]=shapes[current_type][1];
        arr[2]=shapes[current_type][2];
        arr[3]=shapes[current_type][3];
    }
};

class L:public tetris_t{
 int shapes[4][4]={
            0,4,8,9,
            4,5,6,8,
            4,5,9,13,
            6,8,9,10
    };
public:


    void getNextShape(int *arr) override {
        current_type++;
        current_type%=4;
        arr[0]=shapes[current_type][0];
        arr[1]=shapes[current_type][1];
        arr[2]=shapes[current_type][2];
        arr[3]=shapes[current_type][3];
    }
};

class tri:public tetris_t{
 int shapes[4][4]={
      0,4,5,8,
      4,5,6,9,
      2,5,6,10,
      5,8,9,10
    };
public:
    void getNextShape(int *arr) override {
        current_type++;
        current_type%=4;
        arr[0]=shapes[current_type][0];
        arr[1]=shapes[current_type][1];
        arr[2]=shapes[current_type][2];
        arr[3]=shapes[current_type][3];
    }

};
class s:public tetris_t{
    int shapes[2][4]={
            0,4,5,9,
            5,6,8,9
    };
public:
    void getNextShape(int *arr) override {
        current_type++;
        current_type%=2;
        arr[0]=shapes[current_type][0];
        arr[1]=shapes[current_type][1];
        arr[2]=shapes[current_type][2];
        arr[3]=shapes[current_type][3];
    }
};
class z:public tetris_t{
    int shapes[2][4]={
            1,4,5,8,
            4,5,9,10
    };
public:
    void getNextShape(int *arr) override {
        current_type++;
        current_type%=2;
        arr[0]=shapes[current_type][0];
        arr[1]=shapes[current_type][1];
        arr[2]=shapes[current_type][2];
        arr[3]=shapes[current_type][3];
    }
};


#endif //INC_01_TETRIS_TETRIS_T_H
