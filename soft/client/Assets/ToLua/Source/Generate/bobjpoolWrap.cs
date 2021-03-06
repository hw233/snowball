﻿//this source code was auto-generated by tolua#, do not modify it
using System;
using LuaInterface;

public class bobjpoolWrap
{
	public static void Register(LuaState L)
	{
		L.BeginClass(typeof(bobjpool), typeof(System.Object));
		L.RegFunction("add", add);
		L.RegFunction("set_type1", set_type1);
		L.RegFunction("set_type2", set_type2);
		L.RegFunction("remove", remove);
		L.RegFunction("clear", clear);
		L.RegFunction("update", update);
		L.RegFunction("get_localPosition", get_localPosition);
		L.RegFunction("set_localPosition", set_localPosition);
		L.RegFunction("get_position", get_position);
		L.RegFunction("set_position", set_position);
		L.RegFunction("get_localEulerAngles", get_localEulerAngles);
		L.RegFunction("set_localEulerAngles", set_localEulerAngles);
		L.RegFunction("get_eulerAngles", get_eulerAngles);
		L.RegFunction("set_eulerAngles", set_eulerAngles);
		L.RegFunction("get_localScale", get_localScale);
		L.RegFunction("set_localScale", set_localScale);
		L.RegFunction("LookAt", LookAt);
		L.RegFunction("set_WorldToScreenPoint", set_WorldToScreenPoint);
		L.RegFunction("New", _Createbobjpool);
		L.RegFunction("__tostring", ToLua.op_ToString);
		L.EndClass();
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int _Createbobjpool(IntPtr L)
	{
		try
		{
			int count = LuaDLL.lua_gettop(L);

			if (count == 0)
			{
				bobjpool obj = new bobjpool();
				ToLua.PushObject(L, obj);
				return 1;
			}
			else
			{
				return LuaDLL.luaL_throw(L, "invalid arguments to ctor method: bobjpool.New");
			}
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int add(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			UnityEngine.GameObject arg0 = (UnityEngine.GameObject)ToLua.CheckObject(L, 2, typeof(UnityEngine.GameObject));
			int o = obj.add(arg0);
			LuaDLL.lua_pushinteger(L, o);
			return 1;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_type1(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			int arg1 = (int)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_type1(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_type2(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_type2(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int remove(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 2);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			obj.remove(arg0);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int clear(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			obj.clear();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int update(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 1);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			obj.update();
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_localPosition(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1;
			float arg2;
			float arg3;
			obj.get_localPosition(arg0, out arg1, out arg2, out arg3);
			LuaDLL.lua_pushnumber(L, arg1);
			LuaDLL.lua_pushnumber(L, arg2);
			LuaDLL.lua_pushnumber(L, arg3);
			return 3;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_localPosition(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_localPosition(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_position(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1;
			float arg2;
			float arg3;
			obj.get_position(arg0, out arg1, out arg2, out arg3);
			LuaDLL.lua_pushnumber(L, arg1);
			LuaDLL.lua_pushnumber(L, arg2);
			LuaDLL.lua_pushnumber(L, arg3);
			return 3;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_position(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_position(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_localEulerAngles(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1;
			float arg2;
			float arg3;
			obj.get_localEulerAngles(arg0, out arg1, out arg2, out arg3);
			LuaDLL.lua_pushnumber(L, arg1);
			LuaDLL.lua_pushnumber(L, arg2);
			LuaDLL.lua_pushnumber(L, arg3);
			return 3;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_localEulerAngles(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_localEulerAngles(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_eulerAngles(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1;
			float arg2;
			float arg3;
			obj.get_eulerAngles(arg0, out arg1, out arg2, out arg3);
			LuaDLL.lua_pushnumber(L, arg1);
			LuaDLL.lua_pushnumber(L, arg2);
			LuaDLL.lua_pushnumber(L, arg3);
			return 3;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_eulerAngles(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_eulerAngles(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_localScale(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1;
			float arg2;
			float arg3;
			obj.get_localScale(arg0, out arg1, out arg2, out arg3);
			LuaDLL.lua_pushnumber(L, arg1);
			LuaDLL.lua_pushnumber(L, arg2);
			LuaDLL.lua_pushnumber(L, arg3);
			return 3;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_localScale(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_localScale(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int LookAt(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.LookAt(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_WorldToScreenPoint(IntPtr L)
	{
		try
		{
			ToLua.CheckArgsCount(L, 5);
			bobjpool obj = (bobjpool)ToLua.CheckObject<bobjpool>(L, 1);
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			float arg1 = (float)LuaDLL.luaL_checknumber(L, 3);
			float arg2 = (float)LuaDLL.luaL_checknumber(L, 4);
			float arg3 = (float)LuaDLL.luaL_checknumber(L, 5);
			obj.set_WorldToScreenPoint(arg0, arg1, arg2, arg3);
			return 0;
		}
		catch (Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}
}

