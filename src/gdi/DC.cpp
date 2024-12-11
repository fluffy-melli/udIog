#include "../../include/gdi/DC.h"

Graphic New_Graphic() {
    Graphic n_hdc;
    GDI_Init(n_hdc.address);
    n_hdc.hdc = GetDC(NULL);

    if (n_hdc.hdc == NULL) {
        std::cerr << "Failed to get screen DC" << std::endl;
        GDI_Release(n_hdc.address);
        exit(EXIT_FAILURE);
    }

    n_hdc.graphics = new Graphics(n_hdc.hdc);

    return n_hdc;
}

void Peek(Graphic &n_hdc) {
    while (PeekMessage(&n_hdc.msg, NULL, 0, 0, PM_REMOVE)) {
        TranslateMessage(&n_hdc.msg);
        DispatchMessage(&n_hdc.msg);
        if (n_hdc.msg.message == WM_QUIT) {
            ReleaseDC(NULL, n_hdc.hdc);
            GDI_Release(n_hdc.address);
            exit(EXIT_FAILURE);
        }
    }
}