/// A set of images. Refer to source here: https://github.com/uTensor/utensor-cmsis-example/blob/master/tensorflow-models/cmsis_pretrained/arm_nnexamples_cifar10_inputs.h

#ifndef ARM_NNEXAMPLES_CIFAR10_INPUTS_H_
#define ARM_NNEXAMPLES_CIFAR10_INPUTS_H_

/* Here are two different test images */

//#define IMG_DATA {158,112,49,159,111,47,165,116,51,166,118,53,160,112,46,156,109,41,162,115,47,159,113,45,158,111,44,159,113,41,161,116,41,160,111,52,161,111,49,166,117,41,169,117,45,170,119,44,167,117,40,162,113,38,160,111,39,160,112,43,156,109,44,149,107,45,150,107,45,148,106,43,149,107,44,143,101,39,140,98,43,141,97,41,143,97,38,137,95,36,126,91,36,116,85,33,152,112,51,151,110,40,159,114,45,166,116,56,162,112,49,160,113,43,164,117,47,162,114,45,163,116,46,156,110,38,155,111,41,159,110,54,163,113,52,170,119,41,171,117,40,171,115,33,169,115,30,160,111,33,154,112,41,151,115,50,145,110,53,139,104,55,140,102,52,141,100,48,149,105,50,147,102,46,145,102,45,142,97,38,143,98,34,136,95,31,125,91,32,119,88,34,151,110,47,151,109,33,158,111,36,167,111,48,160,106,42,163,115,44,165,117,45,165,117,45,163,115,43,162,115,43,158,114,48,157,109,57,161,111,51,166,115,38,167,114,37,169,113,35,170,116,39,159,114,47,145,111,54,121,96,49,110,90,52,98,78,50,101,77,47,114,85,50,120,86,48,134,96,55,143,103,51,140,99,39,142,99,35,139,98,34,130,95,34,120,89,33,155,107,40,155,110,32,160,109,31,174,112,44,167,110,43,167,117,46,169,120,48,169,119,48,165,115,44,165,117,45,167,123,57,191,146,95,177,130,75,157,111,41,162,115,47,164,114,54,158,112,58,149,111,67,104,80,47,103,87,65,98,90,76,92,90,84,80,75,66,74,63,50,86,70,52,83,62,39,113,85,45,132,98,46,140,102,43,140,101,39,136,99,39,127,94,36,155,107,41,156,114,48,161,115,49,170,114,47,169,114,43,163,113,40,169,120,47,166,116,44,164,113,41,164,116,42,173,128,59,246,214,164,195,156,107,151,114,56,146,111,60,142,108,71,111,80,50,78,53,31,85,69,56,113,103,98,112,110,111,106,114,118,97,102,105,93,94,93,74,72,67,84,78,70,85,73,47,105,83,45,128,96,48,138,101,46,133,94,36,129,93,36,148,109,54,133,104,64,130,100,57,147,112,53,161,115,44,165,113,39,167,116,41,167,115,41,163,111,37,165,116,39,163,118,42,180,138,85,157,122,78,128,102,58,97,75,43,66,50,31,69,58,43,66,56,45,89,83,76,118,113,110,122,121,120,119,122,122,114,116,116,94,96,96,99,100,97,91,91,86,58,58,47,67,58,37,108,84,49,140,105,58,138,98,44,134,95,40,127,100,57,109,95,80,47,37,17,88,74,28,153,117,48,170,118,43,168,115,40,170,118,43,169,117,42,166,116,37,164,120,39,147,107,52,129,98,59,127,108,75,100,87,70,68,67,57,78,83,72,72,75,64,83,84,74,132,130,121,146,142,132,124,118,108,105,99,90,107,102,94,115,111,103,85,83,77,63,71,69,46,47,39,79,61,36,132,98,58,141,99,48,134,93,39,131,115,90,99,96,92,42,43,38,70,64,41,143,111,56,167,117,42,165,114,36,168,116,39,171,119,49,161,113,51,140,109,51,120,94,49,130,110,77,144,131,107,116,106,93,88,87,79,91,95,88,85,88,82,77,77,69,124,118,107,163,153,140,136,124,112,102,93,81,106,98,88,100,93,84,85,81,74,54,60,58,49,53,49,57,47,32,107,83,50,138,103,51,136,97,39,170,161,144,103,105,105,54,58,59,124,121,113,153,124,82,161,113,43,163,117,41,166,122,50,165,121,66,174,135,95,113,89,59,125,105,78,157,141,121,156,143,128,121,111,101,86,80,74,82,81,77,84,85,82,80,78,73,81,71,61,138,125,112,146,135,123,113,103,93,87,79,70,83,77,69,86,82,76,71,73,67,56,57,53,40,35,27,74,59,35,133,106,59,137,103,45,180,176,163,134,139,143,94,100,105,154,154,149,174,149,112,158,116,51,156,116,47,153,118,60,207,180,146,237,214,198,207,180,166,156,131,119,174,153,145,148,131,125,125,110,107,93,85,79,86,84,79,74,74,71,59,57,53,76,68,58,137,125,112,143,133,122,133,124,114,106,98,89,86,81,74,87,85,78,84,85,78,75,76,71,50,49,43,40,30,15,95,75,44,132,103,57,183,183,175,108,116,122,142,151,158,165,169,168,177,156,122,155,112,50,159,118,51,122,89,47,213,197,179,237,224,226,220,191,188,164,135,131,183,159,155,156,137,132,125,108,104,120,111,104,78,76,69,80,80,77,45,44,40,91,85,77,175,165,154,157,147,137,155,147,138,107,100,92,87,83,77,103,102,96,88,88,79,78,79,73,59,59,59,41,36,33,59,46,31,104,81,46,188,191,189,100,108,116,135,144,153,170,175,178,187,167,136,166,120,59,173,123,55,134,93,44,117,95,80,194,182,188,199,171,164,170,142,133,185,161,151,189,171,159,134,119,106,117,107,95,102,98,89,84,84,79,38,38,34,125,121,113,210,201,192,160,152,142,146,139,130,93,89,82,83,80,75,94,93,88,104,104,94,85,87,81,73,75,78,55,53,55,62,55,48,76,56,26,189,194,194,90,96,105,127,134,144,175,180,185,174,156,133,166,123,68,178,123,53,159,109,47,97,68,44,168,154,152,168,144,126,137,114,94,186,166,148,216,202,183,160,149,129,123,113,98,120,114,105,115,114,109,50,50,47,150,147,140,194,187,178,155,149,140,123,118,111,91,88,83,84,83,79,84,84,80,95,95,85,86,87,81,84,87,89,73,73,73,79,74,64,73,55,24,189,192,193,93,95,103,152,154,163,185,188,192,119,110,98,136,106,66,173,124,58,167,116,50,103,72,39,147,132,120,145,125,103,167,149,127,189,174,155,226,216,200,180,172,157,141,131,117,126,117,107,117,114,109,71,71,68,154,152,147,186,181,174,149,144,136,114,110,104,87,85,80,80,80,76,72,73,70,80,80,72,99,100,94,100,101,99,90,88,81,97,89,69,94,73,34,194,196,196,108,107,112,168,167,172,186,186,188,105,109,109,99,89,67,156,119,62,167,122,55,100,74,34,115,106,88,138,123,103,198,185,169,190,180,169,172,165,159,145,140,140,154,143,134,146,136,125,103,100,95,71,71,70,152,152,149,179,175,170,137,133,127,130,128,122,110,109,105,85,86,83,91,93,91,95,96,90,109,110,104,115,116,111,100,96,80,97,85,53,117,95,47,197,197,197,132,129,136,172,167,174,184,178,181,130,137,142,78,83,77,140,120,88,155,125,77,115,94,52,130,120,93,143,131,116,230,221,211,242,236,230,145,138,137,135,130,130,131,121,112,121,112,101,108,104,95,95,88,75,144,134,118,168,159,146,152,147,138,112,108,101,87,85,80,71,72,68,87,88,87,105,104,99,112,109,99,120,110,93,103,86,54,121,96,48,136,104,48,203,203,204,146,146,160,168,164,178,191,182,188,168,170,172,78,86,90,126,125,126,138,126,113,138,121,82,96,80,37,154,143,133,173,163,155,162,152,141,140,132,117,113,106,88,113,106,90,101,101,92,105,101,87,112,90,58,171,143,104,156,138,109,148,141,126,135,130,118,109,105,97,78,76,72,79,79,77,94,93,94,101,91,82,107,83,55,125,88,45,151,108,55,144,104,46,214,215,215,163,166,180,164,167,184,183,184,194,176,182,186,94,102,105,96,96,102,156,149,145,148,137,111,106,93,61,129,116,105,118,105,95,114,102,89,116,105,89,102,91,73,115,110,98,86,91,88,101,103,95,144,128,102,118,96,64,68,56,32,128,120,105,133,126,115,75,69,61,60,56,51,58,56,53,71,70,65,102,93,78,116,94,64,143,112,68,150,116,64,140,110,54,212,211,205,178,184,192,167,175,189,173,181,193,176,184,188,124,131,133,86,88,96,141,139,143,153,148,141,135,128,111,104,90,80,77,64,55,134,121,108,124,111,96,129,117,100,147,143,133,85,92,93,92,96,93,150,139,120,132,117,93,117,109,92,107,99,86,75,68,58,64,59,52,44,41,39,65,62,60,86,69,40,133,105,59,155,119,62,160,120,54,154,115,45,151,111,46,199,192,180,187,189,187,171,176,181,174,179,185,177,182,184,144,149,152,86,90,99,119,121,132,122,124,130,137,136,135,144,134,126,70,59,51,129,118,108,108,97,86,145,134,123,184,176,168,116,118,118,73,75,73,131,119,103,137,124,105,134,129,118,89,86,78,51,49,44,52,51,50,47,49,52,90,90,93,121,91,60,163,118,68,171,121,64,164,113,52,158,111,50,149,107,46,165,156,146,195,193,187,179,178,175,177,173,172,181,181,180,152,157,160,99,103,111,131,135,146,171,175,185,103,105,111,93,90,87,80,77,73,93,90,86,122,118,116,178,173,173,191,182,177,150,148,148,100,100,101,89,78,66,87,77,63,60,61,57,46,52,54,38,46,51,24,33,41,46,57,69,60,71,83,108,100,75,144,125,82,144,123,76,128,109,61,127,113,69,120,105,63,117,120,124,195,200,200,177,178,176,178,169,168,181,179,179,138,144,147,83,87,91,150,153,159,245,247,250,219,222,225,133,140,144,134,141,147,149,156,164,176,182,192,190,196,208,194,192,197,168,172,181,125,133,143,110,109,109,61,62,62,35,49,58,34,54,68,49,70,87,58,81,102,61,85,110,58,84,111,69,99,122,72,101,119,78,104,120,69,96,112,59,92,112,55,90,115,79,105,133,175,197,213,174,183,192,176,172,177,177,177,182,140,146,150,109,112,113,211,211,209,253,252,247,252,253,252,208,224,232,124,143,157,114,132,149,124,141,162,116,133,156,122,133,152,104,124,148,68,93,119,68,87,104,60,82,101,52,84,111,50,84,110,51,85,115,56,93,125,56,94,131,51,91,130,43,96,135,51,104,141,59,108,142,48,97,132,43,97,137,42,95,132,41,89,135,96,137,168,144,168,188,168,174,188,178,182,192,165,170,174,165,166,164,246,245,237,253,251,241,227,231,228,110,136,153,60,88,111,53,80,105,49,76,105,49,75,107,48,72,101,45,79,115,42,81,120,46,81,113,42,82,116,38,86,125,46,90,125,46,89,126,43,87,128,42,89,132,46,93,139,46,94,137,50,96,137,55,96,135,53,94,134,51,95,139,45,90,133,29,91,141,29,87,130,59,102,134,131,153,176,166,179,191,132,136,137,194,189,181,254,250,242,241,245,245,141,159,175,61,94,127,50,84,118,50,84,119,51,85,121,49,83,120,50,84,116,47,86,117,42,84,117,39,82,115,34,79,113,35,83,120,39,86,125,38,85,125,42,89,130,45,92,134,56,103,145,62,103,142,59,101,142,56,102,146,50,99,144,46,94,140,51,103,149,48,111,162,30,94,140,34,85,124,73,106,136,128,148,167,128,136,143,215,213,209,255,253,249,187,198,205,66,93,118,54,91,128,50,88,125,52,90,127,52,90,127,46,83,121,45,82,115,43,82,113,41,81,112,36,80,113,39,83,117,40,86,123,40,89,131,43,92,134,46,95,138,59,108,150,62,110,152,64,109,147,59,108,149,54,108,154,50,105,152,70,123,167,83,137,182,52,114,165,35,99,147,31,86,130,41,83,122,66,95,126,128,145,164,224,229,234,240,245,247,124,143,153,58,92,114,49,87,123,56,94,131,54,92,129,44,82,119,44,82,119,47,83,119,46,84,119,43,83,119,43,86,123,44,88,127,44,90,131,45,97,141,54,106,150,58,110,154,54,105,150,46,97,141,43,95,140,36,91,138,51,108,158,73,130,178,85,138,182,76,125,169,50,110,162,35,98,149,29,89,138,35,86,133,44,83,126,78,106,138,202,219,233,211,228,234,97,126,140,65,104,126,54,94,129,48,87,124,58,97,133,48,87,123,40,80,116,45,82,119,47,84,122,48,87,126,47,89,130,46,89,132,51,97,140,39,92,138,39,93,139,48,102,148,47,101,147,39,93,139,28,85,133,40,101,153,67,129,182,67,126,176,46,98,142,51,96,139,50,108,161,35,97,147,32,92,143,33,88,141,41,88,138,46,84,125,104,133,159,170,197,211,64,100,119,54,97,121,52,94,128,53,95,130,61,103,139,58,100,135,54,96,131,45,83,120,42,79,118,41,80,120,46,88,130,49,92,135,46,92,136,42,95,139,40,93,138,39,92,136,37,90,135,40,93,138,44,102,151,63,125,178,47,110,164,31,90,140,15,60,103,51,93,136,68,124,177,42,100,148,31,88,137,38,91,146,37,87,139,43,89,132,42,79,113,71,107,133,49,89,114,31,77,105,27,71,105,38,82,117,49,93,128,56,100,135,58,102,137,53,92,128,56,94,131,60,99,137,57,99,139,53,97,138,50,95,137,45,94,136,39,88,131,33,83,125,42,91,133,62,112,154,79,132,179,73,131,181,56,116,168,38,97,146,13,64,108,40,85,127,61,116,168,49,102,148,35,85,132,43,91,143,39,90,139,42,92,134,44,88,125,40,81,112,42,85,115,27,72,104,23,67,102,30,74,109,27,71,106,29,73,108,36,80,115,47,86,120,56,95,128,62,101,135,66,109,144,75,119,156,69,113,152,49,95,134,43,88,127,43,88,127,60,105,144,85,130,170,109,156,197,93,145,190,60,115,164,26,82,130,29,82,126,20,64,107,54,107,160,56,105,149,45,89,132,43,86,134,40,89,134,40,92,132,40,87,123,38,81,115,36,79,114,26,69,105,22,66,101,29,73,108,25,69,104,29,73,108,19,63,98,18,58,89,32,70,100,47,87,118,61,104,137,74,119,152,66,111,145,53,96,131,52,95,130,45,87,123,67,109,145,89,131,167,105,146,182,89,135,175,48,99,145,24,77,124,34,84,129,21,67,110}

