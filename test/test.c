#include "greatest.h"
#include <gio/gio.h>

const char *base;

SUITE_EXTERN(suite_dbus);

GREATEST_MAIN_DEFS();

int main(int argc, char *argv[]) {
        GREATEST_MAIN_BEGIN();
        printf("Before the dbus suite");
        RUN_SUITE(suite_dbus);
        printf("After the dbus suite");
        GREATEST_MAIN_END();
}
/* vim: set tabstop=8 shiftwidth=8 expandtab textwidth=0: */
