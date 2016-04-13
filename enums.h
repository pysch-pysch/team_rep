// enums.h
// Definition of constants for Color, Regularity, Priority, Status and Case

#ifndef PROJECT_TECHNOSPHERE_C_ENUMS_H
#define PROJECT_TECHNOSPHERE_C_ENUMS_H

enum class Color_t { BEGIN, RED, GREEN, BLUE, YELLOW, ORANGE, VIOLET, END };
enum class Regularity_t { BEGIN, DAILY, WEEKLY, MONTHLY, YEARLY, END };
enum class Priority_t { BEGIN, LOW, MEDIUM, HIGH, END };
enum class Status_t { BEGIN, ACTS, DONE, END };
enum class Case_t { BEGIN, TASK, NOTE, EVENT, VIEW, UNDEFINED, END };


#endif //PROJECT_TECHNOSPHERE_C_ENUMS_H