#define IMG_DATA {235,235,235,231,231,231,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,232,233,233,231,233,232,231,233,231,233,233,230,233,232,232,232,234,232,231,234,232,232,232,233,233,230,232,233,231,233,233,233,232,232,232,232,232,232,232,232,232,233,233,233,233,233,233,232,232,232,238,238,238,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,236,236,236,236,236,236,236,236,236,236,236,236,236,236,236,236,236,236,237,234,233,236,234,233,236,236,234,234,236,234,234,235,237,234,234,238,235,236,237,236,236,235,236,236,234,236,236,236,235,235,235,235,235,235,235,235,235,236,236,236,236,236,236,235,235,235,237,237,237,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,235,235,235,235,234,234,236,233,231,236,234,231,235,235,234,234,235,236,227,230,233,231,235,238,231,233,235,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,235,235,235,235,235,235,234,234,234,238,238,238,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,234,235,235,235,235,235,234,233,233,230,232,232,231,228,230,232,223,226,231,186,192,197,209,216,219,207,210,213,228,228,230,236,235,235,234,234,234,234,234,234,234,234,234,234,234,234,235,235,235,235,235,235,235,235,235,237,237,237,234,234,234,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,235,234,234,234,234,234,234,235,235,235,235,235,235,234,234,234,234,234,234,235,235,235,235,235,235,236,238,236,233,237,237,219,225,230,203,210,219,163,172,179,195,205,208,214,218,221,230,229,232,237,235,237,235,235,235,235,235,235,235,235,235,235,236,236,236,236,236,236,236,236,236,236,236,239,239,238,236,235,235,236,235,235,236,235,235,236,235,235,236,235,235,235,236,235,235,235,235,234,234,234,235,235,235,237,236,236,237,236,236,234,235,236,232,233,234,235,237,237,229,231,232,208,216,218,194,205,210,185,198,207,174,188,200,165,179,189,184,196,202,207,215,220,226,228,232,236,235,237,236,236,235,236,236,235,236,236,235,236,236,236,237,237,237,237,237,237,237,237,237,228,229,229,228,227,228,232,230,231,231,228,230,234,232,233,237,236,236,237,237,235,236,237,235,237,235,236,237,235,236,239,236,237,239,237,238,225,229,230,224,228,229,233,237,238,221,226,228,183,197,204,161,180,190,159,180,191,154,176,190,144,163,177,143,159,171,156,169,177,198,206,211,233,238,239,236,237,234,235,236,233,235,235,235,235,236,236,236,238,237,237,237,237,239,237,238,212,220,222,224,230,233,230,234,238,227,232,234,229,234,234,234,237,236,237,238,235,238,237,236,239,237,238,239,237,238,239,236,237,240,238,239,201,204,203,219,222,221,233,236,235,214,218,218,193,204,210,185,201,210,184,201,211,173,191,203,165,182,196,159,174,187,162,176,185,186,199,204,229,239,240,234,239,238,233,238,237,233,238,238,234,239,238,236,239,238,237,239,238,238,238,238,216,234,241,221,236,243,225,238,246,225,239,243,227,240,240,231,238,237,236,237,235,238,236,235,238,236,237,238,236,237,237,237,237,239,239,239,197,198,196,220,221,218,233,234,231,230,231,229,209,213,217,209,216,222,219,228,235,208,218,227,209,221,234,210,224,235,217,233,240,218,235,241,225,240,243,228,238,240,228,239,240,230,240,240,230,240,239,235,240,239,237,240,239,238,238,238,118,140,149,119,138,148,124,142,153,136,155,161,172,188,191,225,234,233,235,236,233,237,234,232,236,233,234,235,235,235,235,237,236,233,237,235,214,216,214,226,228,226,232,234,232,236,237,236,228,230,232,227,230,235,231,236,241,225,232,239,225,237,247,217,233,243,201,219,226,185,204,211,172,189,195,167,179,186,167,180,185,186,199,201,223,235,235,235,241,239,236,240,239,238,240,239,109,130,141,103,121,133,108,125,137,111,127,137,146,159,165,222,229,231,227,228,225,229,226,224,236,232,233,234,234,234,231,236,234,230,237,235,229,234,235,231,235,236,232,237,238,230,235,236,231,236,238,231,237,240,229,237,241,223,232,238,191,206,213,164,184,191,146,165,172,137,156,163,134,149,159,128,140,153,121,133,143,149,162,166,216,228,229,234,241,239,235,240,238,237,240,239,195,212,224,188,202,215,199,211,224,200,211,223,209,217,227,223,227,231,213,213,211,211,209,206,216,213,214,220,222,222,219,226,225,210,221,219,209,219,223,211,221,225,216,225,230,220,229,233,225,234,237,226,236,239,225,237,241,218,231,237,183,204,208,175,198,203,181,200,207,178,194,202,186,197,211,170,178,196,142,151,164,185,195,202,219,230,233,231,240,238,234,241,239,236,240,239,193,207,222,191,202,217,202,211,224,214,217,234,223,225,241,214,219,227,203,208,208,171,174,174,177,180,183,207,213,214,174,184,188,98,112,121,93,114,126,101,121,132,111,129,139,122,138,147,137,152,161,153,167,174,202,216,220,223,236,237,218,232,235,220,233,238,223,234,240,217,226,233,221,228,237,212,219,229,196,203,212,222,230,237,219,227,234,221,230,233,232,239,242,235,241,242,113,130,152,111,125,147,113,125,141,125,131,151,138,145,165,170,182,193,191,201,205,190,199,204,208,219,226,216,230,234,158,172,183,54,71,92,45,70,91,49,73,91,53,73,90,66,84,98,102,114,129,159,168,179,221,227,233,234,239,241,233,237,241,227,231,237,223,228,233,207,211,217,202,208,212,211,218,220,212,219,223,199,206,214,179,186,196,188,197,205,211,221,227,221,231,234,61,81,108,69,86,114,63,79,100,68,85,102,123,141,155,139,155,164,151,157,164,195,200,207,214,228,234,206,223,228,163,180,190,103,121,138,95,112,131,101,117,135,138,151,168,181,192,207,207,212,223,221,222,232,219,219,227,205,203,212,183,186,195,158,166,174,147,154,163,131,138,147,125,133,140,130,139,144,136,146,152,133,142,151,128,137,147,138,153,160,182,197,203,197,212,216,40,53,77,58,70,94,85,98,116,127,144,153,132,151,156,96,107,110,119,115,118,163,158,161,173,180,182,184,194,197,182,194,198,181,193,200,183,194,202,198,209,217,218,228,236,200,210,217,174,181,186,159,165,172,145,150,159,132,136,149,116,125,138,98,111,123,94,106,118,99,111,123,105,118,128,107,121,130,122,135,145,138,151,161,150,164,174,157,174,184,188,206,213,185,203,208,13,15,35,26,29,47,134,140,151,206,216,220,138,150,150,118,123,123,141,133,134,172,162,162,181,181,180,207,209,211,220,224,225,228,234,233,224,234,232,230,241,240,226,238,238,176,189,190,144,159,163,138,154,162,142,158,170,145,163,177,154,171,187,149,165,182,149,165,182,154,171,187,157,174,189,160,177,191,173,190,204,187,204,217,190,207,218,178,196,208,165,183,193,157,175,183,5,5,24,58,62,79,200,207,217,225,232,239,197,205,212,199,207,211,212,212,218,226,224,229,229,230,237,233,236,246,232,238,245,230,238,239,209,221,220,223,238,239,221,238,241,210,228,234,198,217,228,180,200,214,193,216,230,188,213,229,189,212,231,194,214,234,192,212,232,184,204,224,172,193,212,171,191,209,161,181,197,144,165,179,136,156,169,131,146,161,128,143,158,138,154,165,39,45,71,145,155,179,190,204,222,186,196,216,184,197,217,192,211,229,194,211,230,194,208,227,194,206,227,191,203,228,192,207,228,190,207,221,177,193,207,180,198,215,154,176,193,147,169,188,145,161,184,156,171,195,146,163,186,113,133,156,114,137,161,132,157,180,126,150,173,111,135,158,92,115,138,91,112,135,93,114,133,94,116,131,105,125,140,121,133,151,129,141,158,129,142,156,122,135,161,162,179,207,143,160,194,137,154,189,131,152,187,128,152,190,127,150,192,130,150,193,131,150,192,128,147,190,127,147,189,129,149,189,129,149,188,124,145,186,104,126,163,100,122,154,102,120,154,118,134,170,112,128,163,94,109,145,94,112,148,94,117,153,87,112,144,83,103,136,80,97,130,83,103,134,93,111,139,101,117,141,108,121,144,115,125,146,121,133,148,130,144,156,73,87,109,76,90,113,77,90,122,80,93,127,84,98,134,87,102,142,87,102,147,90,105,150,94,111,152,102,119,160,107,124,165,113,131,172,115,137,181,118,136,186,118,132,180,120,133,175,115,136,172,110,133,168,106,127,163,100,119,155,95,109,148,85,101,139,79,97,132,80,92,127,80,94,129,77,100,133,80,100,129,82,98,122,92,104,126,113,119,138,125,135,146,136,149,156,13,25,41,3,11,25,9,16,35,18,26,48,18,26,52,21,25,56,20,25,58,22,30,61,26,36,62,34,43,70,42,51,77,48,59,87,52,69,106,60,75,121,66,77,126,70,79,126,71,87,127,72,88,126,67,81,120,60,72,112,55,67,106,53,68,104,53,69,103,57,69,102,57,71,105,57,78,110,72,89,115,87,100,119,104,113,128,120,124,136,130,136,141,137,146,149,36,46,55,11,16,20,8,13,19,32,44,53,36,45,58,22,25,41,8,11,30,3,8,24,1,4,17,0,2,15,0,2,15,0,4,20,6,13,42,5,18,56,1,19,60,3,23,62,13,29,71,24,38,81,21,33,77,21,31,76,21,38,78,22,44,79,30,50,83,39,58,90,57,70,101,85,90,118,113,115,138,123,123,138,116,115,125,122,123,128,134,139,137,153,160,158,35,41,45,26,27,26,13,19,18,27,41,41,71,81,84,70,70,76,49,50,57,27,31,37,15,15,21,5,5,11,2,2,7,0,0,7,17,17,35,57,64,91,31,50,78,10,36,62,4,30,60,4,30,62,7,30,63,14,35,69,25,43,74,41,55,83,62,71,99,86,97,123,122,124,146,144,131,149,132,120,135,114,105,114,117,111,116,132,134,133,146,152,146,172,179,175,16,15,17,13,10,9,4,10,8,3,12,11,45,44,46,65,52,57,54,43,47,36,33,35,18,18,20,4,4,7,2,2,4,0,1,3,7,8,15,118,117,134,161,158,179,131,128,148,112,112,131,105,105,125,105,103,124,109,105,127,118,107,126,138,115,133,154,126,144,151,126,141,127,106,116,105,86,91,106,94,97,120,116,116,129,130,129,142,147,144,164,172,165,184,194,190,40,40,35,12,10,7,0,3,3,0,4,4,12,6,7,30,12,17,32,12,17,21,10,12,7,6,7,2,1,3,2,1,2,3,2,3,0,0,2,68,58,64,182,128,146,205,130,148,196,127,144,194,123,141,195,119,137,187,113,129,172,110,122,150,96,106,123,75,83,103,66,69,95,71,70,104,93,88,122,118,113,129,132,126,132,141,135,152,162,158,171,182,176,185,197,194,69,77,64,26,29,21,1,1,1,1,1,2,4,1,0,12,2,5,18,3,9,12,2,5,4,1,2,2,0,0,2,0,0,4,0,1,1,1,1,32,12,11,153,45,59,203,47,68,195,46,67,191,48,69,179,50,67,155,49,59,119,42,49,91,38,42,81,48,46,94,77,71,117,110,102,125,126,116,125,128,120,129,135,128,144,153,147,162,176,171,173,187,183,184,198,196,83,94,82,47,52,43,1,1,1,2,1,2,2,0,0,5,1,2,7,1,5,4,0,2,1,0,0,1,0,0,1,0,0,3,0,0,1,2,0,27,3,2,142,25,38,205,32,54,198,25,46,169,25,43,121,25,36,85,29,34,74,41,39,85,66,56,102,92,82,121,113,105,128,124,115,122,126,115,121,127,118,132,139,131,147,157,150,165,179,174,176,191,187,186,201,199,92,102,93,54,60,50,6,7,3,3,2,1,2,2,0,1,3,1,1,3,3,1,2,2,1,1,1,1,0,0,1,0,0,1,1,1,0,3,2,15,1,0,102,19,28,157,31,47,117,17,23,74,13,12,56,27,22,74,58,55,99,90,81,115,115,99,122,126,111,124,124,112,123,123,113,125,130,119,128,135,126,136,145,137,148,159,151,162,176,171,177,192,188,188,202,201,87,99,89,43,51,37,19,23,11,11,12,4,8,10,2,5,11,4,2,10,4,2,7,2,3,4,1,3,4,1,3,4,1,2,3,2,0,6,6,4,5,2,42,13,13,71,21,24,53,27,25,57,50,41,80,77,62,113,98,82,132,113,101,134,126,113,123,126,112,116,125,111,120,128,115,131,138,126,139,148,137,143,154,145,156,168,161,169,184,179,182,197,193,188,202,201,82,96,82,46,57,36,36,44,22,31,35,17,27,30,15,22,28,15,17,26,13,16,23,12,18,21,12,19,21,13,20,22,14,19,23,15,19,27,20,23,31,21,37,40,27,64,55,45,87,70,67,104,88,81,116,102,85,128,112,88,139,121,105,131,122,110,117,122,107,115,127,112,123,133,119,131,139,127,139,149,138,148,160,151,159,172,164,174,189,183,185,200,196,187,202,200,85,101,83,62,75,48,58,67,38,55,61,37,51,56,35,47,53,33,46,53,34,48,55,38,49,55,40,51,56,41,53,58,44,55,62,46,59,67,45,68,71,48,81,84,59,104,96,74,116,103,83,127,109,92,133,116,97,127,121,97,127,127,107,118,124,106,114,125,108,122,131,117,129,136,123,136,145,133,141,152,141,149,162,153,158,171,163,168,183,178,180,195,191,186,200,199}

#endif