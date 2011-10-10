#ifndef MUSIC_H
#define MUSIC_H

#include "Keyboard.h"

class Music
{
    public:


static void alleMeineEntchen(const Keyboard& keyboard)
{
    //takt = 800000;

    keyboard.play("c1", 1.0/8);
    keyboard.play("d1", 1.0/8);
    keyboard.play("e1", 1.0/8);
    keyboard.play("f1", 1.0/8);
    keyboard.play("g1", 1.0/4);
    keyboard.play("g1", 1.0/4);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("g1", 1.0/2);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("g1", 1.0/2);
    keyboard.play("f1", 1.0/8);
    keyboard.play("f1", 1.0/8);
    keyboard.play("f1", 1.0/8);
    keyboard.play("f1", 1.0/8);
    keyboard.play("e1", 1.0/4);
    keyboard.play("e1", 1.0/4);
    keyboard.play("d1", 1.0/8);
    keyboard.play("d1", 1.0/8);
    keyboard.play("d1", 1.0/8);
    keyboard.play("d1", 1.0/8);
    keyboard.play("c1", 1.0/1);
    keyboard.playPause(1.0/1);
}

static void mario(const Keyboard& keyboard)
{
    //takt = 600000;

    keyboard.play("e2", 1.0/8);
    keyboard.play("e2", 1.0/8);
    keyboard.playPause(1.0/8);
    keyboard.play("e2", 1.0/8);
    keyboard.playPause(1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("e2", 1.0/4);

    keyboard.play("g2", 1.0/4);
    keyboard.playPause(1.0/4);
    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/4);

    keyboard.play("c2", 3.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.playPause(1.0/4);
    keyboard.play("e1", 3.0/8);

    keyboard.play("a1", 1.0/4);
    keyboard.play("h1", 1.0/4);
    keyboard.play("a1#", 1.0/8);
    keyboard.play("a1", 1.0/4);

    keyboard.play("g1", 1.0/6);
    keyboard.play("e2", 1.0/6);
    keyboard.play("g2", 1.0/6);
    keyboard.play("a2", 1.0/4);
    keyboard.play("f2", 1.0/8);
    keyboard.play("g2", 1.0/8);

    keyboard.playPause(1.0/8);
    keyboard.play("e2", 1.0/4);
    keyboard.play("c2", 1.0/8);
    keyboard.play("d2", 1.0/8);
    keyboard.play("h1", 3.0/8);

    keyboard.play("c2", 3.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.playPause(1.0/4);
    keyboard.play("e1", 3.0/8);

    keyboard.play("a1", 1.0/4);
    keyboard.play("h1", 1.0/4);
    keyboard.play("a1#", 1.0/8);
    keyboard.play("a1", 1.0/4);

    keyboard.play("g1", 1.0/6);
    keyboard.play("e2", 1.0/6);
    keyboard.play("g2", 1.0/6);
    keyboard.play("a2", 1.0/4);
    keyboard.play("f2", 1.0/8);
    keyboard.play("g2", 1.0/8);

    keyboard.playPause(1.0/8);
    keyboard.play("e2", 1.0/4);
    keyboard.play("c2", 1.0/8);
    keyboard.play("d2", 1.0/8);
    keyboard.play("h1", 3.0/8);

    keyboard.playPause(1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2#", 1.0/8);
    keyboard.play("f2", 1.0/8);
    keyboard.play("d2#", 1.0/4);
    keyboard.play("e2", 1.0/8);

    keyboard.playPause(1.0/8);
    keyboard.play("g1#", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.playPause(1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("d2", 1.0/8);

    keyboard.playPause(1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2#", 1.0/8);
    keyboard.play("f2", 1.0/8);
    keyboard.play("d2#", 1.0/4);
    keyboard.play("e2", 1.0/8);

    /*
    keyboard.playPause(1.0/8);
    keyboard.play("h2", 1.0/4);
    keyboard.play("h2", 1.0/8);
    keyboard.play("h2", 1.0/2);

    keyboard.playPause(1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2#", 1.0/8);
    keyboard.play("f2", 1.0/8);
    keyboard.play("d2#", 1.0/4);
    keyboard.play("e2", 1.0/8);

    keyboard.playPause(1.0/8);
    keyboard.play("g1#", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.playPause(1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("d2", 1.0/8);

    keyboard.playPause(1.0/4);
    keyboard.play("d2#", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("d2", 3.0/8);

    keyboard.play("c2", 1.0/2);
    keyboard.playPause(1.0/2);

    keyboard.playPause(1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2#", 1.0/8);
    keyboard.play("f2", 1.0/8);
    keyboard.play("d2#", 1.0/4);
    keyboard.play("e2", 1.0/8);

    keyboard.playPause(1.0/8);
    keyboard.play("g1#", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.playPause(1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("d2", 1.0/8);

    ledOn(0);
    keyboard.playPause(1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2#", 1.0/8);
    keyboard.play("f2", 1.0/8);
    keyboard.play("d2#", 1.0/4);
    keyboard.play("e2", 1.0/8);

    keyboard.playPause(1.0/8);
    keyboard.play("h2", 1.0/4);
    keyboard.play("h2", 1.0/8);
    keyboard.play("h2", 1.0/2);

    keyboard.playPause(1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2#", 1.0/8);
    keyboard.play("f2", 1.0/8);
    keyboard.play("d2#", 1.0/4);
    keyboard.play("e2", 1.0/8);

    keyboard.playPause(1.0/8);
    keyboard.play("g1#", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.playPause(1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("d2", 1.0/8);

    keyboard.playPause(1.0/4);
    keyboard.play("d2#", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("d2", 3.0/8);

    keyboard.play("c2", 3.0/8);
    keyboard.play("g3", 1.0/8);
    keyboard.play("g3", 1.0/4);
    keyboard.play("c3", 1.0/4);
    */
    keyboard.playPause(1.0/1);
}

static void fuerElise(const Keyboard& keyboard)
{
    //takt = 1600000;

    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);

    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("h1", 1.0/16);
    keyboard.play("d2", 1.0/16);
    keyboard.play("c2", 1.0/16);

    keyboard.play("a1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("c1", 1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("a1", 1.0/16);

    keyboard.play("h1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("g1#", 1.0/16);
    keyboard.play("h1", 1.0/16);

    keyboard.play("c2", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);

    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("h1", 1.0/16);
    keyboard.play("d2", 1.0/16);
    keyboard.play("c2", 1.0/16);

    keyboard.play("a1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("c1", 1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("a1", 1.0/16);

    keyboard.play("h1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("d1", 1.0/16);
    keyboard.play("c2", 1.0/16);
    keyboard.play("h1", 1.0/16);

    // repeat left out

    keyboard.play("a1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("h1", 1.0/16);
    keyboard.play("c2", 1.0/16);
    keyboard.play("d2", 1.0/16);

    keyboard.play("e2", 3.0/16);
    keyboard.play("g1", 1.0/16);
    keyboard.play("f2", 1.0/16);
    keyboard.play("e2", 1.0/16);

    keyboard.play("d2", 3.0/16);
    keyboard.play("f1", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("d2", 1.0/16);

    keyboard.play("c2", 3.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("d2", 1.0/16);
    keyboard.play("c2", 1.0/16);

    keyboard.play("h1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("e1", 1.0/16);

    keyboard.play("e2", 1.0/16);
    keyboard.play("e2", 1.0/16);
    // E6 deleted
    keyboard.playPause(1.0/16);
    keyboard.play("d2#", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);

    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);

    // beginning again

    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("h1", 1.0/16);
    keyboard.play("d2", 1.0/16);
    keyboard.play("c2", 1.0/16);

    keyboard.play("a1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("c1", 1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("a1", 1.0/16);

    keyboard.play("h1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("g1#", 1.0/16);
    keyboard.play("h1", 1.0/16);

    keyboard.play("c2", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);

    keyboard.play("e2", 1.0/16);
    keyboard.play("d2#", 1.0/16);
    keyboard.play("e2", 1.0/16);
    keyboard.play("h1", 1.0/16);
    keyboard.play("d2", 1.0/16);
    keyboard.play("c2", 1.0/16);

    keyboard.play("a1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("c1", 1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("a1", 1.0/16);

    keyboard.play("h1", 1.0/8);
    keyboard.playPause(1.0/16);
    keyboard.play("d1", 1.0/16);
    keyboard.play("c2", 1.0/16);
    keyboard.play("h1", 1.0/16);

    keyboard.play("a1", 1.0/4);
    keyboard.playPause(1.0/4);
}

static void weAreTheChampions(const Keyboard& keyboard)
{
    //takt = 900000;

    keyboard.play("d2", 1.0/2);
    keyboard.play("c2#", 1.0/8);
    keyboard.play("d2", 1.0/8);

    keyboard.play("c2#", 1.0/4);
    keyboard.play("a1", 3.0/8);
    keyboard.play("f1#", 1.0/8);

    keyboard.play("h1", 1.0/4);
    keyboard.play("f1#", 1.0/2);

    keyboard.playPause(5.0/8);
    keyboard.play("a1", 1.0/8);

    keyboard.play("d2", 1.0/2);
    keyboard.play("e2", 1.0/8);
    keyboard.play("f2#", 1.0/8);

    keyboard.play("a2", 1.0/4);
    keyboard.play("f2#", 1.0/4);
    keyboard.play("h1", 1.0/8);
    keyboard.play("c2#", 1.0/8);

    keyboard.play("h1", 1.0/2);
    keyboard.playPause(1.0/4);

    keyboard.playPause(6.0/8);

    keyboard.play("h1", 3.0/8);
    keyboard.play("a1", 1.0/4);
    keyboard.play("h1", 1.0/8);

    keyboard.play("a1", 3.0/8);
    keyboard.play("g1", 3.0/8);

    keyboard.play("g2", 3.0/8);
    keyboard.play("f2#", 1.0/4);
    keyboard.play("g2", 1.0/8);

    keyboard.play("f2#", 3.0/8);
    keyboard.play("e2", 3.0/8);

    keyboard.play("f2#", 3.0/8);
    keyboard.play("d2", 1.0/4);
    keyboard.play("g2", 1.0/8);

    keyboard.play("f2#", 3.0/8);
    keyboard.play("d2", 1.0/4);
    keyboard.play("g2", 1.0/8);

    keyboard.play("f2", 3.0/8);
    keyboard.play("d2", 1.0/4);
    keyboard.play("g2", 1.0/8);

    keyboard.play("f2", 3.0/8);
    keyboard.play("d2", 3.0/8);

    keyboard.playPause(1.0/2);
    keyboard.play("c2", 1.0/8);
    keyboard.play("a1", 1.0/8);

    keyboard.play("d2", 3.0/8);
    keyboard.playPause(1.0/1);
}

static void tetris(const Keyboard& keyboard)
{
    //takt = 800000;

    keyboard.play("e2", 1.0/4);
    keyboard.play("h1", 1.0/8);
    keyboard.play("c1", 1.0/8);

    keyboard.play("d2", 1.0/4);
    keyboard.play("c2", 1.0/8);
    keyboard.play("h1", 1.0/8);

    keyboard.play("a1", 1.0/4);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("e2", 1.0/4);
    keyboard.play("d2", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("h1", 3.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("d2", 1.0/4);
    keyboard.play("e2", 1.0/4);

    keyboard.play("c2", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("a1", 1.0/4);
    keyboard.playPause(1.0/4);

    keyboard.playPause(1.0/8);
    keyboard.play("d2", 1.0/4);
    keyboard.play("f2", 1.0/8);

    keyboard.play("a2", 1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2", 1.0/8);

    keyboard.play("e2", 3.0/8);
    keyboard.play("c1", 1.0/8);

    keyboard.play("e2", 1.0/4);
    keyboard.play("d2", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("h1", 1.0/4);
    keyboard.play("h1", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("d2", 1.0/4);
    keyboard.play("e2", 1.0/4);

    keyboard.play("c2", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("a1", 1.0/4);
    keyboard.playPause(1.0/4);

    // Mittelteil
    keyboard.play("e2", 1.0/2);
    keyboard.play("c2", 1.0/2);
    keyboard.play("d2", 1.0/2);
    keyboard.play("h1", 1.0/2);
    keyboard.play("c2", 1.0/2);
    keyboard.play("a1", 1.0/2);
    keyboard.play("g1#", 1.0/2);
    keyboard.play("h1", 1.0/2);
    keyboard.play("e2", 1.0/2);
    keyboard.play("c2", 1.0/2);
    keyboard.play("d2", 1.0/2);
    keyboard.play("h1", 1.0/2);
    keyboard.play("c2", 1.0/4);
    keyboard.play("e2", 1.0/4);
    keyboard.play("a2", 1.0/2);
    keyboard.play("g2#", 3.0/4);

    // theme again

    keyboard.play("e2", 1.0/4);
    keyboard.play("h1", 1.0/8);
    keyboard.play("c1", 1.0/8);

    keyboard.play("d2", 1.0/4);
    keyboard.play("c2", 1.0/8);
    keyboard.play("h1", 1.0/8);

    keyboard.play("a1", 1.0/4);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("e2", 1.0/4);
    keyboard.play("d2", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("h1", 3.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("d2", 1.0/4);
    keyboard.play("e2", 1.0/4);

    keyboard.play("c2", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("a1", 1.0/4);
    keyboard.playPause(1.0/4);

    keyboard.playPause(1.0/8);
    keyboard.play("d2", 1.0/4);
    keyboard.play("f2", 1.0/8);

    keyboard.play("a2", 1.0/4);
    keyboard.play("g2", 1.0/8);
    keyboard.play("f2", 1.0/8);

    keyboard.play("e2", 3.0/8);
    keyboard.play("c1", 1.0/8);

    keyboard.play("e2", 1.0/4);
    keyboard.play("d2", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("h1", 1.0/4);
    keyboard.play("h1", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("d2", 1.0/4);
    keyboard.play("e2", 1.0/4);

    keyboard.play("c2", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("a1", 1.0/4);
    keyboard.playPause(5.0/4);
}

static void nationalhymne(const Keyboard& keyboard)
{
    //takt = 1200000;

    keyboard.play("f1", 3.0/8);
    keyboard.play("g1", 1.0/8);

    keyboard.play("a1", 1.0/4);
    keyboard.play("g1", 1.0/4);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("g1", 1.0/8);
    keyboard.play("e1", 1.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("d2", 1.0/4);
    keyboard.play("c2", 1.0/4);

    keyboard.play("a1#", 1.0/4);
    keyboard.play("a1", 1.0/4);
    keyboard.play("g1", 1.0/4);
    keyboard.play("a1", 1.0/8);
    keyboard.play("f1", 1.0/8);

    keyboard.play("c2", 1.0/2);
    // repeat first part
    keyboard.play("f1", 3.0/8);
    keyboard.play("g1", 1.0/8);

    keyboard.play("a1", 1.0/4);
    keyboard.play("g1", 1.0/4);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("g1", 1.0/8);
    keyboard.play("e1", 1.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("d2", 1.0/4);
    keyboard.play("c2", 1.0/4);

    keyboard.play("a1#", 1.0/4);
    keyboard.play("a1", 1.0/4);
    keyboard.play("g1", 1.0/4);
    keyboard.play("a1", 1.0/8);
    keyboard.play("f1", 1.0/8);

    keyboard.play("c2", 1.0/2);
    // end of repetition
    keyboard.play("g1", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("g1", 1.0/8);
    keyboard.play("e1", 1.0/8);
    keyboard.play("c1", 1.0/4);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("a1", 1.0/4);

    keyboard.play("g1", 1.0/8);
    keyboard.play("e1", 1.0/8);
    keyboard.play("c1", 1.0/4);
    keyboard.play("c2", 1.0/4);
    keyboard.play("a1#", 1.0/4);

    keyboard.play("a1", 3.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("h1", 1.0/4);
    keyboard.play("h1", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("c2", 1.0/2);
    keyboard.play("f2", 3.0/8);
    keyboard.play("e2", 1.0/8);

    keyboard.play("e2", 1.0/8);
    keyboard.play("d2", 1.0/8);
    keyboard.play("c2", 1.0/4);
    keyboard.play("d2", 3.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("c2", 1.0/8);
    keyboard.play("a1#", 1.0/8);
    keyboard.play("a1", 1.0/4);
    keyboard.play("g1", 3.0/8);
    keyboard.play("a1", 1.0/16);
    keyboard.play("a1#", 1.0/16);

    keyboard.play("c2", 1.0/8);
    keyboard.play("d2", 1.0/8);
    keyboard.play("a1#", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("a1", 1.0/8);
    keyboard.play("g1", 1.0/8);

    keyboard.play("f1", 1.0/2);
    keyboard.playPause(1.0/1);
}

static void missionImpossible(const Keyboard& keyboard)
{
    //takt = 600000;

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("c2", 1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("f1#", 1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("c2", 1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("f1#", 1.0/4);

    keyboard.play("a2#", 1.0/8);
    keyboard.play("g2", 1.0/8);
    keyboard.play("d2", 1.0/2);
    keyboard.playPause(1.0/2);

    keyboard.play("a2#", 1.0/8);
    keyboard.play("g2", 1.0/8);
    keyboard.play("c2#", 1.0/2);
    keyboard.playPause(1.0/2);

    keyboard.play("a2#", 1.0/8);
    keyboard.play("g2", 1.0/8);
    keyboard.play("c2", 1.0/2);
    keyboard.playPause(1.0/2);

    keyboard.play("a1#", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.playPause(1.0/1);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("c2", 1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("f1#", 1.0/4);

    keyboard.play("g1", 1.0/4);

    /*
    ledOn(1);
    keyboard.playPause(1.0/4);
    keyboard.play("a1#", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("e2", 1.0/2);
    keyboard.playPause(1.0/4);

    keyboard.playPause(1.0/4);
    keyboard.play("a1#", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("d5#", 1.0/2);
    keyboard.playPause(1.0/4);

    ledOn(2);
    keyboard.playPause(1.0/4);
    keyboard.play("d2", 1.0/8);
    keyboard.play("c5#", 1.0/8);
    keyboard.playPause(3.0/4);

    //refrain
    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("c2", 1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("f1#", 1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("a1#", 1.0/4);
    keyboard.play("c2", 1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("f1", 1.0/4);
    keyboard.play("f1#", 1.0/4);

    keyboard.play("g1", 1.0/1);
    */
    keyboard.playPause(1.0/1);
}

static  void kleineNachtmusik(const Keyboard& keyboard)
{
    //takt = 800000;

    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("d1", 1.0/8);
    keyboard.play("g1", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("d1", 1.0/8);

    keyboard.play("g1", 1.0/8);
    keyboard.play("d1", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("h1", 1.0/8);
    keyboard.play("d2", 1.0/4);
    keyboard.playPause(1.0/4);

    keyboard.play("c2", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/4);
    keyboard.playPause(1.0/8);
    keyboard.play("a1", 1.0/8);

    keyboard.play("c2", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("f1#", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("d1", 1.0/4);
    keyboard.playPause(1.0/4);

    keyboard.play("g1", 1.0/4);
    keyboard.play("g1", 3.0/8);
    keyboard.play("h1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("g1", 1.0/8);

    keyboard.play("g1", 1.0/8);
    keyboard.play("f1#", 1.0/8);
    keyboard.play("f1#", 3.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("f1#", 1.0/8);

    keyboard.play("a1", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 3.0/8);
    keyboard.play("h1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("g1", 1.0/8);

    keyboard.play("g1", 1.0/8);
    keyboard.play("f1#", 1.0/8);
    keyboard.play("f1#", 3.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("f1#", 1.0/8);

    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/16);
    keyboard.play("f1#", 1.0/16);
    keyboard.play("e1", 1.0/16);
    keyboard.play("f1#", 1.0/16);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("h1", 1.0/16);
    keyboard.play("a1", 1.0/16);
    keyboard.play("g1", 1.0/16);
    keyboard.play("a1", 1.0/16);

    keyboard.play("h1", 1.0/8);
    keyboard.play("h1", 1.0/8);
    keyboard.play("d2", 1.0/16);
    keyboard.play("c2", 1.0/16);
    keyboard.play("h1", 1.0/16);
    keyboard.play("c2", 1.0/16);
    keyboard.play("d2", 1.0/4);
    keyboard.playPause(1.0/4);

    keyboard.play("d2", 1.0/2);
    keyboard.play("e2", 1.0/2);

    keyboard.play("d2", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("c2", 1.0/4);
    keyboard.play("c2", 1.0/8);
    keyboard.play("h1", 1.0/8);
    keyboard.play("h1", 1.0/4);

    keyboard.play("h1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/4);
    keyboard.play("g1", 1.0/8);
    keyboard.play("f1#", 1.0/8);
    keyboard.play("e1", 1.0/8);
    keyboard.play("f1#", 1.0/8);

    keyboard.play("g1", 1.0/4);
    keyboard.play("a1", 1.0/4);
    keyboard.play("h1", 1.0/2);
    keyboard.playPause(1.0/4);

    keyboard.play("d2", 1.0/2);
    keyboard.play("e2", 1.0/2);

    keyboard.play("d2", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("c2", 1.0/8);
    keyboard.play("h2", 1.0/8);
    keyboard.play("h2", 1.0/8);
    keyboard.play("h2", 1.0/8);

    keyboard.play("h2", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);

    keyboard.play("g1", 1.0/8);
    keyboard.play("f1#", 1.0/8);
    keyboard.play("e1", 1.0/8);
    keyboard.play("f1#", 1.0/8);

    keyboard.play("g1", 1.0/2);
    keyboard.playPause(1.0/2);

    keyboard.playPause(1.0/1);
}

static void haenschenklein(const Keyboard& keyboard)
{
    //takt = 800000;

    keyboard.play("c2", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/4);

    keyboard.play("a1#", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/4);

    keyboard.play("f1", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1#", 1.0/8);

    keyboard.play("c2", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("c2", 1.0/4);

    keyboard.play("c2", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/4);

    keyboard.play("a1#", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/4);

    keyboard.play("f1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("f1", 1.0/4);
    keyboard.playPause(1.0/4);

    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/8);

    keyboard.play("g1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1#", 1.0/4);

    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/8);

    keyboard.play("a1", 1.0/8);
    keyboard.play("a1#", 1.0/8);
    keyboard.play("c2", 1.0/4);

    keyboard.play("c2", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("a1", 1.0/4);

    keyboard.play("a1#", 1.0/8);
    keyboard.play("g1", 1.0/8);
    keyboard.play("g1", 1.0/4);

    keyboard.play("f1", 1.0/8);
    keyboard.play("a1", 1.0/8);
    keyboard.play("c2", 1.0/8);
    keyboard.play("c2", 1.0/8);

    keyboard.play("f1", 1.0/4);
    keyboard.playPause(1.0/4);
}

};

#endif // MUSIC_H
