#include <SFML/Graphics.hpp>
#include <iostream>
#include "tetris_t.h"
#define DELAY 0.5f
#define Y 18
#define mapX(x) (x)*18+28
#define mapY(y) (y)*18+31
#include <vector>
#define IDX(x,y,width) ((x)+(y)*(width))
using namespace sf;
using namespace std;

vector<int>fields(200,0);


struct Point {
    float x;
    float y;
}center={100,13};

Vector2f a[4];

int grids[4];
tetris_t* ts[5];

int main(){
    ts[0]=new _();
    ts[1]=new L();
    ts[2]=new s();
    ts[3]=new z();
    ts[4]=new tri();
    tetris_t* tmp=ts[rand()%5];
    tmp->getNextShape(grids);

    RenderWindow window(VideoMode(320,480),"tetris");
    window.setPosition(Vector2i(300,200));
    Texture t1,t2,t3;
    t1.loadFromFile("images/tiles.png");
    t2.loadFromFile("images/background.png");
    t3.loadFromFile("images/frame.png");
    Sprite s(t1), background(t2), frame(t3);

    ////color////
    int color = rand()%5*18;
    s.setTextureRect(IntRect(color,0,18,18));
    int newcolor=color;

    float timer=.0f;
    float delay =DELAY;
    Clock clock;


    while (window.isOpen()){

        float time =clock.getElapsedTime().asSeconds();
        clock.restart();
        timer+=time;

        Event event;
        while (window.pollEvent(event)){
            if(event.type==Event::Closed) window.close();

            if(event.type==Event::KeyPressed){
                switch (event.key.code){
                    case Keyboard::Up:{
                        tmp->getNextShape(grids);
                        break;}
                    case Keyboard::Right:{center.x+=18;break;}
                    case Keyboard::Left:{center.x-=18;
                        break;}
                    case Keyboard::Down:{delay=0.02f;
                        break;}
                }
            }
        }

        //////tick//////////
        if(timer>delay){
            center.y+=Y;
            timer=0;
            delay=DELAY;
        }

        /////////draw//////////
        window.clear(Color::White);
        window.draw(background);
        window.draw(frame);
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 10; ++j) {
                if(fields.at(IDX(j,i,10))){
                    s.setTextureRect(IntRect(fields.at(IDX(j,i,10))-1,0,18,18));
                    s.setPosition(mapX(j),mapY(i));
                    window.draw(s);
                }
            }
        }

        s.setTextureRect(IntRect(newcolor,0,18,18));
        for (int i = 0; i < 4; ++i) {
            a[i].x = center.x+grids[i]%4*18;
            a[i].y =center.y+ grids[i]/4*18;
            s.setPosition(a[i]);
            window.draw(s);
        }
        window.display();

        /////check end//////
        bool end = 0;
        int x,y,markedY=-1;
        for (auto & j : a) {
            x=(j.x-28)/18;
            y=(j.y-31)/18;
            if(y==19||fields.at( IDX(x,y+1,10)))
            {
                end=1;
                break;
            }
        }
        if(end){
            tmp=ts[rand()%5];
            tmp->getNextShape(grids);
            center={100,13};
            for (auto& j:a) {
                x=(j.x-28)/18;
                y=(j.y-31)/18;
                fields.at(IDX(x,y,10))=newcolor+1;
                markedY=max(markedY,y);
            }
            newcolor=rand()%5*18;

            ////check line/////
            {
                int count = 0;
                for (int j = 0; j < 10; ++j) {
                if(!fields.at(IDX(j,markedY,10))) count++;
                }
                if(count<3){
                    vector<int>::iterator from,to;
                    from=fields.begin();
                    to=fields.begin();
                    advance(from,IDX(0,markedY,10));
                    advance(to,IDX(10,markedY,10));
                   fields.erase(from,to);
                   fields.insert(fields.begin(),10,0);
                }
            }
        }





    }
    for (int i = 0; i < 5; ++i) {
        free(ts[i]);
    }
}
