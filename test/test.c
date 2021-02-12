#include <stdio.h>
#include <gio/gio.h>

int main(int argc, char *argv[]) {
        printf("Before\n");
        GTestDBus *dbus_bus;
        printf("1\n");
        g_test_dbus_unset();
        printf("2\n");
        dbus_bus = g_test_dbus_new(G_TEST_DBUS_NONE);
        printf("3\n");
        g_test_dbus_up(dbus_bus);
        printf("4\n");
        /* g_test_dbus_down(dbus_bus); */
        printf("After\n");
}
/* vim: set tabstop=8 shiftwidth=8 expandtab textwidth=0: */
