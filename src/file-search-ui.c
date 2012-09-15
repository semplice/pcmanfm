/* The file is generated by glade-gen-connect.
 * DO NOT EDIT. Your changes will be lost.
 */

#include <gtk/gtk.h>
#include <string.h>

static void __filesearch_glade_connect_func(
    GtkBuilder *builder,
    GObject *object,
    const gchar *signal_name,
    const gchar *handler_name,
    GObject *connect_object,
    GConnectFlags flags,
    gpointer user_data)
{
    static const char* handler_names[] = {
        "on_add_path_button_clicked",
        "on_bigger_than_checkbutton_toggled",
        "on_dlg_response",
        "on_max_mtime_button_clicked",
        "on_max_mtime_checkbutton_toggled",
        "on_min_mtime_button_clicked",
        "on_min_mtime_checkbutton_toggled",
        "on_remove_path_button_clicked",
        "on_smaller_than_checkbutton_toggled"
    };

    static GCallback handler_funcs[] = {
        G_CALLBACK(on_add_path_button_clicked),
        G_CALLBACK(on_bigger_than_checkbutton_toggled),
        G_CALLBACK(on_dlg_response),
        G_CALLBACK(on_max_mtime_button_clicked),
        G_CALLBACK(on_max_mtime_checkbutton_toggled),
        G_CALLBACK(on_min_mtime_button_clicked),
        G_CALLBACK(on_min_mtime_checkbutton_toggled),
        G_CALLBACK(on_remove_path_button_clicked),
        G_CALLBACK(on_smaller_than_checkbutton_toggled)
    };

    /* binary search for the function name */
    int min = 0;
    int max = G_N_ELEMENTS(handler_names) - 1;
    for(; min <= max;)
    {
        int i = (min + max) / 2;
        int cmp = strcmp(handler_name, handler_names[i]);
        if(G_UNLIKELY(cmp == 0)) /* found */
        {
            GCallback handler = handler_funcs[i];
            if(connect_object)
                g_signal_connect_object(object, signal_name, handler, connect_object, flags);
            else
                g_signal_connect_data(object, signal_name, handler, user_data, NULL, flags);
            break;
        }
        if(cmp < 0)
            max = i - 1;
        else
            min = i + 1;
    }
}

static void filesearch_glade_connect_signals(GtkBuilder* builder, gpointer user_data)
{
    gtk_builder_connect_signals_full(builder, __filesearch_glade_connect_func, user_data);
}

