std::string GetRobloxUsername() {
	r_lua_getglobal(VL, "game");
	r_lua_getfield(VL, -1, "Players");
	r_lua_getfield(VL, -1, "LocalPlayer");
	r_lua_getfield(VL, -1, "Name");
	return r_lua_tostring(VL, -1);
}
