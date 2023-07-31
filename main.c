#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char osc[100];
    char filtype[100];
    char filslope[100];
    char mod[100];
    char effect[100];
} synth_t;

int main() {
    synth_t synth;

    // get user input
    printf("Pick an oscillator type: "); // oscillator
    fgets(synth.osc, sizeof(synth.osc), stdin);
    printf("Pick a filter type: "); // filter
    fgets(synth.filtype, sizeof(synth.filtype), stdin);
    printf("Pick a filter slope: "); // slope
    fgets(synth.filslope, sizeof(synth.filslope), stdin);
    printf("Pick a modulator source: "); // modulator
    fgets(synth.mod, sizeof(synth.mod), stdin);
    printf("Pick an effect type:"); //effect
    fgets(synth.effect, sizeof(synth.effect), stdin);

    // output user input
    printf("Building synthesizer with: \n", synth.osc);
    printf(" . oscillator: %s", synth.osc);
    printf(" . filter: %s", synth.filtype);
    printf(" . slope: %s", synth.filslope);
    printf(" . modulation source: %s", synth.mod);
    printf(" . effect: %s", synth.effect);

    return 0;
}
