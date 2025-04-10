#ifndef GUARD_DATA_BARD_MUSIC_MOVES_H
#define GUARD_DATA_BARD_MUSIC_MOVES_H

#include "constants/moves.h"

const u16 gNumBardWords_Moves = MOVES_COUNT;

const struct BardSound gBardSounds_Moves[MOVES_COUNT][6] =
    {[MOVE_NONE] =
         {
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_POUND] =
         {
             {.songLengthId = 33},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_KARATE_CHOP] =
         {
             {.songLengthId = 44},
             {.songLengthId = 29},
             {.songLengthId = 14},
             {.songLengthId = 29},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DOUBLE_SLAP] =
         {
             {.songLengthId = 42},
             {.songLengthId = 10},
             {.songLengthId = 2},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_COMET_PUNCH] =
         {
             {.songLengthId = 29},
             {.songLengthId = 11},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MEGA_PUNCH] =
         {
             {.songLengthId = 3},
             {.songLengthId = 42},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PAY_DAY] =
         {
             {.songLengthId = 5},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FIRE_PUNCH] =
         {
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 42},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ICE_PUNCH] =
         {
             {.songLengthId = 44},
             {.songLengthId = 29},
             {.songLengthId = 14},
             {.songLengthId = 29},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_THUNDER_PUNCH] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SCRATCH] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_VICE_GRIP] =
         {
             {.songLengthId = 20},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GUILLOTINE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 44},
             {.songLengthId = 14},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RAZOR_WIND] =
         {
             {.songLengthId = 5},
             {.songLengthId = 48},
             {.songLengthId = 15},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SWORDS_DANCE] =
         {
             {.songLengthId = 26},
             {.songLengthId = 48},
             {.songLengthId = 1},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CUT] =
         {
             {.songLengthId = 42},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GUST] =
         {
             {.songLengthId = 44},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WING_ATTACK] =
         {
             {.songLengthId = 12},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WHIRLWIND] =
         {
             {.songLengthId = 44},
             {.songLengthId = 29},
             {.songLengthId = 14},
             {.songLengthId = 29},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FLY] =
         {
             {.songLengthId = 18},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BIND] =
         {
             {.songLengthId = 20},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SLAM] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_VINE_WHIP] =
         {
             {.songLengthId = 18},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_STOMP] =
         {
             {.songLengthId = 29},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DOUBLE_KICK] =
         {
             {.songLengthId = 42},
             {.songLengthId = 44},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MEGA_KICK] =
         {
             {.songLengthId = 3},
             {.songLengthId = 42},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_JUMP_KICK] =
         {
             {.songLengthId = 44},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROLLING_KICK] =
         {
             {.songLengthId = 24},
             {.songLengthId = 12},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SAND_ATTACK] =
         {
             {.songLengthId = 0},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HEADBUTT] =
         {
             {.songLengthId = 9},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HORN_ATTACK] =
         {
             {.songLengthId = 24},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FURY_ATTACK] =
         {
             {.songLengthId = 48},
             {.songLengthId = 12},
             {.songLengthId = 42},
             {.songLengthId = 2},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HORN_DRILL] =
         {
             {.songLengthId = 24},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TACKLE] =
         {
             {.songLengthId = 0},
             {.songLengthId = 36},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BODY_SLAM] =
         {
             {.songLengthId = 29},
             {.songLengthId = 12},
             {.songLengthId = 2},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WRAP] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TAKE_DOWN] =
         {
             {.songLengthId = 3},
             {.songLengthId = 35},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_THRASH] =
         {
             {.songLengthId = 48},
             {.songLengthId = 2},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DOUBLE_EDGE] =
         {
             {.songLengthId = 44},
             {.songLengthId = 36},
             {.songLengthId = 10},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TAIL_WHIP] =
         {
             {.songLengthId = 5},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_POISON_STING] =
         {
             {.songLengthId = 30},
             {.songLengthId = 44},
             {.songLengthId = 14},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TWINEEDLE] =
         {
             {.songLengthId = 15},
             {.songLengthId = 12},
             {.songLengthId = 36},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PIN_MISSILE] =
         {
             {.songLengthId = 15},
             {.songLengthId = 17},
             {.songLengthId = 36},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LEER] =
         {
             {.songLengthId = 14},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BITE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GROWL] =
         {
             {.songLengthId = 33},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROAR] =
         {
             {.songLengthId = 26},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SING] =
         {
             {.songLengthId = 12},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SUPERSONIC] =
         {
             {.songLengthId = 39},
             {.songLengthId = 48},
             {.songLengthId = 27},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SONIC_BOOM] =
         {
             {.songLengthId = 27},
             {.songLengthId = 17},
             {.songLengthId = 39},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DISABLE] =
         {
             {.songLengthId = 17},
             {.songLengthId = 3},
             {.songLengthId = 36},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ACID] =
         {
             {.songLengthId = 0},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_EMBER] =
         {
             {.songLengthId = 9},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FLAMETHROWER] =
         {
             {.songLengthId = 0},
             {.songLengthId = 26},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MIST] =
         {
             {.songLengthId = 17},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WATER_GUN] =
         {
             {.songLengthId = 29},
             {.songLengthId = 50},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HYDRO_PUMP] =
         {
             {.songLengthId = 18},
             {.songLengthId = 24},
             {.songLengthId = 42},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SURF] =
         {
             {.songLengthId = 48},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ICE_BEAM] =
         {
             {.songLengthId = 18},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BLIZZARD] =
         {
             {.songLengthId = 15},
             {.songLengthId = 50},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PSYBEAM] =
         {
             {.songLengthId = 18},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BUBBLE_BEAM] =
         {
             {.songLengthId = 42},
             {.songLengthId = 36},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_AURORA_BEAM] =
         {
             {.songLengthId = 27},
             {.songLengthId = 26},
             {.songLengthId = 44},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_HYPER_BEAM] =
         {
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PECK] =
         {
             {.songLengthId = 9},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DRILL_PECK] =
         {
             {.songLengthId = 17},
             {.songLengthId = 11},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SUBMISSION] =
         {
             {.songLengthId = 42},
             {.songLengthId = 17},
             {.songLengthId = 11},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LOW_KICK] =
         {
             {.songLengthId = 24},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_COUNTER] =
         {
             {.songLengthId = 33},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SEISMIC_TOSS] =
         {
             {.songLengthId = 18},
             {.songLengthId = 17},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_STRENGTH] =
         {
             {.songLengthId = 50},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ABSORB] =
         {
             {.songLengthId = 42},
             {.songLengthId = 26},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MEGA_DRAIN] =
         {
             {.songLengthId = 3},
             {.songLengthId = 44},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LEECH_SEED] =
         {
             {.songLengthId = 12},
             {.songLengthId = 14},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GROWTH] =
         {
             {.songLengthId = 48},
             {.songLengthId = 24},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RAZOR_LEAF] =
         {
             {.songLengthId = 5},
             {.songLengthId = 48},
             {.songLengthId = 12},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SOLAR_BEAM] =
         {
             {.songLengthId = 24},
             {.songLengthId = 48},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_POISON_POWDER] =
         {
             {.songLengthId = 30},
             {.songLengthId = 44},
             {.songLengthId = 33},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_STUN_SPORE] =
         {
             {.songLengthId = 44},
             {.songLengthId = 26},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SLEEP_POWDER] =
         {
             {.songLengthId = 12},
             {.songLengthId = 33},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PETAL_DANCE] =
         {
             {.songLengthId = 9},
             {.songLengthId = 44},
             {.songLengthId = 2},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_STRING_SHOT] =
         {
             {.songLengthId = 50},
             {.songLengthId = 12},
             {.songLengthId = 27},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DRAGON_RAGE] =
         {
             {.songLengthId = 0},
             {.songLengthId = 27},
             {.songLengthId = 5},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_FIRE_SPIN] =
         {
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 15},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_THUNDER_SHOCK] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 27},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_THUNDERBOLT] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 26},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_THUNDER_WAVE] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_THUNDER] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROCK_THROW] =
         {
             {.songLengthId = 27},
             {.songLengthId = 24},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_EARTHQUAKE] =
         {
             {.songLengthId = 48},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FISSURE] =
         {
             {.songLengthId = 17},
             {.songLengthId = 50},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DIG] =
         {
             {.songLengthId = 17},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TOXIC] =
         {
             {.songLengthId = 27},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CONFUSION] =
         {
             {.songLengthId = 44},
             {.songLengthId = 41},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PSYCHIC] =
         {
             {.songLengthId = 18},
             {.songLengthId = 15},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HYPNOSIS] =
         {
             {.songLengthId = 17},
             {.songLengthId = 24},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MEDITATE] =
         {
             {.songLengthId = 9},
             {.songLengthId = 17},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_AGILITY] =
         {
             {.songLengthId = 42},
             {.songLengthId = 17},
             {.songLengthId = 17},
             {.songLengthId = 14},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_QUICK_ATTACK] =
         {
             {.songLengthId = 39},
             {.songLengthId = 17},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RAGE] =
         {
             {.songLengthId = 3},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TELEPORT] =
         {
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 26},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_NIGHT_SHADE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MIMIC] =
         {
             {.songLengthId = 17},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SCREECH] =
         {
             {.songLengthId = 48},
             {.songLengthId = 13},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DOUBLE_TEAM] =
         {
             {.songLengthId = 44},
             {.songLengthId = 44},
             {.songLengthId = 12},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RECOVER] =
         {
             {.songLengthId = 12},
             {.songLengthId = 44},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HARDEN] =
         {
             {.songLengthId = 27},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MINIMIZE] =
         {
             {.songLengthId = 15},
             {.songLengthId = 15},
             {.songLengthId = 18},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SMOKESCREEN] =
         {
             {.songLengthId = 26},
             {.songLengthId = 14},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CONFUSE_RAY] =
         {
             {.songLengthId = 27},
             {.songLengthId = 45},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WITHDRAW] =
         {
             {.songLengthId = 17},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DEFENSE_CURL] =
         {
             {.songLengthId = 14},
             {.songLengthId = 11},
             {.songLengthId = 50},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BARRIER] =
         {
             {.songLengthId = 5},
             {.songLengthId = 14},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LIGHT_SCREEN] =
         {
             {.songLengthId = 18},
             {.songLengthId = 12},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HAZE] =
         {
             {.songLengthId = 3},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_REFLECT] =
         {
             {.songLengthId = 12},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FOCUS_ENERGY] =
         {
             {.songLengthId = 26},
             {.songLengthId = 44},
             {.songLengthId = 11},
             {.songLengthId = 48},
             {.songLengthId = 12},
             NULL_BARD_SOUND,
         },
     [MOVE_BIDE] =
         {
             {.songLengthId = 11},
             {.songLengthId = 50},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_METRONOME] =
         {
             {.songLengthId = 9},
             {.songLengthId = 24},
             {.songLengthId = 24},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MIRROR_MOVE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 50},
             {.songLengthId = 41},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SELF_DESTRUCT] =
         {
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_EGG_BOMB] =
         {
             {.songLengthId = 9},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LICK] =
         {
             {.songLengthId = 17},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SMOG] =
         {
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SLUDGE] =
         {
             {.songLengthId = 44},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BONE_CLUB] =
         {
             {.songLengthId = 24},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FIRE_BLAST] =
         {
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WATERFALL] =
         {
             {.songLengthId = 29},
             {.songLengthId = 48},
             {.songLengthId = 29},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CLAMP] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SWIFT] =
         {
             {.songLengthId = 17},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SKULL_BASH] =
         {
             {.songLengthId = 42},
             {.songLengthId = 51},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPIKE_CANNON] =
         {
             {.songLengthId = 20},
             {.songLengthId = 0},
             {.songLengthId = 29},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CONSTRICT] =
         {
             {.songLengthId = 27},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_AMNESIA] =
         {
             {.songLengthId = 2},
             {.songLengthId = 14},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_KINESIS] =
         {
             {.songLengthId = 15},
             {.songLengthId = 12},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SOFT_BOILED] =
         {
             {.songLengthId = 27},
             {.songLengthId = 30},
             {.songLengthId = 11},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HI_JUMP_KICK] =
         {
             {.songLengthId = 18},
             {.songLengthId = 44},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GLARE] =
         {
             {.songLengthId = 5},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DREAM_EATER] =
         {
             {.songLengthId = 14},
             {.songLengthId = 12},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_POISON_GAS] =
         {
             {.songLengthId = 30},
             {.songLengthId = 27},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BARRAGE] =
         {
             {.songLengthId = 48},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LEECH_LIFE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 18},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LOVELY_KISS] =
         {
             {.songLengthId = 44},
             {.songLengthId = 44},
             {.songLengthId = 12},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_SKY_ATTACK] =
         {
             {.songLengthId = 18},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TRANSFORM] =
         {
             {.songLengthId = 0},
             {.songLengthId = 26},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BUBBLE] =
         {
             {.songLengthId = 44},
             {.songLengthId = 36},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DIZZY_PUNCH] =
         {
             {.songLengthId = 17},
             {.songLengthId = 14},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPORE] =
         {
             {.songLengthId = 26},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FLASH] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PSYWAVE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPLASH] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ACID_ARMOR] =
         {
             {.songLengthId = 0},
             {.songLengthId = 17},
             {.songLengthId = 27},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CRABHAMMER] =
         {
             {.songLengthId = 2},
             {.songLengthId = 0},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_EXPLOSION] =
         {
             {.songLengthId = 9},
             {.songLengthId = 24},
             {.songLengthId = 44},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_FURY_SWIPES] =
         {
             {.songLengthId = 48},
             {.songLengthId = 12},
             {.songLengthId = 18},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BONEMERANG] =
         {
             {.songLengthId = 24},
             {.songLengthId = 48},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_REST] =
         {
             {.songLengthId = 9},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROCK_SLIDE] =
         {
             {.songLengthId = 27},
             {.songLengthId = 18},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HYPER_FANG] =
         {
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SHARPEN] =
         {
             {.songLengthId = 27},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CONVERSION] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TRI_ATTACK] =
         {
             {.songLengthId = 18},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SUPER_FANG] =
         {
             {.songLengthId = 39},
             {.songLengthId = 48},
             {.songLengthId = 1},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SLASH] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SUBSTITUTE] =
         {
             {.songLengthId = 42},
             {.songLengthId = 17},
             {.songLengthId = 39},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_STRUGGLE] =
         {
             {.songLengthId = 42},
             {.songLengthId = 36},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SKETCH] =
         {
             {.songLengthId = 9},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TRIPLE_KICK] =
         {
             {.songLengthId = 17},
             {.songLengthId = 36},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_THIEF] =
         {
             {.songLengthId = 12},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPIDER_WEB] =
         {
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 9},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MIND_READER] =
         {
             {.songLengthId = 18},
             {.songLengthId = 12},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_NIGHTMARE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FLAME_WHEEL] =
         {
             {.songLengthId = 3},
             {.songLengthId = 14},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SNORE] =
         {
             {.songLengthId = 24},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CURSE] =
         {
             {.songLengthId = 48},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FLAIL] =
         {
             {.songLengthId = 5},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CONVERSION_2] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 44},
             {.songLengthId = 39},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_AEROBLAST] =
         {
             {.songLengthId = 5},
             {.songLengthId = 24},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_COTTON_SPORE] =
         {
             {.songLengthId = 29},
             {.songLengthId = 29},
             {.songLengthId = 26},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_REVERSAL] =
         {
             {.songLengthId = 12},
             {.songLengthId = 48},
             {.songLengthId = 36},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPITE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_POWDER_SNOW] =
         {
             {.songLengthId = 33},
             {.songLengthId = 48},
             {.songLengthId = 24},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PROTECT] =
         {
             {.songLengthId = 24},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MACH_PUNCH] =
         {
             {.songLengthId = 27},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SCARY_FACE] =
         {
             {.songLengthId = 3},
             {.songLengthId = 12},
             {.songLengthId = 3},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FAINT_ATTACK] =
         {
             {.songLengthId = 3},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SWEET_KISS] =
         {
             {.songLengthId = 14},
             {.songLengthId = 17},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BELLY_DRUM] =
         {
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SLUDGE_BOMB] =
         {
             {.songLengthId = 43},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MUD_SLAP] =
         {
             {.songLengthId = 44},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_OCTAZOOKA] =
         {
             {.songLengthId = 27},
             {.songLengthId = 44},
             {.songLengthId = 40},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPIKES] =
         {
             {.songLengthId = 18},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ZAP_CANNON] =
         {
             {.songLengthId = 0},
             {.songLengthId = 1},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FORESIGHT] =
         {
             {.songLengthId = 26},
             {.songLengthId = 20},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DESTINY_BOND] =
         {
             {.songLengthId = 9},
             {.songLengthId = 15},
             {.songLengthId = 12},
             {.songLengthId = 27},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PERISH_SONG] =
         {
             {.songLengthId = 9},
             {.songLengthId = 17},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ICY_WIND] =
         {
             {.songLengthId = 18},
             {.songLengthId = 12},
             {.songLengthId = 15},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DETECT] =
         {
             {.songLengthId = 12},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BONE_RUSH] =
         {
             {.songLengthId = 24},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LOCK_ON] =
         {
             {.songLengthId = 27},
             {.songLengthId = 29},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_OUTRAGE] =
         {
             {.songLengthId = 33},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SANDSTORM] =
         {
             {.songLengthId = 0},
             {.songLengthId = 26},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GIGA_DRAIN] =
         {
             {.songLengthId = 17},
             {.songLengthId = 42},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ENDURE] =
         {
             {.songLengthId = 9},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CHARM] =
         {
             {.songLengthId = 21},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROLLOUT] =
         {
             {.songLengthId = 26},
             {.songLengthId = 33},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FALSE_SWIPE] =
         {
             {.songLengthId = 27},
             {.songLengthId = 18},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SWAGGER] =
         {
             {.songLengthId = 2},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MILK_DRINK] =
         {
             {.songLengthId = 17},
             {.songLengthId = 14},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPARK] =
         {
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FURY_CUTTER] =
         {
             {.songLengthId = 48},
             {.songLengthId = 12},
             {.songLengthId = 42},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_STEEL_WING] =
         {
             {.songLengthId = 14},
             {.songLengthId = 13},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MEAN_LOOK] =
         {
             {.songLengthId = 12},
             {.songLengthId = 36},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ATTRACT] =
         {
             {.songLengthId = 42},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SLEEP_TALK] =
         {
             {.songLengthId = 14},
             {.songLengthId = 29},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HEAL_BELL] =
         {
             {.songLengthId = 14},
             {.songLengthId = 10},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RETURN] =
         {
             {.songLengthId = 12},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PRESENT] =
         {
             {.songLengthId = 9},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FRUSTRATION] =
         {
             {.songLengthId = 44},
             {.songLengthId = 3},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SAFEGUARD] =
         {
             {.songLengthId = 3},
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PAIN_SPLIT] =
         {
             {.songLengthId = 3},
             {.songLengthId = 15},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SACRED_FIRE] =
         {
             {.songLengthId = 3},
             {.songLengthId = 17},
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_MAGNITUDE] =
         {
             {.songLengthId = 0},
             {.songLengthId = 15},
             {.songLengthId = 39},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DYNAMIC_PUNCH] =
         {
             {.songLengthId = 18},
             {.songLengthId = 0},
             {.songLengthId = 17},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MEGAHORN] =
         {
             {.songLengthId = 3},
             {.songLengthId = 42},
             {.songLengthId = 26},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DRAGON_BREATH] =
         {
             {.songLengthId = 0},
             {.songLengthId = 27},
             {.songLengthId = 11},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_BATON_PASS] =
         {
             {.songLengthId = 42},
             {.songLengthId = 27},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ENCORE] =
         {
             {.songLengthId = 27},
             {.songLengthId = 24},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PURSUIT] =
         {
             {.songLengthId = 48},
             {.songLengthId = 39},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RAPID_SPIN] =
         {
             {.songLengthId = 0},
             {.songLengthId = 15},
             {.songLengthId = 15},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SWEET_SCENT] =
         {
             {.songLengthId = 14},
             {.songLengthId = 11},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_IRON_TAIL] =
         {
             {.songLengthId = 18},
             {.songLengthId = 27},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_METAL_CLAW] =
         {
             {.songLengthId = 9},
             {.songLengthId = 36},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_VITAL_THROW] =
         {
             {.songLengthId = 18},
             {.songLengthId = 36},
             {.songLengthId = 24},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MORNING_SUN] =
         {
             {.songLengthId = 26},
             {.songLengthId = 14},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SYNTHESIS] =
         {
             {.songLengthId = 15},
             {.songLengthId = 42},
             {.songLengthId = 15},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MOONLIGHT] =
         {
             {.songLengthId = 39},
             {.songLengthId = 18},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HIDDEN_POWER] =
         {
             {.songLengthId = 15},
             {.songLengthId = 9},
             {.songLengthId = 33},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CROSS_CHOP] =
         {
             {.songLengthId = 27},
             {.songLengthId = 29},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TWISTER] =
         {
             {.songLengthId = 17},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RAIN_DANCE] =
         {
             {.songLengthId = 3},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SUNNY_DAY] =
         {
             {.songLengthId = 42},
             {.songLengthId = 14},
             {.songLengthId = 5},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CRUNCH] =
         {
             {.songLengthId = 48},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MIRROR_COAT] =
         {
             {.songLengthId = 9},
             {.songLengthId = 48},
             {.songLengthId = 24},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_PSYCH_UP] =
         {
             {.songLengthId = 18},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_EXTREME_SPEED] =
         {
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ANCIENT_POWER] =
         {
             {.songLengthId = 3},
             {.songLengthId = 12},
             {.songLengthId = 33},
             {.songLengthId = 50},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_SHADOW_BALL] =
         {
             {.songLengthId = 0},
             {.songLengthId = 24},
             {.songLengthId = 27},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FUTURE_SIGHT] =
         {
             {.songLengthId = 39},
             {.songLengthId = 48},
             {.songLengthId = 18},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROCK_SMASH] =
         {
             {.songLengthId = 27},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WHIRLPOOL] =
         {
             {.songLengthId = 48},
             {.songLengthId = 39},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BEAT_UP] =
         {
             {.songLengthId = 12},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FAKE_OUT] =
         {
             {.songLengthId = 3},
             {.songLengthId = 33},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_UPROAR] =
         {
             {.songLengthId = 44},
             {.songLengthId = 26},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_STOCKPILE] =
         {
             {.songLengthId = 27},
             {.songLengthId = 20},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SPIT_UP] =
         {
             {.songLengthId = 17},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SWALLOW] =
         {
             {.songLengthId = 27},
             {.songLengthId = 24},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HEAT_WAVE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HAIL] =
         {
             {.songLengthId = 5},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TORMENT] =
         {
             {.songLengthId = 24},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FLATTER] =
         {
             {.songLengthId = 0},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WILL_O_WISP] =
         {
             {.songLengthId = 17},
             {.songLengthId = 24},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MEMENTO] =
         {
             {.songLengthId = 42},
             {.songLengthId = 9},
             {.songLengthId = 24},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FACADE] =
         {
             {.songLengthId = 44},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FOCUS_PUNCH] =
         {
             {.songLengthId = 24},
             {.songLengthId = 44},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SMELLING_SALT] =
         {
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 27},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FOLLOW_ME] =
         {
             {.songLengthId = 21},
             {.songLengthId = 24},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_NATURE_POWER] =
         {
             {.songLengthId = 3},
             {.songLengthId = 48},
             {.songLengthId = 33},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CHARGE] =
         {
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TAUNT] =
         {
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HELPING_HAND] =
         {
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TRICK] =
         {
             {.songLengthId = 17},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROLE_PLAY] =
         {
             {.songLengthId = 24},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WISH] =
         {
             {.songLengthId = 15},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ASSIST] =
         {
             {.songLengthId = 42},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_INGRAIN] =
         {
             {.songLengthId = 15},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SUPERPOWER] =
         {
             {.songLengthId = 39},
             {.songLengthId = 48},
             {.songLengthId = 33},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MAGIC_COAT] =
         {
             {.songLengthId = 0},
             {.songLengthId = 17},
             {.songLengthId = 24},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_RECYCLE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 18},
             {.songLengthId = 36},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_REVENGE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BRICK_BREAK] =
         {
             {.songLengthId = 17},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_YAWN] =
         {
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_KNOCK_OFF] =
         {
             {.songLengthId = 27},
             {.songLengthId = 29},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ENDEAVOR] =
         {
             {.songLengthId = 9},
             {.songLengthId = 9},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ERUPTION] =
         {
             {.songLengthId = 12},
             {.songLengthId = 44},
             {.songLengthId = 29},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SKILL_SWAP] =
         {
             {.songLengthId = 17},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_IMPRISON] =
         {
             {.songLengthId = 15},
             {.songLengthId = 15},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_REFRESH] =
         {
             {.songLengthId = 12},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GRUDGE] =
         {
             {.songLengthId = 43},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SNATCH] =
         {
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SECRET_POWER] =
         {
             {.songLengthId = 12},
             {.songLengthId = 9},
             {.songLengthId = 33},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DIVE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ARM_THRUST] =
         {
             {.songLengthId = 27},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CAMOUFLAGE] =
         {
             {.songLengthId = 0},
             {.songLengthId = 24},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TAIL_GLOW] =
         {
             {.songLengthId = 4},
             {.songLengthId = 26},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LUSTER_PURGE] =
         {
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 50},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MIST_BALL] =
         {
             {.songLengthId = 17},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FEATHER_DANCE] =
         {
             {.songLengthId = 9},
             {.songLengthId = 48},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TEETER_DANCE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 48},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BLAZE_KICK] =
         {
             {.songLengthId = 5},
             {.songLengthId = 17},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MUD_SPORT] =
         {
             {.songLengthId = 42},
             {.songLengthId = 24},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ICE_BALL] =
         {
             {.songLengthId = 18},
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_NEEDLE_ARM] =
         {
             {.songLengthId = 12},
             {.songLengthId = 42},
             {.songLengthId = 29},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SLACK_OFF] =
         {
             {.songLengthId = 0},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HYPER_VOICE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 48},
             {.songLengthId = 30},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_POISON_FANG] =
         {
             {.songLengthId = 30},
             {.songLengthId = 42},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CRUSH_CLAW] =
         {
             {.songLengthId = 44},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BLAST_BURN] =
         {
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HYDRO_CANNON] =
         {
             {.songLengthId = 18},
             {.songLengthId = 24},
             {.songLengthId = 0},
             {.songLengthId = 42},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_METEOR_MASH] =
         {
             {.songLengthId = 12},
             {.songLengthId = 12},
             {.songLengthId = 24},
             {.songLengthId = 0},
             {.songLengthId = 51},
             {.songLengthId = 51},
         },
     [MOVE_ASTONISH] =
         {
             {.songLengthId = 42},
             {.songLengthId = 27},
             {.songLengthId = 17},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WEATHER_BALL] =
         {
             {.songLengthId = 9},
             {.songLengthId = 48},
             {.songLengthId = 27},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_AROMATHERAPY] =
         {
             {.songLengthId = 42},
             {.songLengthId = 24},
             {.songLengthId = 44},
             {.songLengthId = 0},
             {.songLengthId = 27},
             {.songLengthId = 14},
         },
     [MOVE_FAKE_TEARS] =
         {
             {.songLengthId = 3},
             {.songLengthId = 14},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_AIR_CUTTER] =
         {
             {.songLengthId = 5},
             {.songLengthId = 42},
             {.songLengthId = 48},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_OVERHEAT] =
         {
             {.songLengthId = 24},
             {.songLengthId = 48},
             {.songLengthId = 12},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ODOR_SLEUTH] =
         {
             {.songLengthId = 24},
             {.songLengthId = 48},
             {.songLengthId = 39},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROCK_TOMB] =
         {
             {.songLengthId = 27},
             {.songLengthId = 39},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SILVER_WIND] =
         {
             {.songLengthId = 17},
             {.songLengthId = 48},
             {.songLengthId = 15},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_METAL_SOUND] =
         {
             {.songLengthId = 9},
             {.songLengthId = 27},
             {.songLengthId = 33},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_GRASS_WHISTLE] =
         {
             {.songLengthId = 0},
             {.songLengthId = 17},
             {.songLengthId = 36},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_TICKLE] =
         {
             {.songLengthId = 17},
             {.songLengthId = 36},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_COSMIC_POWER] =
         {
             {.songLengthId = 27},
             {.songLengthId = 17},
             {.songLengthId = 33},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WATER_SPOUT] =
         {
             {.songLengthId = 27},
             {.songLengthId = 48},
             {.songLengthId = 33},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SIGNAL_BEAM] =
         {
             {.songLengthId = 17},
             {.songLengthId = 27},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SHADOW_PUNCH] =
         {
             {.songLengthId = 0},
             {.songLengthId = 24},
             {.songLengthId = 44},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_EXTRASENSORY] =
         {
             {.songLengthId = 9},
             {.songLengthId = 42},
             {.songLengthId = 9},
             {.songLengthId = 24},
             {.songLengthId = 12},
             NULL_BARD_SOUND,
         },
     [MOVE_SKY_UPPERCUT] =
         {
             {.songLengthId = 18},
             {.songLengthId = 44},
             {.songLengthId = 48},
             {.songLengthId = 42},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SAND_TOMB] =
         {
             {.songLengthId = 0},
             {.songLengthId = 39},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SHEER_COLD] =
         {
             {.songLengthId = 14},
             {.songLengthId = 48},
             {.songLengthId = 24},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MUDDY_WATER] =
         {
             {.songLengthId = 42},
             {.songLengthId = 12},
             {.songLengthId = 27},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BULLET_SEED] =
         {
             {.songLengthId = 42},
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_AERIAL_ACE] =
         {
             {.songLengthId = 3},
             {.songLengthId = 12},
             {.songLengthId = 42},
             {.songLengthId = 3},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ICICLE_SPEAR] =
         {
             {.songLengthId = 18},
             {.songLengthId = 15},
             {.songLengthId = 42},
             {.songLengthId = 12},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
         },
     [MOVE_IRON_DEFENSE] =
         {
             {.songLengthId = 18},
             {.songLengthId = 27},
             {.songLengthId = 12},
             {.songLengthId = 9},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BLOCK] =
         {
             {.songLengthId = 27},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_HOWL] =
         {
             {.songLengthId = 33},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DRAGON_CLAW] =
         {
             {.songLengthId = 0},
             {.songLengthId = 27},
             {.songLengthId = 29},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_FRENZY_PLANT] =
         {
             {.songLengthId = 48},
             {.songLengthId = 9},
             {.songLengthId = 12},
             {.songLengthId = 0},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BULK_UP] =
         {
             {.songLengthId = 44},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_BOUNCE] =
         {
             {.songLengthId = 33},
             {.songLengthId = 51},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MUD_SHOT] =
         {
             {.songLengthId = 44},
             {.songLengthId = 29},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_POISON_TAIL] =
         {
             {.songLengthId = 30},
             {.songLengthId = 44},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_COVET] =
         {
             {.songLengthId = 42},
             {.songLengthId = 9},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_VOLT_TACKLE] =
         {
             {.songLengthId = 24},
             {.songLengthId = 51},
             {.songLengthId = 0},
             {.songLengthId = 36},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_MAGICAL_LEAF] =
         {
             {.songLengthId = 0},
             {.songLengthId = 17},
             {.songLengthId = 36},
             {.songLengthId = 12},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
         },
     [MOVE_WATER_SPORT] =
         {
             {.songLengthId = 27},
             {.songLengthId = 48},
             {.songLengthId = 26},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_CALM_MIND] =
         {
             {.songLengthId = 27},
             {.songLengthId = 18},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_LEAF_BLADE] =
         {
             {.songLengthId = 12},
             {.songLengthId = 5},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DRAGON_DANCE] =
         {
             {.songLengthId = 0},
             {.songLengthId = 27},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_ROCK_BLAST] =
         {
             {.songLengthId = 27},
             {.songLengthId = 0},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_SHOCK_WAVE] =
         {
             {.songLengthId = 27},
             {.songLengthId = 3},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_WATER_PULSE] =
         {
             {.songLengthId = 27},
             {.songLengthId = 48},
             {.songLengthId = 44},
             {.songLengthId = 51},
             NULL_BARD_SOUND,
             NULL_BARD_SOUND,
         },
     [MOVE_DOOM_DESIRE] =
         {
             {.songLengthId = 39},
             {.songLengthId = 51},
             {.songLengthId = 12},
             {.songLengthId = 18},
             {.songLengthId = 48},
             NULL_BARD_SOUND,
         },
     [MOVE_PSYCHO_BOOST] = {
         {.songLengthId = 18},
         {.songLengthId = 15},
         {.songLengthId = 51},
         {.songLengthId = 39},
         NULL_BARD_SOUND,
         NULL_BARD_SOUND,
     }};

#endif // GUARD_DATA_BARD_MUSIC_MOVES_H
