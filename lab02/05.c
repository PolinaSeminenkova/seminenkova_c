#include <stdio.h>

enum Day {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

struct Event {
    char name[50];
    enum Day weekday;
};

int main() {
    enum Day today = wednesday;
    
    switch (today) {
        case monday: printf("Ponedelnik\n"); break;
        case tuesday: printf("Vtornik\n"); break;
        case wednesday: printf("Sreda\n"); break;
        case thursday: printf("Chetverg\n"); break;
        case friday: printf("Pyatnica\n"); break;
        case saturday: printf("Subbota\n"); break;
        case sunday: printf("Voskresenye\n"); break;
    }
    
    struct Event event = {"Lekciya", friday};
    printf("Sobytie: %s\n", event.name);
    
    return 0;
}