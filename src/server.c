
#include "base.h"
#include "log.h"

static server* server_new() {
	server* srv = g_slice_new0(server);
	srv->plugins = g_hash_table_new(g_str_hash, g_str_equal);
	srv->options = g_hash_table_new(g_str_hash, g_str_equal);
	return srv;
}

static void server_free(server* srv) {
	if (!srv) return;
	/* TODO */
	g_slice_free(server, srv);
}



int main() {
	TRACE("%s", "Test!");
	return 0;
}
