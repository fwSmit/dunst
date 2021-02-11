#include "greatest.h"

#include <gio/gio.h>


void suite_dbus(void)
{
        GTestDBus *dbus_bus;
        g_test_dbus_unset();
        dbus_bus = g_test_dbus_new(G_TEST_DBUS_NONE);
        g_test_dbus_up(dbus_bus);
        g_test_dbus_down(dbus_bus);
}

/* vim: set tabstop=8 shiftwidth=8 expandtab textwidth=0: */
