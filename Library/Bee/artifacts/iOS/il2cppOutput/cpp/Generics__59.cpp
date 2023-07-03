#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtualActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtualActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, params[7]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9)
	{
		void* params[9] = { p1, p2, p3, p4, p5, p6, p7, p8, p9 };
		method->invoker_method(methodPtr, method, obj, params, params[8]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF;
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1;
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326;
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IObservable_1_tDC07BB1EE56E7B0A98F2416BAD46AFBD40B9B00E;
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct IObserver_1_tBC6CE0DC9E0C4FC95DA956CA90305E2B00BD5785;
struct IObserver_1_t13B7A1F29887551144ADB3A244B44BF20C022DB5;
struct IObserver_1_t86359CF84DEFEE15EB1DB5AFA5F2E8A27FF22D3B;
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765;
struct OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A;
struct OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37;
struct WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293;
struct WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0;
struct WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7;
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52;
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB;
struct WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C;
struct Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531;
struct Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8;
struct Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C;
struct WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4;
struct WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380;
struct Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746;
struct Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC;
struct Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228;
struct Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700;
struct Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49;
struct Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3;
struct ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D;
struct ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962;
struct ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965;
struct ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9;
struct ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC;
struct ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A;
struct ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527;
struct ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957;
struct ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D;
struct ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2;
struct ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1;
struct ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D;
struct ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB;
struct ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183;
struct ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69;
struct ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6;
struct ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795;
struct ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C;
struct ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091;
struct ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04;
struct ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07;
struct ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2;
struct ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576;
struct ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA;
struct ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75;
struct ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5;
struct ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2;
struct ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21;
struct ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3;
struct ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A;
struct ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961;
struct ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5;
struct ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4;
struct ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2;
struct ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802;
struct IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035;
struct Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7;
struct IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035;
struct Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	RuntimeObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct LeftObserver_tBD9CC4BC709982E0C2956F9F65443C863A5055BE  : public RuntimeObject
{
	WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* ___parent;
};
struct LeftObserver_tB7E464B198322A284E0266355C4DACB5A3A3B66E  : public RuntimeObject
{
	ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* ___parent;
};
struct LeftZipObserver_tF654ECFF4ABF554CCB22A1BD44613E0BB6A39ACD  : public RuntimeObject
{
	Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* ___parent;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41  : public RuntimeObject
{
	bool ___isRequiredSubscribeOnCurrentThread;
};
struct OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765  : public RuntimeObject
{
	bool ___isRequiredSubscribeOnCurrentThread;
};
struct OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386  : public RuntimeObject
{
	bool ___isRequiredSubscribeOnCurrentThread;
};
struct OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE  : public RuntimeObject
{
	bool ___isRequiredSubscribeOnCurrentThread;
};
struct OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E  : public RuntimeObject
{
	RuntimeObject* ___observer;
	RuntimeObject* ___cancel;
};
struct OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A  : public RuntimeObject
{
	RuntimeObject* ___observer;
	RuntimeObject* ___cancel;
};
struct OperatorObserverBase_2_tAD90AC72A9B401D73ED3741005D25687BFCD5844  : public RuntimeObject
{
	RuntimeObject* ___observer;
	RuntimeObject* ___cancel;
};
struct OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627  : public RuntimeObject
{
	RuntimeObject* ___observer;
	RuntimeObject* ___cancel;
};
struct OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37  : public RuntimeObject
{
	RuntimeObject* ___observer;
	RuntimeObject* ___cancel;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct RightObserver_tD89649C363EBB9D55FD41D18A2603BE0282C6FBE  : public RuntimeObject
{
	WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* ___parent;
	RuntimeObject* ___selfSubscription;
};
struct RightObserver_tCD0571F80F305840348F458D5771051BDE215447  : public RuntimeObject
{
	ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* ___parent;
};
struct RightZipObserver_t9BB70D85E6615F51DC252B76D25F1158B0963E3F  : public RuntimeObject
{
	Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* ___parent;
};
struct ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75  : public RuntimeObject
{
	ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* ___parent;
	int32_t ___index;
};
struct ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5 : public RuntimeObject {};
struct ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2  : public RuntimeObject
{
	Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* ___parent;
	int32_t ___index;
};
struct ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802  : public RuntimeObject
{
	RuntimeObject* ___gate;
	RuntimeObject* ___parent;
	int32_t ___index;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___queue;
};
struct SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE  : public RuntimeObject
{
	RuntimeObject* ___gate;
	RuntimeObject* ___current;
	bool ___disposed;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	int32_t ___length;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted;
};
struct NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* ___queues;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone;
	int32_t ___length;
};
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37  : public OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765
{
	RuntimeObject* ___source;
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate;
	Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* ___predicateWithIndex;
};
struct WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicateWithIndex;
};
struct WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate;
	Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___predicateWithIndex;
};
struct WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7  : public OperatorObserverBase_2_tAD90AC72A9B401D73ED3741005D25687BFCD5844
{
	WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* ___parent;
};
struct WhereSelect_tAA2481FAE0289C2C6DCFB3C830293C29C4B3A1A8  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C* ___parent;
};
struct WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB  : public OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector;
};
struct WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector;
};
struct Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531  : public OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A
{
	WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* ___parent;
	int32_t ___index;
};
struct Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* ___parent;
	int32_t ___index;
};
struct Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* ___parent;
	int32_t ___index;
};
struct WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4 : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37 {};
struct WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___left;
	RuntimeObject* ___right;
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector;
};
struct Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380  : public OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E
{
	ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* ___parent;
	RuntimeObject* ___gate;
	Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* ___queues;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone;
	int32_t ___length;
};
struct Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* ___parent;
	RuntimeObject* ___gate;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___leftQ;
	bool ___leftCompleted;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___rightQ;
	bool ___rightCompleted;
};
struct ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A  : public OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E
{
	ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* ___parent;
	RuntimeObject* ___gate;
	int32_t ___length;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted;
};
struct ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527 : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37 {};
struct ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C  : public OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41
{
	IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___sources;
};
struct ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___left;
	RuntimeObject* ___right;
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector;
};
struct ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* ___resultSelector;
};
struct ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* ___resultSelector;
};
struct ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* ___resultSelector;
};
struct ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* ___resultSelector;
};
struct ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* ___resultSelector;
};
struct ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2  : public OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41
{
	IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___sources;
};
struct ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___left;
	RuntimeObject* ___right;
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector;
};
struct ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* ___resultSelector;
};
struct ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* ___resultSelector;
};
struct ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* ___resultSelector;
};
struct ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* ___resultSelector;
};
struct ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* ___resultSelector;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value;
	int32_t ___m_Type;
	RuntimeObject* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list;
	int32_t ____index;
	int32_t ____version;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current;
};
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* ___parent;
	RuntimeObject* ___gate;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3;
};
struct Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* ___parent;
	RuntimeObject* ___gate;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4;
};
struct Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* ___parent;
	RuntimeObject* ___gate;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q5;
};
struct Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* ___parent;
	RuntimeObject* ___gate;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q5;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q6;
};
struct Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* ___parent;
	RuntimeObject* ___gate;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q5;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q6;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q7;
};
struct ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* ___parent;
	RuntimeObject* ___gate;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3;
};
struct ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* ___parent;
	RuntimeObject* ___gate;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4;
};
struct ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* ___parent;
	RuntimeObject* ___gate;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c5;
};
struct ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* ___parent;
	RuntimeObject* ___gate;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c5;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c6;
};
struct ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* ___parent;
	RuntimeObject* ___gate;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c5;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c6;
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c7;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator;
};
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF  : public MulticastDelegate_t
{
};
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1  : public MulticastDelegate_t
{
};
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326  : public MulticastDelegate_t
{
};
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D  : public MulticastDelegate_t
{
};
struct ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962  : public MulticastDelegate_t
{
};
struct ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965  : public MulticastDelegate_t
{
};
struct ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9  : public MulticastDelegate_t
{
};
struct ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC  : public MulticastDelegate_t
{
};
struct ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB  : public MulticastDelegate_t
{
};
struct ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183  : public MulticastDelegate_t
{
};
struct ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69  : public MulticastDelegate_t
{
};
struct ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6  : public MulticastDelegate_t
{
};
struct ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3  : public RuntimeArray
{
	ALIGN_FIELD (8) Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* m_Items[1];

	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisRuntimeObject_m144B03F0603C8232A452B46928BEEB1B6C403AEF_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObservableBase_1__ctor_m8E358D84F98245F348C736AE6517A6E14B478B23_gshared (OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765* __this, bool ___0_isRequiredSubscribeOnCurrentThread, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelect__ctor_m6BCE7A585339A07F3976E00078A559D6348E2445_gshared (WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7* __this, WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2__ctor_m355B4B8A6ED2D16851EF9291EB365678A7B2E9AD_gshared (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mC686208D9B179DC95355A0E0D49FAB7B101CEF14_gshared_inline (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* __this, bool ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2_Dispose_mD2677A1122952694E6A454AB9226C497F146355B_gshared (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2__ctor_m6D849DC0DD5EE34A22139215AEB9594684813863_gshared (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mA2E67EB4D9947E4D56A2E7E2022D4A6D0BA37E90_gshared_inline (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2_Dispose_m4FE9C0AD484389F1B7D7A6C9F7D28F8B3B7E407A_gshared (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627* __this, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64 (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline)(__this, ___0_arg, method);
}
inline bool OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisRuntimeObject_m144B03F0603C8232A452B46928BEEB1B6C403AEF (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisRuntimeObject_m144B03F0603C8232A452B46928BEEB1B6C403AEF_gshared)(___0_source, method);
}
inline void OperatorObservableBase_1__ctor_m8E358D84F98245F348C736AE6517A6E14B478B23 (OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765* __this, bool ___0_isRequiredSubscribeOnCurrentThread, const RuntimeMethod* method)
{
	((  void (*) (OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765*, bool, const RuntimeMethod*))OperatorObservableBase_1__ctor_m8E358D84F98245F348C736AE6517A6E14B478B23_gshared)(__this, ___0_isRequiredSubscribeOnCurrentThread, method);
}
inline void WhereSelect__ctor_m6BCE7A585339A07F3976E00078A559D6348E2445 (WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7* __this, WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method)
{
	((  void (*) (WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7*, WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))WhereSelect__ctor_m6BCE7A585339A07F3976E00078A559D6348E2445_gshared)(__this, ___0_parent, ___1_observer, ___2_cancel, method);
}
inline void OperatorObserverBase_2__ctor_m355B4B8A6ED2D16851EF9291EB365678A7B2E9AD (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))OperatorObserverBase_2__ctor_m355B4B8A6ED2D16851EF9291EB365678A7B2E9AD_gshared)(__this, ___0_observer, ___1_cancel, method);
}
inline bool Func_3_Invoke_mC686208D9B179DC95355A0E0D49FAB7B101CEF14_inline (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* __this, bool ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1*, bool, int32_t, const RuntimeMethod*))Func_3_Invoke_mC686208D9B179DC95355A0E0D49FAB7B101CEF14_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void OperatorObserverBase_2_Dispose_mD2677A1122952694E6A454AB9226C497F146355B (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A* __this, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*, const RuntimeMethod*))OperatorObserverBase_2_Dispose_mD2677A1122952694E6A454AB9226C497F146355B_gshared)(__this, method);
}
inline void OperatorObserverBase_2__ctor_m6D849DC0DD5EE34A22139215AEB9594684813863 (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))OperatorObserverBase_2__ctor_m6D849DC0DD5EE34A22139215AEB9594684813863_gshared)(__this, ___0_observer, ___1_cancel, method);
}
inline bool Func_3_Invoke_mA2E67EB4D9947E4D56A2E7E2022D4A6D0BA37E90_inline (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))Func_3_Invoke_mA2E67EB4D9947E4D56A2E7E2022D4A6D0BA37E90_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void OperatorObserverBase_2_Dispose_m4FE9C0AD484389F1B7D7A6C9F7D28F8B3B7E407A (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627* __this, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))OperatorObserverBase_2_Dispose_m4FE9C0AD484389F1B7D7A6C9F7D28F8B3B7E407A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable__ctor_mD18F9FC3F63F6FEBBA649E80A3B7DDE205A174C0 (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable_set_Disposable_mB73E42A9CEE96E39A067CF23EBD4F9DDD8F6F672 (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m5D5EAA49FB4EC4511BB1750B44E0836762530FC3 (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_disposeAction, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_CreateUnsafe_m61E9E95FD914CF4A0EB267CBE46D63AB1066FD08 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___0_disposables, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724 (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, RuntimeObject* ___2_disposable3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94 (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, RuntimeObject* ___2_disposable3, RuntimeObject* ___3_disposable4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___0_disposables, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = __this->___selector;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD7DFE8C6AD3458E99FCBEA0751FF7C4043732CD4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = __this->___selector;
		WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* L_3 = (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F302C62B7FF8D42DDE74A666313CDC858137AC4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_Value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___tempData), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m98B6BE2F15454CBA305692F230C66425836665F4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = __this->___selector;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_Value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___tempData), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_m5BF834963C6F28B9B27351F9323CA8D7582CACE5_gshared (WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___2_selector, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		bool L_1;
		L_1 = OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisRuntimeObject_m144B03F0603C8232A452B46928BEEB1B6C403AEF(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		OperatorObservableBase_1__ctor_m8E358D84F98245F348C736AE6517A6E14B478B23((OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___0_source;
		__this->___source = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_2);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = ___1_predicate;
		__this->___predicate = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_3);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_4 = ___2_selector;
		__this->___selector = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_mF25AA34ECFEE8E3A6F18B233166A98C20002F2D1_gshared (WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		RuntimeObject* L_1 = ___0_observer;
		RuntimeObject* L_2 = ___1_cancel;
		WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7* L_3 = (WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		WhereSelect__ctor_m6BCE7A585339A07F3976E00078A559D6348E2445(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (RuntimeObject*)L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_m999414A512DDE8FF52B40E4A0CF90E5045C5D811_gshared (WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___0_source;
		__this->___source = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_2);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3 = ___1_predicate;
		__this->___predicate = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_3);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_4 = ___2_selector;
		__this->___selector = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_m28D55822322095338ACAEE50EC3A7D7C4C68807D_gshared (WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		RuntimeObject* L_1 = ___0_observer;
		RuntimeObject* L_2 = ___1_cancel;
		WhereSelect_tAA2481FAE0289C2C6DCFB3C830293C29C4B3A1A8* L_3 = (WhereSelect_tAA2481FAE0289C2C6DCFB3C830293C29C4B3A1A8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (WhereSelect_tAA2481FAE0289C2C6DCFB3C830293C29C4B3A1A8*, WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (RuntimeObject*)L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mB794EE4AC741209354CD35EE38263609E43CA3F8_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		OperatorObserverBase_2__ctor_m355B4B8A6ED2D16851EF9291EB365678A7B2E9AD((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* L_2 = ___0_parent;
		__this->___parent = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_2);
		__this->___index = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_mF8582A67206EF4A5BFDBB11BA03F8A88E653CAE3_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, bool ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* L_0 = __this->___parent;
		NullCheck(L_0);
		Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* L_1 = L_0->___predicateWithIndex;
		bool L_2 = ___0_value;
		int32_t L_3 = __this->___index;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = Func_3_Invoke_mC686208D9B179DC95355A0E0D49FAB7B101CEF14_inline(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_6;
		goto IL_0041;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{
		{
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{
					NullCheck((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this);
					OperatorObserverBase_2_Dispose_mD2677A1122952694E6A454AB9226C497F146355B((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
					return;
				}
			});
			try
			{
				RuntimeObject* L_7 = ((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_7, L_8);
				goto IL_003f;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}

IL_0041:
	{
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_10 = ((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		bool L_11 = ___0_value;
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_10, L_11);
	}

IL_0052:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m298E66542326A3206746DA78B8E5637640B9243E_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this);
				OperatorObserverBase_2_Dispose_mD2677A1122952694E6A454AB9226C497F146355B((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m4779DA015932E96ADB792F42F3AB59FEBF674C5B_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this);
				OperatorObserverBase_2_Dispose_mD2677A1122952694E6A454AB9226C497F146355B((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mA693A68D9AE18C5CFEACEB44E2FA38C36304FA83_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		OperatorObserverBase_2__ctor_m6D849DC0DD5EE34A22139215AEB9594684813863((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* L_2 = ___0_parent;
		__this->___parent = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_2);
		__this->___index = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_m981C1D8949EBB063A92AED4F1A7F9075614E8FA2_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* L_0 = __this->___parent;
		NullCheck(L_0);
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = L_0->___predicateWithIndex;
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3 = __this->___index;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = Func_3_Invoke_mA2E67EB4D9947E4D56A2E7E2022D4A6D0BA37E90_inline(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_6;
		goto IL_0041;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{
		{
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{
					NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
					OperatorObserverBase_2_Dispose_m4FE9C0AD484389F1B7D7A6C9F7D28F8B3B7E407A((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
					return;
				}
			});
			try
			{
				RuntimeObject* L_7 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_7, L_8);
				goto IL_003f;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}

IL_0041:
	{
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_10 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_11 = ___0_value;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_10, L_11);
	}

IL_0052:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m1DEBA46E90305F1F07346D15A8E45C48E99A94D0_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				OperatorObserverBase_2_Dispose_m4FE9C0AD484389F1B7D7A6C9F7D28F8B3B7E407A((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m36475B4AF6919EF477621BAC4136ACAEBD8B7A0F_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				OperatorObserverBase_2_Dispose_m4FE9C0AD484389F1B7D7A6C9F7D28F8B3B7E407A((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mB43425063318B62AB672F302CD61D075D7DF5C12_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* L_2 = ___0_parent;
		__this->___parent = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_2);
		__this->___index = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_m02ABD860C13A37082F170A02D8D73938CA0B55C7_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963);
	const Il2CppFullySharedGenericAny L_11 = L_2;
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* L_0 = __this->___parent;
		NullCheck(L_0);
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = L_0->___predicateWithIndex;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963);
		int32_t L_3 = __this->___index;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_2: *(void**)L_2), L_5);
		V_0 = L_6;
		goto IL_0041;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{
		{
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{
					NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
					return;
				}
			});
			try
			{
				RuntimeObject* L_7 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_7, L_8);
				goto IL_003f;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}

IL_0041:
	{
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_10 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963);
		NullCheck(L_10);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
	}

IL_0052:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m5BCD9A29560E003FD09854E0AC68B010197A5694_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_mD434ED3D661515B7E18B717162FB72EB85F96FB7_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom__ctor_m4A9C9A8E6F8E158C3082D2890E523AC4C681DE81_gshared (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* L_3 = ___0_parent;
		il2cpp_codegen_write_instance_field_data<WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFrom_Run_m9BAEBB94073033DDE38785CCD1BB25843866B55E_gshared (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* V_0 = NULL;
	{
		WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* L_0 = *(WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___left;
		LeftObserver_tBD9CC4BC709982E0C2956F9F65443C863A5055BE* L_2 = (LeftObserver_tBD9CC4BC709982E0C2956F9F65443C863A5055BE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (LeftObserver_tBD9CC4BC709982E0C2956F9F65443C863A5055BE*, WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_1, (RuntimeObject*)L_2);
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_4 = (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE*)il2cpp_codegen_object_new(SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var);
		SingleAssignmentDisposable__ctor_mD18F9FC3F63F6FEBBA649E80A3B7DDE205A174C0(L_4, NULL);
		V_0 = L_4;
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_5 = V_0;
		WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* L_6 = *(WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___right;
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_8 = V_0;
		RightObserver_tD89649C363EBB9D55FD41D18A2603BE0282C6FBE* L_9 = (RightObserver_tD89649C363EBB9D55FD41D18A2603BE0282C6FBE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (RightObserver_tD89649C363EBB9D55FD41D18A2603BE0282C6FBE*, WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, __this, (RuntimeObject*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_7, (RuntimeObject*)L_9);
		NullCheck(L_5);
		SingleAssignmentDisposable_set_Disposable_mB73E42A9CEE96E39A067CF23EBD4F9DDD8F6F672(L_5, L_10, NULL);
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = StableCompositeDisposable_Create_m5D5EAA49FB4EC4511BB1750B44E0836762530FC3(L_3, (RuntimeObject*)L_11, NULL);
		return (RuntimeObject*)L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnNext_mDFAD498950658579A3B68FD4AC470DED798E5F21_gshared (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t19EDD6F703CC0D3C63679F268516A40C787C0F62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_t19EDD6F703CC0D3C63679F268516A40C787C0F62);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_value : &___0_value), SizeOf_TResult_t19EDD6F703CC0D3C63679F268516A40C787C0F62);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnError_m64EA8EC3C84884AB77429BF323C6E6C67661C2DB_gshared (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnCompleted_m04E2E510407F8F06142A2CCF5BAE86FD9EF35C26_gshared (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFromObservable_3__ctor_m0AC5FC569C443CFD90C03493E1080E4443913F19_gshared (WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_selector, const RuntimeMethod* method) 
{
	WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* G_B2_0 = NULL;
	WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_4 = ___0_left;
		__this->___left = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left), (void*)L_4);
		RuntimeObject* L_5 = ___1_right;
		__this->___right = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right), (void*)L_5);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_6 = ___2_selector;
		__this->___selector = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFromObservable_3_SubscribeCore_mFF832DB6668FAFA6DE7EC164D107C54B9653047F_gshared (WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* L_2 = (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4*, WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m2CF876688E3626B7099110BD7CFEA4EF820B7CEE_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* L_3 = ___0_parent;
		__this->___parent = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m30A87BED860C57ADED1EFE743A5099C6B304C7A4_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* L_0 = __this->___parent;
		NullCheck(L_0);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_1 = L_0->___sources;
		NullCheck(L_1);
		__this->___length = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = __this->___length;
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_3 = (Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)(Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (uint32_t)L_2);
		__this->___queues = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queues), (void*)L_3);
		int32_t L_4 = __this->___length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isDone = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isDone), (void*)L_5);
		V_1 = 0;
		goto IL_004a;
	}

IL_0039:
	{
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_6 = __this->___queues;
		int32_t L_7 = V_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004a:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->___length;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_12 = __this->___length;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_13 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_12, 1)));
		V_0 = L_13;
		V_2 = 0;
		goto IL_0087;
	}

IL_0065:
	{
		ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* L_14 = __this->___parent;
		NullCheck(L_14);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_15 = L_14->___sources;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_19 = V_0;
		int32_t L_20 = V_2;
		RuntimeObject* L_21 = V_3;
		int32_t L_22 = V_2;
		ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* L_23 = (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2*, Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_23, __this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_21);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_21, (RuntimeObject*)L_23);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0087:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = __this->___length;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0065;
		}
	}
	{
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_28 = V_0;
		int32_t L_29 = __this->___length;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_30, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (RuntimeObject*)L_31);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_32 = V_0;
		RuntimeObject* L_33;
		L_33 = StableCompositeDisposable_CreateUnsafe_m61E9E95FD914CF4A0EB267CBE46D63AB1066FD08(L_32, NULL);
		return (RuntimeObject*)L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m397187375D7AA9FADA0E308368C66A576F40DABE_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE0320821E874BDFEA680D8E36B709B9201E86966 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T_tE0320821E874BDFEA680D8E36B709B9201E86966);
	bool V_0 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = (bool)1;
		V_2 = 0;
		goto IL_001d;
	}

IL_0006:
	{
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_0 = __this->___queues;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0026;
	}

IL_0019:
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = __this->___length;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_0026:
	{
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		V_3 = (bool)1;
		V_4 = 0;
		goto IL_004a;
	}

IL_0030:
	{
		int32_t L_9 = V_4;
		int32_t L_10 = ___0_index;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0044;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->___isDone;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0044;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0054;
	}

IL_0044:
	{
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = __this->___length;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0030;
		}
	}

IL_0054:
	{
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			RuntimeObject* L_19 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_19);
			goto IL_006d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}

IL_006e:
	{
		return;
	}

IL_006f:
	{
		int32_t L_20 = __this->___length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 21), (uint32_t)L_20);
		V_1 = L_21;
		V_5 = 0;
		goto IL_009c;
	}

IL_0080:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_1;
		int32_t L_23 = V_5;
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_24 = __this->___queues;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_27, (Il2CppFullySharedGenericAny*)L_28);
		NullCheck(L_22);
		il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), L_28, SizeOf_T_tE0320821E874BDFEA680D8E36B709B9201E86966);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 23), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), (void*)L_28);
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009c:
	{
		int32_t L_30 = V_5;
		int32_t L_31 = __this->___length;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0080;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = V_1;
		NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
		VirtualActionInvoker1Invoker< RuntimeObject* >::Invoke(8, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, (RuntimeObject*)L_32);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m7F31C9BF2B144B5AE3BF753809976B63D27BDFF0_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mB2E6586A12FAD2D1607E5837D4DA4B396A8737D0_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m7C0A5FCCAD62A5543F3A2B5612A012A75FFFD78D_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_m91A13828F81755CA1A978D58AC423725A223392C_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003a:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_0026_1;
			}

IL_0015_1:
			{
				Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_4 = __this->___queues;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				NullCheck(L_7);
				((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				int32_t L_8 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0026_1:
			{
				int32_t L_9 = V_2;
				int32_t L_10 = __this->___length;
				if ((((int32_t)L_9) < ((int32_t)L_10)))
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mE4EB323DC77CE1A83053548A1B03A4BEB3ECAFEB_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___leftQ = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftQ), (void*)L_1);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___rightQ = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightQ), (void*)L_2);
		RuntimeObject* L_3 = ___1_observer;
		RuntimeObject* L_4 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_5 = ___0_parent;
		__this->___parent = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m842DCDC910956AE9D8BE1B3089554C901A2F049F_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___left;
		LeftZipObserver_tF654ECFF4ABF554CCB22A1BD44613E0BB6A39ACD* L_2 = (LeftZipObserver_tF654ECFF4ABF554CCB22A1BD44613E0BB6A39ACD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (LeftZipObserver_tF654ECFF4ABF554CCB22A1BD44613E0BB6A39ACD*, Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_1, (RuntimeObject*)L_2);
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_4 = __this->___parent;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___right;
		RightZipObserver_t9BB70D85E6615F51DC252B76D25F1158B0963E3F* L_6 = (RightZipObserver_t9BB70D85E6615F51DC252B76D25F1158B0963E3F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		((  void (*) (RightZipObserver_t9BB70D85E6615F51DC252B76D25F1158B0963E3F*, Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_6, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 19)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_9, NULL);
		RuntimeObject* L_11;
		L_11 = StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724(L_3, L_8, L_10, NULL);
		return (RuntimeObject*)L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m7F0580F37A6D5CA67305C366460237ECDC9EC9E0_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const uint32_t SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const uint32_t SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
	const Il2CppFullySharedGenericAny L_13 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
	const Il2CppFullySharedGenericAny L_14 = L_7;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	const Il2CppFullySharedGenericAny L_18 = L_15;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
	memset(V_0, 0, SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
	memset(V_1, 0, SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	memset(V_2, 0, SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = __this->___leftQ;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___rightQ;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___leftQ;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___rightQ;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
		goto IL_005d;
	}

IL_0034:
	{
		bool L_8 = __this->___leftCompleted;
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = __this->___rightCompleted;
		if (!L_9)
		{
			goto IL_005c;
		}
	}

IL_0044:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				return;
			}
		});
		try
		{
			RuntimeObject* L_10 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_10);
			goto IL_005b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		return;
	}

IL_005c:
	{
		return;
	}

IL_005d:
	{
	}
	try
	{
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_11 = __this->___parent;
		NullCheck(L_11);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_12 = L_11->___selector;
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
		il2cpp_codegen_memcpy(L_14, V_1, SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
		NullCheck(L_12);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_memcpy(V_2, L_15, SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
		goto IL_008d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0073;
		}
		throw e;
	}

CATCH_0073:
	{
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0084:
				{
					NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
					return;
				}
			});
			try
			{
				RuntimeObject* L_16 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_17 = V_3;
				NullCheck(L_16);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_16, L_17);
				goto IL_008b;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_008b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0094;
		}
	}

IL_008d:
	{
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
		NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(8, (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_18: *(void**)L_18));
	}

IL_0094:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m69F62F291B53410328F5CB6AF9AE12A9A24D4D9E_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___0_value : &___0_value), SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m8F25DE971A5FB4E626B7B174C8F11246219EF781_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m56D9B4C0B5B3315A7B74ED7210EE2DB8811A4935_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_mB9543A5015975113A396ABFEAFF25172EF7ADAF4_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0032:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___leftQ;
			NullCheck(L_4);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = __this->___rightQ;
			NullCheck(L_5);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			goto IL_0033;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m892AF3D5EDD35CA6D66CC115F22239591941A174_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___q1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1), (void*)L_1);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___q2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2), (void*)L_2);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___q3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3), (void*)L_3);
		RuntimeObject* L_4 = ___1_observer;
		RuntimeObject* L_5 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_6 = ___0_parent;
		__this->___parent = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mAD36379517E2BE9C8D02656C239F9E450765D392_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)3);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_7 = __this->___parent;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___source1;
		RuntimeObject* L_9 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q1;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_11 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_11, L_9, (RuntimeObject*)__this, 0, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_8, (RuntimeObject*)L_11);
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_13 = __this->___parent;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___source2;
		RuntimeObject* L_15 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_16 = __this->___q2;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_17 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_17, L_15, (RuntimeObject*)__this, 1, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_19 = __this->___parent;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___source3;
		RuntimeObject* L_21 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_22 = __this->___q3;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_23 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_23, L_21, (RuntimeObject*)__this, 2, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		RuntimeObject* L_25 = V_0;
		RuntimeObject* L_26 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 28)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_28;
		L_28 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_27, NULL);
		RuntimeObject* L_29;
		L_29 = StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94(L_12, L_25, L_26, L_28, NULL);
		return (RuntimeObject*)L_29;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m9E02DDDEDB83DF0841560589740D07B1A4DD9A63_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
	const uint32_t SizeOf_T1_t8D945B0D7F624E824253F05BAF7D1A49D694C33B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t8D945B0D7F624E824253F05BAF7D1A49D694C33B);
	const uint32_t SizeOf_T2_tCFA54844647F1F882DCFC7234A32AB197453A08C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 33));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tCFA54844647F1F882DCFC7234A32AB197453A08C);
	const uint32_t SizeOf_T3_t91D5848DCDC81497DE7D2CFDB2F1498CFBC3C0D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t91D5848DCDC81497DE7D2CFDB2F1498CFBC3C0D0);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
	{
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* L_1 = L_0->___resultSelector;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), L_6, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_1);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 33)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35)) ? L_7: *(void**)L_7), (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_mABED9D1B057EAC9B62400EFB9A806A821D8DF2E2_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)) ? ___0_value : &___0_value), SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mCF1B94B0D9A156D986EA9035A991C2DFB7B19306_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m1E2DDDF41C856B5EF977BE519C89F156F42EE82C_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_m4E73569F9A4C94814878C55FDBFB8453780FCFCC_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003d:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q1;
			NullCheck(L_4);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = __this->___q2;
			NullCheck(L_5);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
			NullCheck(L_6);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
			goto IL_003e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m14452A4528F45C6C0EBE1C684E066AEE8C64B964_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___q1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1), (void*)L_1);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___q2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2), (void*)L_2);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___q3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3), (void*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___q4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4), (void*)L_4);
		RuntimeObject* L_5 = ___1_observer;
		RuntimeObject* L_6 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_7 = ___0_parent;
		__this->___parent = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mE23D6EF0218FB77D5D7587C09F2BE03E19900B9D_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_9 = __this->___parent;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___source1;
		RuntimeObject* L_11 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = __this->___q1;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_13 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_13, L_11, (RuntimeObject*)__this, 0, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_10, (RuntimeObject*)L_13);
		V_0 = L_14;
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_15 = __this->___parent;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___source2;
		RuntimeObject* L_17 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_18 = __this->___q2;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_19 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 21));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_19, L_17, (RuntimeObject*)__this, 1, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_16, (RuntimeObject*)L_19);
		V_1 = L_20;
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_21 = __this->___parent;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->___source3;
		RuntimeObject* L_23 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_24 = __this->___q3;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_25 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_25, L_23, (RuntimeObject*)__this, 2, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_22, (RuntimeObject*)L_25);
		V_2 = L_26;
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_27 = __this->___parent;
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->___source4;
		RuntimeObject* L_29 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_30 = __this->___q4;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_31 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 31));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_31, L_29, (RuntimeObject*)__this, 3, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_28, (RuntimeObject*)L_31);
		V_3 = L_32;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_34 = L_33;
		RuntimeObject* L_35 = V_0;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = L_34;
		RuntimeObject* L_37 = V_1;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_38 = L_36;
		RuntimeObject* L_39 = V_2;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_39);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_40 = L_38;
		RuntimeObject* L_41 = V_3;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_41);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_40;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_43, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 35)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_44;
		L_44 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_43, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_44);
		RuntimeObject* L_45;
		L_45 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_42, NULL);
		return (RuntimeObject*)L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_mA4CD9F66057E491430634FD362D6D401C5E8A06D_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 46));
	const uint32_t SizeOf_T1_t6F9803295BA3EC4607E958288D660EEC1339C821 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t6F9803295BA3EC4607E958288D660EEC1339C821);
	const uint32_t SizeOf_T2_t6018134346BAE2CC39184551475C3418C8C9B571 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t6018134346BAE2CC39184551475C3418C8C9B571);
	const uint32_t SizeOf_T3_tCE9394636DF012695B52DA67285AE4B4F51A67ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tCE9394636DF012695B52DA67285AE4B4F51A67ED);
	const uint32_t SizeOf_T4_t5DF4344513170C2C9F7255322ADD9F66B64CC9EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 44));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t5DF4344513170C2C9F7255322ADD9F66B64CC9EE);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
	{
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* L_1 = L_0->___resultSelector;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_1);
		InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 44)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m815DCB95F14A9E6CB47E397D3C497B54C391B39A_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 46));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 46)) ? ___0_value : &___0_value), SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 46)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mEBCCA3ACCC70A993688A05777A6A06B474697BE3_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m3038E0FF7571EEAD17347C3A2605F88A974EC3B2_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_mE0B476389150D15863E5BB11AC1D044237907E46_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0048:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q1;
			NullCheck(L_4);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = __this->___q2;
			NullCheck(L_5);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
			NullCheck(L_6);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = __this->___q4;
			NullCheck(L_7);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
			goto IL_0049;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m471D0840EEED70AA39AE41FAFDBD33A13D38CBBE_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___q1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1), (void*)L_1);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___q2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2), (void*)L_2);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___q3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3), (void*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___q4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4), (void*)L_4);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___q5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5), (void*)L_5);
		RuntimeObject* L_6 = ___1_observer;
		RuntimeObject* L_7 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_8 = ___0_parent;
		__this->___parent = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mC84493C05D994B2B8066BE4B4CB3B2F9B5F47839_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)5);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_11 = __this->___parent;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___source1;
		RuntimeObject* L_13 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_14 = __this->___q1;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_15 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_15, L_13, (RuntimeObject*)__this, 0, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_12, (RuntimeObject*)L_15);
		V_0 = L_16;
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_17 = __this->___parent;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___source2;
		RuntimeObject* L_19 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_20 = __this->___q2;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_21 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_21, L_19, (RuntimeObject*)__this, 1, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_18);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_18, (RuntimeObject*)L_21);
		V_1 = L_22;
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_23 = __this->___parent;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___source3;
		RuntimeObject* L_25 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_26 = __this->___q3;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_27 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_27, L_25, (RuntimeObject*)__this, 2, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_24);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_24, (RuntimeObject*)L_27);
		V_2 = L_28;
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_29 = __this->___parent;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___source4;
		RuntimeObject* L_31 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_32 = __this->___q4;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_33 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 33));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_33, L_31, (RuntimeObject*)__this, 3, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		NullCheck(L_30);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_30, (RuntimeObject*)L_33);
		V_3 = L_34;
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_35 = __this->___parent;
		NullCheck(L_35);
		RuntimeObject* L_36 = L_35->___source5;
		RuntimeObject* L_37 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_38 = __this->___q5;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_39 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_39, L_37, (RuntimeObject*)__this, 4, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_36);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_36, (RuntimeObject*)L_39);
		V_4 = L_40;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_41;
		RuntimeObject* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_43);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_44 = L_42;
		RuntimeObject* L_45 = V_1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_45);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_46 = L_44;
		RuntimeObject* L_47 = V_2;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_47);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_48 = L_46;
		RuntimeObject* L_49 = V_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_49);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_48;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_53 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_53, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 42)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_54;
		L_54 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_53, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		RuntimeObject* L_55;
		L_55 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_52, NULL);
		return (RuntimeObject*)L_55;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m1BAECEFD3696E9C467EA4B933F9F566D1AF10A4D_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 55));
	const uint32_t SizeOf_T1_t629D7FD7BA136043F6C6661F162935C4F9C2C5AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 45));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t629D7FD7BA136043F6C6661F162935C4F9C2C5AD);
	const uint32_t SizeOf_T2_tD00F5744E8C7CB8D04122B9008176D9DFE69F4A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 47));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tD00F5744E8C7CB8D04122B9008176D9DFE69F4A7);
	const uint32_t SizeOf_T3_tCBA615CCBCAC4C4305DEB6D026EE1BA8C481F4A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tCBA615CCBCAC4C4305DEB6D026EE1BA8C481F4A9);
	const uint32_t SizeOf_T4_t22CC08F11AAD0BE8EE74CC12732F294D6124CCAC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 51));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t22CC08F11AAD0BE8EE74CC12732F294D6124CCAC);
	const uint32_t SizeOf_T5_t0F22F8E7AFD3B88FE700E7C031CDDB0CB1A78F8B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 53));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t0F22F8E7AFD3B88FE700E7C031CDDB0CB1A78F8B);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
	{
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* L_1 = L_0->___resultSelector;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), L_8, (Il2CppFullySharedGenericAny*)L_9);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q5;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), L_10, (Il2CppFullySharedGenericAny*)L_11);
		NullCheck(L_1);
		InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 45)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 47)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 51)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 53)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m4A7706190CD763F362224AAF850255A321A7A838_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 55));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 55)) ? ___0_value : &___0_value), SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 55)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mDE1C0B00EECFA4EED90B454F6941F22581C2E925_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m55DE56DD5D97117CC744CE36E90EAF4B15AA720B_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__8_0_m21E8E090A9C667AA82EA486C1016607E8625DE57_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0053:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q1;
			NullCheck(L_4);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = __this->___q2;
			NullCheck(L_5);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
			NullCheck(L_6);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = __this->___q4;
			NullCheck(L_7);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q5;
			NullCheck(L_8);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
			goto IL_0054;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m6FD870DD5F8C41629D34A32B5DF434CE0AE67C46_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___q1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1), (void*)L_1);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___q2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2), (void*)L_2);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___q3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3), (void*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___q4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4), (void*)L_4);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___q5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5), (void*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___q6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6), (void*)L_6);
		RuntimeObject* L_7 = ___1_observer;
		RuntimeObject* L_8 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_9 = ___0_parent;
		__this->___parent = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mE69AA20C369702DBC149772FBEBE4004711F1A87_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = __this->___q6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_13 = __this->___parent;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___source1;
		RuntimeObject* L_15 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_16 = __this->___q1;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_17 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_17, L_15, (RuntimeObject*)__this, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_19 = __this->___parent;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___source2;
		RuntimeObject* L_21 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_22 = __this->___q2;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_23 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_23, L_21, (RuntimeObject*)__this, 1, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_25 = __this->___parent;
		NullCheck(L_25);
		RuntimeObject* L_26 = L_25->___source3;
		RuntimeObject* L_27 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_28 = __this->___q3;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_29 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 30));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_29, L_27, (RuntimeObject*)__this, 2, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_26);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_26, (RuntimeObject*)L_29);
		V_2 = L_30;
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_31 = __this->___parent;
		NullCheck(L_31);
		RuntimeObject* L_32 = L_31->___source4;
		RuntimeObject* L_33 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_34 = __this->___q4;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_35 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 35));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_35, L_33, (RuntimeObject*)__this, 3, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		NullCheck(L_32);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 34), L_32, (RuntimeObject*)L_35);
		V_3 = L_36;
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_37 = __this->___parent;
		NullCheck(L_37);
		RuntimeObject* L_38 = L_37->___source5;
		RuntimeObject* L_39 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_40 = __this->___q5;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_41 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 40));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_41, L_39, (RuntimeObject*)__this, 4, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		NullCheck(L_38);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 39), L_38, (RuntimeObject*)L_41);
		V_4 = L_42;
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_43 = __this->___parent;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___source6;
		RuntimeObject* L_45 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_46 = __this->___q6;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_47 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_47, L_45, (RuntimeObject*)__this, 5, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_44);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 44), L_44, (RuntimeObject*)L_47);
		V_5 = L_48;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_49;
		RuntimeObject* L_51 = V_0;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		RuntimeObject* L_53 = V_1;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_54 = L_52;
		RuntimeObject* L_55 = V_2;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_55);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_56 = L_54;
		RuntimeObject* L_57 = V_3;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_57);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_56;
		RuntimeObject* L_59 = V_4;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_5;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_63 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_63, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 49)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_64;
		L_64 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_63, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_64);
		RuntimeObject* L_65;
		L_65 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_62, NULL);
		return (RuntimeObject*)L_65;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m3DB9BF29A4E453D22BA0B1E92E2E6B2B53629209_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 64));
	const uint32_t SizeOf_T1_tA42A0D3D176666A701C2A9A308808017DA114B18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 52));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tA42A0D3D176666A701C2A9A308808017DA114B18);
	const uint32_t SizeOf_T2_t7034EF6F1D0D8629FBFDF2616863E6EBBCDAC0A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t7034EF6F1D0D8629FBFDF2616863E6EBBCDAC0A6);
	const uint32_t SizeOf_T3_tC21F425E0EDBAEE6096EBE279B8598224C8CF33B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 56));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tC21F425E0EDBAEE6096EBE279B8598224C8CF33B);
	const uint32_t SizeOf_T4_t4E91BF30E60A6022457B47E61C438F01793C7EFA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 58));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t4E91BF30E60A6022457B47E61C438F01793C7EFA);
	const uint32_t SizeOf_T5_t72A95B6FBFE7165CE440D1EE34AA38DD9BE41FB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t72A95B6FBFE7165CE440D1EE34AA38DD9BE41FB5);
	const uint32_t SizeOf_T6_t5525F06CC1728FBCFFC8F48BFBA2135B60EAA3CB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 62));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t5525F06CC1728FBCFFC8F48BFBA2135B60EAA3CB);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
	{
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* L_1 = L_0->___resultSelector;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), L_8, (Il2CppFullySharedGenericAny*)L_9);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q5;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)), il2cpp_rgctx_method(method->klass->rgctx_data, 59), L_10, (Il2CppFullySharedGenericAny*)L_11);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = __this->___q6;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)), il2cpp_rgctx_method(method->klass->rgctx_data, 61), L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_1);
		InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 52)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 56)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 58)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 62)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m4B267BB5DB8F39FC6017F0E6173202B9499E6C67_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 64));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 64)) ? ___0_value : &___0_value), SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 64)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m29270C60AB0A898DB3572CA4D32FB4F59C28693E_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 69)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 69));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m72F2452B0C86FCC4E574F7589824A77998ADE34C_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 69)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 69));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__9_0_m63C15A9D7428C52C461CB1141E7953C53571C598_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005e:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q1;
			NullCheck(L_4);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 71)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 71));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = __this->___q2;
			NullCheck(L_5);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
			NullCheck(L_6);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 73)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = __this->___q4;
			NullCheck(L_7);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 74)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 74));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q5;
			NullCheck(L_8);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 75)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 75));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = __this->___q6;
			NullCheck(L_9);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
			goto IL_005f;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mD61387F93BB475B87D60D28BCA4B68D08238290A_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->___q1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1), (void*)L_1);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___q2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2), (void*)L_2);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___q3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3), (void*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___q4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4), (void*)L_4);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___q5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5), (void*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___q6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6), (void*)L_6);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->___q7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q7), (void*)L_7);
		RuntimeObject* L_8 = ___1_observer;
		RuntimeObject* L_9 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_10 = ___0_parent;
		__this->___parent = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mD16D77F1FF5CA19949B07FFD192FE78CF2956975_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)7);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = __this->___q6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_13 = L_11;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_14 = __this->___q7;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_14);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		((  void (*) (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_15 = __this->___parent;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___source1;
		RuntimeObject* L_17 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_18 = __this->___q1;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_19 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_19, L_17, (RuntimeObject*)__this, 0, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_16, (RuntimeObject*)L_19);
		V_0 = L_20;
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_21 = __this->___parent;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->___source2;
		RuntimeObject* L_23 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_24 = __this->___q2;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_25 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_25, L_23, (RuntimeObject*)__this, 1, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_22, (RuntimeObject*)L_25);
		V_1 = L_26;
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_27 = __this->___parent;
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->___source3;
		RuntimeObject* L_29 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_30 = __this->___q3;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_31 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_31, L_29, (RuntimeObject*)__this, 2, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_28, (RuntimeObject*)L_31);
		V_2 = L_32;
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_33 = __this->___parent;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___source4;
		RuntimeObject* L_35 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_36 = __this->___q4;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_37 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_37, L_35, (RuntimeObject*)__this, 3, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_34);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 36), L_34, (RuntimeObject*)L_37);
		V_3 = L_38;
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_39 = __this->___parent;
		NullCheck(L_39);
		RuntimeObject* L_40 = L_39->___source5;
		RuntimeObject* L_41 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_42 = __this->___q5;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_43 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_43, L_41, (RuntimeObject*)__this, 4, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		NullCheck(L_40);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_40, (RuntimeObject*)L_43);
		V_4 = L_44;
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_45 = __this->___parent;
		NullCheck(L_45);
		RuntimeObject* L_46 = L_45->___source6;
		RuntimeObject* L_47 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_48 = __this->___q6;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_49 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 47));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_49, L_47, (RuntimeObject*)__this, 5, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		NullCheck(L_46);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 46), L_46, (RuntimeObject*)L_49);
		V_5 = L_50;
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_51 = __this->___parent;
		NullCheck(L_51);
		RuntimeObject* L_52 = L_51->___source7;
		RuntimeObject* L_53 = __this->___gate;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_54 = __this->___q7;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_55 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 52));
		((  void (*) (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(L_55, L_53, (RuntimeObject*)__this, 6, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		NullCheck(L_52);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 51), L_52, (RuntimeObject*)L_55);
		V_6 = L_56;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_57 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)8);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_57;
		RuntimeObject* L_59 = V_0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_1;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		RuntimeObject* L_63 = V_2;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_63);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_64 = L_62;
		RuntimeObject* L_65 = V_3;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_65);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_66 = L_64;
		RuntimeObject* L_67 = V_4;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_67);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_68 = L_66;
		RuntimeObject* L_69 = V_5;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_69);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_70 = L_68;
		RuntimeObject* L_71 = V_6;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_71);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_72 = L_70;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_73 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_73, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 56)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_74;
		L_74 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_73, NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_74);
		RuntimeObject* L_75;
		L_75 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_72, NULL);
		return (RuntimeObject*)L_75;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m836F3DF8AC1E9F94232F357E92D6E4D6D3B93DCB_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 73));
	const uint32_t SizeOf_T1_t4734C379321AEB8E57AC4EB57DDC71F1A5CEC5E0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 59));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t4734C379321AEB8E57AC4EB57DDC71F1A5CEC5E0);
	const uint32_t SizeOf_T2_t3A494B5B8BDA74801BF442DF89378578D8B71E65 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 61));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t3A494B5B8BDA74801BF442DF89378578D8B71E65);
	const uint32_t SizeOf_T3_t64E3C7BE0AC134C94E2B59075F1E43D86BBCFFE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 63));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t64E3C7BE0AC134C94E2B59075F1E43D86BBCFFE4);
	const uint32_t SizeOf_T4_tA27470B0912839903DE172F5C37BBED6812BC661 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 65));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_tA27470B0912839903DE172F5C37BBED6812BC661);
	const uint32_t SizeOf_T5_t31F283B259B71506E181168B87C21650B66F5CD4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 67));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t31F283B259B71506E181168B87C21650B66F5CD4);
	const uint32_t SizeOf_T6_tFE82157822AA835F25133CE2C9E9188327E8D836 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 69));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tFE82157822AA835F25133CE2C9E9188327E8D836);
	const uint32_t SizeOf_T7_tEBE39BB933C01FCDD3E33CA5742611DC61B6FF6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 71));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_tEBE39BB933C01FCDD3E33CA5742611DC61B6FF6D);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
	{
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* L_1 = L_0->___resultSelector;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = __this->___q1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)), il2cpp_rgctx_method(method->klass->rgctx_data, 58), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)), il2cpp_rgctx_method(method->klass->rgctx_data, 62), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)), il2cpp_rgctx_method(method->klass->rgctx_data, 64), L_8, (Il2CppFullySharedGenericAny*)L_9);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q5;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)), il2cpp_rgctx_method(method->klass->rgctx_data, 66), L_10, (Il2CppFullySharedGenericAny*)L_11);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = __this->___q6;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 68)), il2cpp_rgctx_method(method->klass->rgctx_data, 68), L_12, (Il2CppFullySharedGenericAny*)L_13);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_14 = __this->___q7;
		NullCheck(L_14);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 70)), il2cpp_rgctx_method(method->klass->rgctx_data, 70), L_14, (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_1);
		InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)), il2cpp_rgctx_method(method->klass->rgctx_data, 72), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 59)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 61)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 63)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 65)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 67)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 69)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 71)) ? L_15: *(void**)L_15), (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m87A961F0A04161FEA4B0D206808850F3E3180D4F_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 73));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 73)) ? ___0_value : &___0_value), SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 73)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m54155AF5F1914A62D35433503A162C4DCC812AC8_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 78));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m51B74156FF728749AFE8EF895B158276A21F7AFC_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 78));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__10_0_m14DBB6F5F5F35224290B02FE622EA2BE4D0CD2F1_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___q1;
			NullCheck(L_4);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 80)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = __this->___q2;
			NullCheck(L_5);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 81));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = __this->___q3;
			NullCheck(L_6);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 82)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 82));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = __this->___q4;
			NullCheck(L_7);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 83)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 83));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = __this->___q5;
			NullCheck(L_8);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 84)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 84));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = __this->___q6;
			NullCheck(L_9);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 85)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = __this->___q7;
			NullCheck(L_10);
			((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 86));
			goto IL_006a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_Multicast(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* currentDelegate = reinterpret_cast<ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenStaticInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedStaticInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedInstInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInstInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenVirtualInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInterfaceInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericVirtualInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericInterfaceInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4__ctor_mE0FC3DDFF2FD2F40E1D172F0775DD366A0C93309_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_BeginInvoke_m16AF4E38D358DDD7CC7BAA2F917241505885653D_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4_EndInvoke_m29871F52C640B8B15E6D5E67711C2CC3D0F9981D_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_Multicast(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* currentDelegate = reinterpret_cast<ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenStaticInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedStaticInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedInstInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInstInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenVirtualInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInterfaceInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericVirtualInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericInterfaceInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5__ctor_m5316746895B7D7AB34E1BB0AAB213E4A716175F9_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_BeginInvoke_m1CA25ADECF1586077BF9148591C585C8719DAC10_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5_EndInvoke_mC366484D82B8D1E89A30D102AD4B427A1D8DBDB2_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_Multicast(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* currentDelegate = reinterpret_cast<ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenStaticInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedStaticInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedInstInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInstInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenVirtualInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInterfaceInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericVirtualInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericInterfaceInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6__ctor_mD2C72EA7AA9BFD08A3E738B3320BB36073F28087_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_BeginInvoke_m71205B21A09B0166AB6D89EFBFBD23D8249B44D8_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	RuntimeClass* ___4_arg5_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___4_arg5_klass) ? Box(___4_arg5_klass, ___4_arg5) : (void*)___4_arg5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6_EndInvoke_mD10DEA08C543DB4BFECD2E4C64E821F87798338A_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_Multicast(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* currentDelegate = reinterpret_cast<ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenStaticInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedStaticInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedInstInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInstInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenVirtualInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInterfaceInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericVirtualInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericInterfaceInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7__ctor_mD4D4561941A80E2A8A618A0AD8BC60E61D6EFFC5_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_BeginInvoke_m75EF348B036BD8C10311C43B91CBD042E67A4B6D_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	RuntimeClass* ___4_arg5_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___4_arg5_klass) ? Box(___4_arg5_klass, ___4_arg5) : (void*)___4_arg5);
	RuntimeClass* ___5_arg6_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___5_arg6_klass) ? Box(___5_arg6_klass, ___5_arg6) : (void*)___5_arg6);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7_EndInvoke_mC99C005EBB31F71B11326A9165BA1581A297AC10_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_Multicast(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* currentDelegate = reinterpret_cast<ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenStaticInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedStaticInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker9< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedInstInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInstInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenVirtualInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInterfaceInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericVirtualInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericInterfaceInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8__ctor_m157500CB7798DD36E3270F988CA108634AD8F605_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_BeginInvoke_mCD6A1FD4C3DBB3B03E6F88AAF863A47F6BF53377_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	RuntimeClass* ___4_arg5_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___4_arg5_klass) ? Box(___4_arg5_klass, ___4_arg5) : (void*)___4_arg5);
	RuntimeClass* ___5_arg6_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___5_arg6_klass) ? Box(___5_arg6_klass, ___5_arg6) : (void*)___5_arg6);
	RuntimeClass* ___6_arg7_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 6));
	__d_args[6] = (il2cpp_codegen_class_is_value_type(___6_arg7_klass) ? Box(___6_arg7_klass, ___6_arg7) : (void*)___6_arg7);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8_EndInvoke_m3C975D1C9431B81AB73A24C510E957087888C46E_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m4C58ACD687E268FDC0B81157FE5917DF0DD9D407_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* L_3 = ___0_parent;
		__this->___parent = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m10038D117C5646EB169C4D79173B611AD2F070B1_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* L_0 = __this->___parent;
		NullCheck(L_0);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_1 = L_0->___sources;
		NullCheck(L_1);
		__this->___length = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = __this->___length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (uint32_t)L_2);
		__this->___values = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_3);
		int32_t L_4 = __this->___length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isStarted = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isStarted), (void*)L_5);
		int32_t L_6 = __this->___length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___isCompleted = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isCompleted), (void*)L_7);
		int32_t L_8 = __this->___length;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_9 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		V_1 = 0;
		goto IL_0078;
	}

IL_0056:
	{
		ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* L_10 = __this->___parent;
		NullCheck(L_10);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_11 = L_10->___sources;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_15 = V_0;
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = V_2;
		int32_t L_18 = V_1;
		ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* L_19 = (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75*, ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_19, __this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_17);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_17, (RuntimeObject*)L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_20);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0078:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->___length;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_24 = V_0;
		RuntimeObject* L_25;
		L_25 = StableCompositeDisposable_CreateUnsafe_m61E9E95FD914CF4A0EB267CBE46D63AB1066FD08(L_24, NULL);
		return (RuntimeObject*)L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_mDA9BBF5EE4572416485E011725227797E9BB01FF_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___isStarted;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)1);
		V_0 = (bool)0;
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->___isStarted;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_003c;
	}

IL_001f:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = ___0_index;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = __this->___isCompleted;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002f:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = __this->___length;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0011;
		}
	}

IL_003c:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->___values;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_17 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_17, (RuntimeObject*)L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
		VirtualActionInvoker1Invoker< RuntimeObject* >::Invoke(8, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, (RuntimeObject*)L_17);
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				return;
			}
		});
		try
		{
			RuntimeObject* L_19 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_19);
			goto IL_0069;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		return;
	}

IL_006a:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = __this->___isStarted;
		int32_t L_21 = __this->___length;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_20, 0, L_21, NULL);
		return;
	}

IL_007d:
	{
		V_3 = 0;
		goto IL_00b4;
	}

IL_0081:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = ___0_index;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00b0;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = __this->___isCompleted;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (uint8_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = __this->___isStarted;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (uint8_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_00b0;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				return;
			}
		});
		try
		{
			RuntimeObject* L_32 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32);
			goto IL_00af;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return;
	}

IL_00b0:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = __this->___length;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0081;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m5F915EEE220B3290819F84D156E08D2556927557_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m3B2C05BA797B49CB7917CD507C7529132487ED71_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7D8F0FAC90A20F9C49F6A4E94AB94CD672384FCF_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				((  void (*) (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m132055837EFD493D3F0B910A42FA6F87B90C6EF4_gshared (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_3 = ___0_parent;
		il2cpp_codegen_write_instance_field_data<ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m50E843D3C07EB1424996983A1471DCA8EC4BE2FC_gshared (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_0 = *(ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___left;
		LeftObserver_tB7E464B198322A284E0266355C4DACB5A3A3B66E* L_2 = (LeftObserver_tB7E464B198322A284E0266355C4DACB5A3A3B66E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (LeftObserver_tB7E464B198322A284E0266355C4DACB5A3A3B66E*, ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_1, (RuntimeObject*)L_2);
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_4 = *(ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___right;
		RightObserver_tCD0571F80F305840348F458D5771051BDE215447* L_6 = (RightObserver_tCD0571F80F305840348F458D5771051BDE215447*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (RightObserver_tCD0571F80F305840348F458D5771051BDE215447*, ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_6, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = StableCompositeDisposable_Create_m5D5EAA49FB4EC4511BB1750B44E0836762530FC3(L_3, L_8, NULL);
		return (RuntimeObject*)L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_m6CB949B9BE39FCD5516E22F007744E519A6E4838_gshared (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const uint32_t SizeOf_TLeft_t98BB634D36728CA239C70588CF3AD9C93C795629 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const uint32_t SizeOf_TRight_tBEA6B0350965062AAC6F1F327E7D848D184B2D98 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TLeft_t98BB634D36728CA239C70588CF3AD9C93C795629);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TRight_tBEA6B0350965062AAC6F1F327E7D848D184B2D98);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	const Il2CppFullySharedGenericAny L_14 = L_11;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	memset(V_0, 0, SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (!L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		bool L_3 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (L_3)
		{
			goto IL_0038;
		}
	}

IL_0020:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				return;
			}
		});
		try
		{
			RuntimeObject* L_4 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4);
			goto IL_0037;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		bool L_5 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		bool L_6 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (L_6)
		{
			goto IL_0049;
		}
	}

IL_0048:
	{
		return;
	}

IL_0049:
	{
	}
	try
	{
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_7 = *(ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_7);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_8 = L_7->___selector;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TLeft_t98BB634D36728CA239C70588CF3AD9C93C795629);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TRight_tBEA6B0350965062AAC6F1F327E7D848D184B2D98);
		NullCheck(L_8);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21)) ? L_10: *(void**)L_10), (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(V_0, L_11, SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
		goto IL_0083;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{
		{
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_007a:
				{
					NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
					return;
				}
			});
			try
			{
				RuntimeObject* L_12 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_13 = V_1;
				NullCheck(L_12);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_12, L_13);
				goto IL_0081;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0081:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	}

IL_0083:
	{
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
		NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(8, (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? L_14: *(void**)L_14));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (bool)0);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (bool)0);
		bool L_15 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if (L_15)
		{
			goto IL_00a8;
		}
	}
	{
		bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if (!L_16)
		{
			goto IL_00c0;
		}
	}

IL_00a8:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				return;
			}
		});
		try
		{
			RuntimeObject* L_17 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_17);
			goto IL_00bf;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		return;
	}

IL_00c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m5542751E610E1EBBF99E568A92C9451A916310FF_gshared (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___0_value : &___0_value), SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m9C6FCDBEE4DC73812564222FA5BCEE5B365000B3_gshared (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mDBAA411E63A10928631E403666D52355C39586D0_gshared (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m4FC10AE5D383A509D99B84873384FAD79F8C802F_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, int32_t ___0_length, ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_4 = ___1_parent;
		__this->___parent = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m969CC2E5A41E7B1EA4F6B6A8AF35158CD91F89BB_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___c1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1), (void*)L_1);
		RuntimeObject* L_2 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___c2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2), (void*)L_3);
		RuntimeObject* L_4 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___c3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3), (void*)L_5);
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_6 = __this->___parent;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___source1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = __this->___c1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_7, (RuntimeObject*)L_8);
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_10 = __this->___parent;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___source2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = __this->___c2;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_14 = __this->___parent;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___source3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_16 = __this->___c3;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		RuntimeObject* L_18 = V_0;
		RuntimeObject* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724(L_9, L_18, L_19, NULL);
		return (RuntimeObject*)L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_mF9161DD9D83B75CBB635337E660D12BDAC1EF79C_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const uint32_t SizeOf_T1_tB80E0E41DA9B6D2EFEA0EB7C6BDF5862659FB7A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tB80E0E41DA9B6D2EFEA0EB7C6BDF5862659FB7A1);
	const uint32_t SizeOf_T2_tAFA0F8BC68C2A0DFFD0DC32FC40119315546D51A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tAFA0F8BC68C2A0DFFD0DC32FC40119315546D51A);
	const uint32_t SizeOf_T3_tF1EEC2C076EFCCDF192B1BEBC72A4E9FA431847D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tF1EEC2C076EFCCDF192B1BEBC72A4E9FA431847D);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
	{
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* L_1 = L_0->___resultSelector;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = __this->___c1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = __this->___c2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = __this->___c3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_6, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_1);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27)) ? L_7: *(void**)L_7), (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m790A3F7F781B29CFC77441E8CA731133EBF5AEAD_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29)) ? ___0_value : &___0_value), SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mF3FE52FE533135D4F66D9BC42A7AA1CFAB981C8E_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m0712E528DEC8F9BC197EA261261DC2926CC29808_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mC4C2562100A9463B45084C374068DA2541932C9B_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, int32_t ___0_length, ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_4 = ___1_parent;
		__this->___parent = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m6FBAE92EB0DF19572611670A3EE7149379D6FC8C_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___c1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1), (void*)L_1);
		RuntimeObject* L_2 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___c2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2), (void*)L_3);
		RuntimeObject* L_4 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___c3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3), (void*)L_5);
		RuntimeObject* L_6 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___c4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4), (void*)L_7);
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_8 = __this->___parent;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___source1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = __this->___c1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_9, (RuntimeObject*)L_10);
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_12 = __this->___parent;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___source2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_14 = __this->___c2;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_16 = __this->___parent;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___source3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_18 = __this->___c3;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_20 = __this->___parent;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___source4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_22 = __this->___c4;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		RuntimeObject* L_24 = V_0;
		RuntimeObject* L_25 = V_1;
		RuntimeObject* L_26 = V_2;
		RuntimeObject* L_27;
		L_27 = StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94(L_11, L_24, L_25, L_26, NULL);
		return (RuntimeObject*)L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m7C3C0E3F33062E24227B0D127D94B0AF8B771B30_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36));
	const uint32_t SizeOf_T1_tD0BC57540214E1BA98A0411B3291398166739270 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 28));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tD0BC57540214E1BA98A0411B3291398166739270);
	const uint32_t SizeOf_T2_t06695090DD8EA4D34356BCA43EB090609AA35815 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t06695090DD8EA4D34356BCA43EB090609AA35815);
	const uint32_t SizeOf_T3_t3AFDB6E4BCC7AD03BFCBCE1D57516FB4FEE92184 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t3AFDB6E4BCC7AD03BFCBCE1D57516FB4FEE92184);
	const uint32_t SizeOf_T4_t9CBA4E8E8A94B6E36D16D20F84D4804CBB1AE97B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 34));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t9CBA4E8E8A94B6E36D16D20F84D4804CBB1AE97B);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
	{
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* L_1 = L_0->___resultSelector;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = __this->___c1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = __this->___c2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = __this->___c3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = __this->___c4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_1);
		InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 28)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 34)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m9287A717744CFE49EED08A1A5C44ADE222592F1C_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36)) ? ___0_value : &___0_value), SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mF22D69F3CB91287380585E24B541DD5D1C71A2B5_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mFF798A15A426A2B06D662B656C17EFEF2A3482AC_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m7E70071FE496F45237EA0CA45FD35087D433BFFA_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, int32_t ___0_length, ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_4 = ___1_parent;
		__this->___parent = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m2F92D595A3EFB6F4F22B0028EF5131B2F28A7CCA_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___c1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1), (void*)L_1);
		RuntimeObject* L_2 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___c2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2), (void*)L_3);
		RuntimeObject* L_4 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___c3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3), (void*)L_5);
		RuntimeObject* L_6 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___c4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4), (void*)L_7);
		RuntimeObject* L_8 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_9 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		__this->___c5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5), (void*)L_9);
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_10 = __this->___parent;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___source1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = __this->___c1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_14 = __this->___parent;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___source2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_16 = __this->___c2;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_18 = __this->___parent;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___source3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_20 = __this->___c3;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_19, (RuntimeObject*)L_20);
		V_2 = L_21;
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_22 = __this->___parent;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->___source4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_24 = __this->___c4;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_23, (RuntimeObject*)L_24);
		V_3 = L_25;
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_26 = __this->___parent;
		NullCheck(L_26);
		RuntimeObject* L_27 = L_26->___source5;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_28 = __this->___c5;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_27, (RuntimeObject*)L_28);
		V_4 = L_29;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_30 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_31 = L_30;
		RuntimeObject* L_32 = V_0;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = L_31;
		RuntimeObject* L_34 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_35 = L_33;
		RuntimeObject* L_36 = V_2;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_35;
		RuntimeObject* L_38 = V_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		RuntimeObject* L_41;
		L_41 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_39, NULL);
		return (RuntimeObject*)L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m45A2AE83056F5FC72638347DBC9D7042C17A0A17_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43));
	const uint32_t SizeOf_T1_t1B0B5C9EB86DFDF9109EA3263F4D3147AE2903B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 33));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1B0B5C9EB86DFDF9109EA3263F4D3147AE2903B4);
	const uint32_t SizeOf_T2_tBA2779A4AB2AAAE2BFF7D87DBA61F4BE08440718 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tBA2779A4AB2AAAE2BFF7D87DBA61F4BE08440718);
	const uint32_t SizeOf_T3_t84BA771846D080B83DC336C2FD486F815BBCD54E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t84BA771846D080B83DC336C2FD486F815BBCD54E);
	const uint32_t SizeOf_T4_t93D60DA93E52215F9CD3763CCAF24640588BFAEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t93D60DA93E52215F9CD3763CCAF24640588BFAEA);
	const uint32_t SizeOf_T5_tE30F6358E6F6960C5D005F26E5226BE1A88FD104 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_tE30F6358E6F6960C5D005F26E5226BE1A88FD104);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
	{
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* L_1 = L_0->___resultSelector;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = __this->___c1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = __this->___c2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = __this->___c3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = __this->___c4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_8, (Il2CppFullySharedGenericAny*)L_9);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = __this->___c5;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)), il2cpp_rgctx_method(method->klass->rgctx_data, 40), L_10, (Il2CppFullySharedGenericAny*)L_11);
		NullCheck(L_1);
		InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 33)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m46E248CB0343144DABA33DD882F8FFDC29A85A47_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43)) ? ___0_value : &___0_value), SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m4DDF749F2A1809EA24E36B4EE29265DF38F0920F_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mD56F7C08C730953364A82D557EC6A24908E54BDB_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mED26DF047B41E2FF856B9F65B512B457049D20BC_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, int32_t ___0_length, ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_4 = ___1_parent;
		__this->___parent = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m8FC1133BFD117C7125C4897D0E3AE4113A9DF549_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___c1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1), (void*)L_1);
		RuntimeObject* L_2 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___c2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2), (void*)L_3);
		RuntimeObject* L_4 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___c3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3), (void*)L_5);
		RuntimeObject* L_6 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___c4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4), (void*)L_7);
		RuntimeObject* L_8 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_9 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		__this->___c5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5), (void*)L_9);
		RuntimeObject* L_10 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_11 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->___c6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6), (void*)L_11);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_12 = __this->___parent;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___source1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_14 = __this->___c1;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_16 = __this->___parent;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___source2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_18 = __this->___c2;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_20 = __this->___parent;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___source3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_22 = __this->___c3;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_24 = __this->___parent;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___source4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_26 = __this->___c4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_25, (RuntimeObject*)L_26);
		V_3 = L_27;
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_28 = __this->___parent;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___source5;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_30 = __this->___c5;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_29, (RuntimeObject*)L_30);
		V_4 = L_31;
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_32 = __this->___parent;
		NullCheck(L_32);
		RuntimeObject* L_33 = L_32->___source6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_34 = __this->___c6;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_33, (RuntimeObject*)L_34);
		V_5 = L_35;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_36;
		RuntimeObject* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_1;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = L_39;
		RuntimeObject* L_42 = V_2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_41;
		RuntimeObject* L_44 = V_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_5;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_48);
		RuntimeObject* L_49;
		L_49 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_47, NULL);
		return (RuntimeObject*)L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m45E2BDF0FCBC67CE6A8B2DB2FAED4E97B73CAB2B_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50));
	const uint32_t SizeOf_T1_tE616530F091739B9082842CA795A20B16FBED5B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE616530F091739B9082842CA795A20B16FBED5B2);
	const uint32_t SizeOf_T2_tF769938C858855332D2D19B8CDD3BF2724F9D369 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tF769938C858855332D2D19B8CDD3BF2724F9D369);
	const uint32_t SizeOf_T3_t590F97488A69E302E555DDBFF98D5612C6D2E422 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t590F97488A69E302E555DDBFF98D5612C6D2E422);
	const uint32_t SizeOf_T4_tE90C6EC3048FE5C7434CC6F4A0B845F27A071FF7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 44));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_tE90C6EC3048FE5C7434CC6F4A0B845F27A071FF7);
	const uint32_t SizeOf_T5_t5AFF452DF0F31FC423FEC376E91341D167FA10F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 46));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t5AFF452DF0F31FC423FEC376E91341D167FA10F7);
	const uint32_t SizeOf_T6_t70C23C2088EA6108A9FE6F26FBB704C47A241012 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t70C23C2088EA6108A9FE6F26FBB704C47A241012);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
	{
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* L_1 = L_0->___resultSelector;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = __this->___c1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = __this->___c2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = __this->___c3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = __this->___c4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_8, (Il2CppFullySharedGenericAny*)L_9);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = __this->___c5;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), L_10, (Il2CppFullySharedGenericAny*)L_11);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = __this->___c6;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_1);
		InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)), il2cpp_rgctx_method(method->klass->rgctx_data, 49), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 44)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 46)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m751819E543BB36F5CBD4FF5C088367DA75490AB0_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50)) ? ___0_value : &___0_value), SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mE29A052D446C3CE38437A55A6EF4BE2BC7E364AE_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mA297A51DBCD12E1AB5B0EA374A1672023756BFE0_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mC9EC54B2F3D9BA69798BF31FBF0D230F45FD96EC_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, int32_t ___0_length, ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_4 = ___1_parent;
		__this->___parent = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m7A50DAD9AFFD8EA98B8A84CDD1A633EED07773B6_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___c1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1), (void*)L_1);
		RuntimeObject* L_2 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___c2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2), (void*)L_3);
		RuntimeObject* L_4 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___c3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3), (void*)L_5);
		RuntimeObject* L_6 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___c4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4), (void*)L_7);
		RuntimeObject* L_8 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_9 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		__this->___c5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5), (void*)L_9);
		RuntimeObject* L_10 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_11 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->___c6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6), (void*)L_11);
		RuntimeObject* L_12 = __this->___gate;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_13 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		((  void (*) (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_13, L_12, (RuntimeObject*)__this, 6, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->___c7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c7), (void*)L_13);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_14 = __this->___parent;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___source1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_16 = __this->___c1;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_15, (RuntimeObject*)L_16);
		V_0 = L_17;
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_18 = __this->___parent;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___source2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_20 = __this->___c2;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_19, (RuntimeObject*)L_20);
		V_1 = L_21;
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_22 = __this->___parent;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->___source3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_24 = __this->___c3;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_23, (RuntimeObject*)L_24);
		V_2 = L_25;
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_26 = __this->___parent;
		NullCheck(L_26);
		RuntimeObject* L_27 = L_26->___source4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_28 = __this->___c4;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_27, (RuntimeObject*)L_28);
		V_3 = L_29;
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_30 = __this->___parent;
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->___source5;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_32 = __this->___c5;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_31, (RuntimeObject*)L_32);
		V_4 = L_33;
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_34 = __this->___parent;
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->___source6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_36 = __this->___c6;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_35, (RuntimeObject*)L_36);
		V_5 = L_37;
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_38 = __this->___parent;
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->___source7;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_40 = __this->___c7;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 38), L_39, (RuntimeObject*)L_40);
		V_6 = L_41;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_42;
		RuntimeObject* L_44 = V_0;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = L_47;
		RuntimeObject* L_50 = V_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_51 = L_49;
		RuntimeObject* L_52 = V_4;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_52);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_53 = L_51;
		RuntimeObject* L_54 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_55 = L_53;
		RuntimeObject* L_56 = V_6;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_56);
		RuntimeObject* L_57;
		L_57 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_55, NULL);
		return (RuntimeObject*)L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m19E9FA8AD4DB87800B1E6DFD51FC968E984CD42C_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 57));
	const uint32_t SizeOf_T1_t5BCD11EAF9F07F4C2E2C633A319DB369E8B1DF32 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t5BCD11EAF9F07F4C2E2C633A319DB369E8B1DF32);
	const uint32_t SizeOf_T2_t7ED8B3870FE5E20136ABE1B7C9A3E5C22384A7A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 45));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t7ED8B3870FE5E20136ABE1B7C9A3E5C22384A7A9);
	const uint32_t SizeOf_T3_tFD90455AB0DD8AF2167A1CBFD62514FEF02991B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 47));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tFD90455AB0DD8AF2167A1CBFD62514FEF02991B5);
	const uint32_t SizeOf_T4_t96D68966B3A1383483D137865C1231910913D197 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t96D68966B3A1383483D137865C1231910913D197);
	const uint32_t SizeOf_T5_t449B1CA4D9DCF8B3E93DCF684D7D3C907FA39F25 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 51));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t449B1CA4D9DCF8B3E93DCF684D7D3C907FA39F25);
	const uint32_t SizeOf_T6_tE4D65522AF4C74F5E5CBF40D51B4E6A9CB61271A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 53));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tE4D65522AF4C74F5E5CBF40D51B4E6A9CB61271A);
	const uint32_t SizeOf_T7_t4897B3293F07028878D136A1A7BE422D0CD9C695 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 55));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t4897B3293F07028878D136A1A7BE422D0CD9C695);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
	{
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_0 = __this->___parent;
		NullCheck(L_0);
		ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* L_1 = L_0->___resultSelector;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = __this->___c1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = __this->___c2;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = __this->___c3;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = __this->___c4;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), L_8, (Il2CppFullySharedGenericAny*)L_9);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = __this->___c5;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), L_10, (Il2CppFullySharedGenericAny*)L_11);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = __this->___c6;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), L_12, (Il2CppFullySharedGenericAny*)L_13);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_14 = __this->___c7;
		NullCheck(L_14);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), L_14, (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_1);
		InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)), il2cpp_rgctx_method(method->klass->rgctx_data, 56), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 45)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 47)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 51)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 53)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 55)) ? L_15: *(void**)L_15), (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m878B70C00E0D089E93BDAA8A1575D6815E984C13_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 57));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 57)) ? ___0_value : &___0_value), SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 57)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mE07D2C5A0B6D2E14695DF1B8545284E97962E50F_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m1916EA2ECA1D6B56574E24C133BD46A9231E65AA_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				((  void (*) (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				return;
			}
		});
		try
		{
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_Multicast(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* currentDelegate = reinterpret_cast<ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenStaticInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedStaticInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedInstInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInstInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenVirtualInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInterfaceInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericVirtualInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericInterfaceInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4__ctor_m4741F2AF524CFF0F4D12A33D06D71D9A5E99C67D_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_BeginInvoke_m4645C98B7F87CB6EA50C5091DFDBC2FCBA6E4DBC_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4_EndInvoke_m0E1DF8C5F56046D8CF54CBE9A58EABDB2A13021B_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_Multicast(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* currentDelegate = reinterpret_cast<ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenStaticInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedStaticInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedInstInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInstInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenVirtualInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInterfaceInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericVirtualInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericInterfaceInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5__ctor_mC6BC33C314FBB3D24524796BA7A671F419802297_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_BeginInvoke_m04878F441E952F963FEA3CB201482906C69A22F0_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5_EndInvoke_mE9B71C166E5FD0D4C5EA6048C80BB1E11C4AA25D_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_Multicast(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* currentDelegate = reinterpret_cast<ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenStaticInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedStaticInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedInstInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInstInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenVirtualInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInterfaceInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericVirtualInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericInterfaceInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6__ctor_m91E175D3A31577392C0976E6721861C42A5D206B_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_BeginInvoke_m4BCF84FCC19B37ABB41D80C1387B552710669038_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	RuntimeClass* ___4_arg5_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___4_arg5_klass) ? Box(___4_arg5_klass, ___4_arg5) : (void*)___4_arg5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6_EndInvoke_mEB6C2B876473DFA31D279A1EB41D639A6E14A503_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_Multicast(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* currentDelegate = reinterpret_cast<ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenStaticInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedStaticInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedInstInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInstInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenVirtualInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInterfaceInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericVirtualInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericInterfaceInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7__ctor_m3EA022BE924327746D1F1C2CC0F380DC5E2E1934_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_BeginInvoke_m09C29D72B1042B9A97F4818007BA07D3D3F1C8B5_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	RuntimeClass* ___4_arg5_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___4_arg5_klass) ? Box(___4_arg5_klass, ___4_arg5) : (void*)___4_arg5);
	RuntimeClass* ___5_arg6_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___5_arg6_klass) ? Box(___5_arg6_klass, ___5_arg6) : (void*)___5_arg6);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7_EndInvoke_m58DDA221CF42FAAFC4E087F47926721D02F0B47A_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_Multicast(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* currentDelegate = reinterpret_cast<ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenStaticInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedStaticInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker9< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedInstInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInstInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenVirtualInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInterfaceInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericVirtualInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericInterfaceInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8__ctor_m4AF3D60C1ED4C09161D1AEEEE124477C8BE527E3_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_BeginInvoke_m7A03A1A7B306DAF43A98734FD05AA7FD3CF48602_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	RuntimeClass* ___0_arg1_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_arg1_klass) ? Box(___0_arg1_klass, ___0_arg1) : (void*)___0_arg1);
	RuntimeClass* ___1_arg2_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_arg2_klass) ? Box(___1_arg2_klass, ___1_arg2) : (void*)___1_arg2);
	RuntimeClass* ___2_arg3_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_arg3_klass) ? Box(___2_arg3_klass, ___2_arg3) : (void*)___2_arg3);
	RuntimeClass* ___3_arg4_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___3_arg4_klass) ? Box(___3_arg4_klass, ___3_arg4) : (void*)___3_arg4);
	RuntimeClass* ___4_arg5_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___4_arg5_klass) ? Box(___4_arg5_klass, ___4_arg5) : (void*)___4_arg5);
	RuntimeClass* ___5_arg6_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___5_arg6_klass) ? Box(___5_arg6_klass, ___5_arg6) : (void*)___5_arg6);
	RuntimeClass* ___6_arg7_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 6));
	__d_args[6] = (il2cpp_codegen_class_is_value_type(___6_arg7_klass) ? Box(___6_arg7_klass, ___6_arg7) : (void*)___6_arg7);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8_EndInvoke_mFCBEB6C12B334B46FE0605C2F98646B03E4E1CEC_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_1__ctor_mAE5DAEB7CF55FF2EDF366D8DFF857F173DDE3850_gshared (ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* __this, IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___0_sources, const RuntimeMethod* method) 
{
	{
		((  void (*) (OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_0 = ___0_sources;
		__this->___sources = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_1_SubscribeCore_m9C9C3A4DAEC8FA5613491CCFBA63112A22E1037E_gshared (ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_2 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*, ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_3__ctor_m233767A940AB14809669BCE4B5A69EFE6FB7156D_gshared (ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_selector, const RuntimeMethod* method) 
{
	ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* G_B2_0 = NULL;
	ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_4 = ___0_left;
		__this->___left = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left), (void*)L_4);
		RuntimeObject* L_5 = ___1_right;
		__this->___right = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right), (void*)L_5);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_6 = ___2_selector;
		__this->___selector = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_3_SubscribeCore_m3AF7A0B4FC70420595146D1487FCABB41E82C7EA_gshared (ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* L_2 = (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527*, ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_4__ctor_mE2E8ECA1B847463161F60B608B89D42A1C5EB97F_gshared (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B3_0 = NULL;
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B1_0 = NULL;
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B4_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_6);
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_7);
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_8);
		ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* L_9 = ___3_resultSelector;
		__this->___resultSelector = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_4_SubscribeCore_mD8C393CF4FA50C7505800439B50C6C70BCCBDE9A_gshared (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* L_2 = (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957*, int32_t, ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, 3, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m12B26273DF768B5CCD6FECAB51C3B4FCDF798046_gshared (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B4_0 = NULL;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B1_0 = NULL;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B2_0 = NULL;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B5_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_8);
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_9);
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_10);
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_11);
		ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* L_12 = ___4_resultSelector;
		__this->___resultSelector = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_mB49542BE31A5FC28A2A5CDB35B969FDEFF69A052_gshared (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* L_2 = (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		((  void (*) (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D*, int32_t, ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, 4, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_m1E723349D87F93A3563F3DFE86D6DD7B13F0E15F_gshared (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B5_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B1_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B2_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B3_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B6_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
		G_B4_0 = G_B3_0;
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_10);
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_11);
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_12);
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_13);
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_14);
		ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* L_15 = ___5_resultSelector;
		__this->___resultSelector = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_m6B4149E541184AFA6392199FE6C6AE9C8E51E673_gshared (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* L_2 = (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		((  void (*) (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2*, int32_t, ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_2, 5, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m92291151BFC8591D0E5F83E4A286E16455795ABF_gshared (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B6_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B1_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B2_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B3_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B4_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B7_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
		G_B4_0 = G_B3_0;
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
		G_B5_0 = G_B4_0;
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_12);
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_13);
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_14);
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_15);
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_16);
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_17);
		ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* L_18 = ___6_resultSelector;
		__this->___resultSelector = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_18);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_m499069AA93E024D7A2176DB87935F108229709AA_gshared (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* L_2 = (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1*, int32_t, ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, 6, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_m62029BD4114AFD058878C6D4CCED2DA4B7669BC3_gshared (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B7_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B1_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B2_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B3_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B4_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B5_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B8_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
		G_B4_0 = G_B3_0;
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
		G_B5_0 = G_B4_0;
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
		G_B6_0 = G_B5_0;
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_14);
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_15);
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_16);
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_17);
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_18);
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_19);
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_20);
		ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* L_21 = ___7_resultSelector;
		__this->___resultSelector = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_21);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_m08B27915A88A0679D2895556A95EEE8A05862CCB_gshared (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* L_2 = (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D*, int32_t, ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_2, 7, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m17B9F0EE31EBF89953299E653D763146CC04C682_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = ___0_parent;
		__this->___parent = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->___index = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_mA39B5F09437A824162D7D2CAB31FA58A5829C8AF_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0049:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_5 = __this->___parent;
			NullCheck(L_5);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = L_5->___values;
			int32_t L_7 = __this->___index;
			il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009);
			NullCheck(L_6);
			il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009);
			Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
			ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_9 = __this->___parent;
			int32_t L_10 = __this->___index;
			NullCheck(L_9);
			((  void (*) (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			goto IL_004a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mDA4363CA66BAABD3EE4F6DB20176701C774BA4DB_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_5 = __this->___parent;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5, L_6);
			goto IL_002e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_mBA8807D2B0BDCC77E97F8C65456CE9BFD3BCD67A_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_5 = __this->___parent;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___isCompleted;
				int32_t L_7 = __this->___index;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				V_2 = (bool)1;
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_8 = __this->___parent;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = L_8->___isCompleted;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				int32_t L_14 = V_3;
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_15 = __this->___parent;
				NullCheck(L_15);
				int32_t L_16 = L_15->___length;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_18 = __this->___parent;
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
				VirtualActionInvoker0::Invoke(10, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
			}

IL_0062_1:
			{
				goto IL_006e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_get_Value_m14C2114DA94F6F627365EF253FBD6E50B65536CE_gshared (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_m1D9740D97751471C1654EBF5EF1484AA5DAD9CEE_gshared (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_gate;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		RuntimeObject* L_1 = ___1_parent;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
		int32_t L_2 = ___2_index;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mC5E5D964E8E2D4F73363969C2059CD7E2F0AE553_gshared (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_4, SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_5);
			InterfaceActionInvoker1< int32_t >::Invoke(0, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_5, L_6);
			goto IL_0035;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_m3BEF0EF2AFE5C005497D9D051F0163DF754E04AF_gshared (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			goto IL_0029;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_mA0F60C8A096F27FED34337D93345CC78C366782A_gshared (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			goto IL_002e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_m787E79C6081DE37EDB0A007920FBA0CF57AF8904_gshared (ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* __this, IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___0_sources, const RuntimeMethod* method) 
{
	{
		((  void (*) (OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_0 = ___0_sources;
		__this->___sources = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_mD1C3FBE26CC66BDFD6FCEDC46CA1949176055F3D_gshared (ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_2 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*, ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_mEF14031AA312A5E3B92FBD480759347FBEC2E573_gshared (ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_selector, const RuntimeMethod* method) 
{
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* G_B2_0 = NULL;
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_4 = ___0_left;
		__this->___left = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left), (void*)L_4);
		RuntimeObject* L_5 = ___1_right;
		__this->___right = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right), (void*)L_5);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_6 = ___2_selector;
		__this->___selector = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_m59F94EFEB3A360A5240213B094DB3FCBEA697593_gshared (ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* L_2 = (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746*, ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_m6CD049DE72F94B8A0FBE1D94BE5C8D6B78A08A91_gshared (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B3_0 = NULL;
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B1_0 = NULL;
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B4_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_6);
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_7);
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_8);
		ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* L_9 = ___3_resultSelector;
		__this->___resultSelector = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_m87872B916166C922569D7FDE93F87E1A7433D51C_gshared (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* L_2 = (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC*, ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_m56F1A44FC574943874341B5D10F48A632C348390_gshared (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B4_0 = NULL;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B1_0 = NULL;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B2_0 = NULL;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B5_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_8);
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_9);
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_10);
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_11);
		ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* L_12 = ___4_resultSelector;
		__this->___resultSelector = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_m8E95A4599694D170D7F6CC586FD03423A2179A0B_gshared (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* L_2 = (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		((  void (*) (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228*, ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_m31E8FDB59552274083251C6A60132565A62602D5_gshared (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B5_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B1_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B2_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B3_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B6_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
		G_B4_0 = G_B3_0;
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_10);
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_11);
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_12);
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_13);
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_14);
		ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* L_15 = ___5_resultSelector;
		__this->___resultSelector = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_mDF52F4BD2FED30C186853C2D03A2813B919D40E0_gshared (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* L_2 = (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		((  void (*) (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700*, ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_m6B492C7E060223939A84FAC052FB3DD9661A1438_gshared (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B6_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B1_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B2_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B3_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B4_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B7_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
		G_B4_0 = G_B3_0;
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
		G_B5_0 = G_B4_0;
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_12);
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_13);
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_14);
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_15);
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_16);
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_17);
		ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* L_18 = ___6_resultSelector;
		__this->___resultSelector = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_18);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_mD01D5FA24927109209668F04BA967F5517C96266_gshared (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* L_2 = (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49*, ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_mFC43AE26BE1BBA621A7D87A9058C24471179B610_gshared (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B7_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B1_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B2_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B3_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B4_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B5_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B8_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
		G_B2_0 = G_B1_0;
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
		G_B3_0 = G_B2_0;
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
		G_B4_0 = G_B3_0;
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
		G_B5_0 = G_B4_0;
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
		G_B6_0 = G_B5_0;
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_14);
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_15);
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_16);
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_17);
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_18);
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_19);
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_20);
		ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* L_21 = ___7_resultSelector;
		__this->___resultSelector = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_21);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_m6CB6C6AB477704791161D82AB640E24E2BA1575A_gshared (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* L_2 = (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3*, ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m5D420C4E6AB867D6ADE0EE24DFB486F989B467A7_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = ___0_parent;
		__this->___parent = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->___index = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_m7D66CB9EDC6AE10774FC90765A515F941C20A9F5_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF326E1E271571FBFF1E0F7025445396DD4EFA83B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tF326E1E271571FBFF1E0F7025445396DD4EFA83B);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004a:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_5 = __this->___parent;
			NullCheck(L_5);
			Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_6 = L_5->___queues;
			int32_t L_7 = __this->___index;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_T_tF326E1E271571FBFF1E0F7025445396DD4EFA83B);
			NullCheck(L_9);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_10: *(void**)L_10));
			Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_11 = __this->___parent;
			int32_t L_12 = __this->___index;
			NullCheck(L_11);
			((  void (*) (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_004b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mCCA8BC3CFCBF4FD3B91A388E86FAAC7872C68534_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_5 = __this->___parent;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5, L_6);
			goto IL_002e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_m967BC83F3990C92B3DA7E8BE9EDEE1CEE4BF1447_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_5 = __this->___parent;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___isDone;
				int32_t L_7 = __this->___index;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				V_2 = (bool)1;
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_8 = __this->___parent;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = L_8->___isDone;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				int32_t L_14 = V_3;
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_15 = __this->___parent;
				NullCheck(L_15);
				int32_t L_16 = L_15->___length;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_18 = __this->___parent;
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
				VirtualActionInvoker0::Invoke(10, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
			}

IL_0062_1:
			{
				goto IL_006e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_m65BE5D51C586C0B1B11C7A23A733BD3C18C034BF_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___3_queue, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate), (void*)L_0);
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_1);
		int32_t L_2 = ___2_index;
		__this->___index = L_2;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = ___3_queue;
		__this->___queue = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_m6B05FEAA1ED846F5EDD1610138EA0C7CDEFF6FBB_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8EAD8D4396230D6607216E24CC0822944FD259E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t8EAD8D4396230D6607216E24CC0822944FD259E9);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = __this->___queue;
			il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_t8EAD8D4396230D6607216E24CC0822944FD259E9);
			NullCheck(L_4);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_5: *(void**)L_5));
			RuntimeObject* L_6 = __this->___parent;
			int32_t L_7 = __this->___index;
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_6, L_7);
			goto IL_003a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_mFD060A00828E153CBDDBEED9B3E800560EA75869_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			RuntimeObject* L_4 = __this->___parent;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			goto IL_0029;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m0DC086CEA87A0300819469419C53E9CFA5413B63_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___gate;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			RuntimeObject* L_4 = __this->___parent;
			int32_t L_5 = __this->___index;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			goto IL_002e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mC686208D9B179DC95355A0E0D49FAB7B101CEF14_gshared_inline (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* __this, bool ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, bool, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mA2E67EB4D9947E4D56A2E7E2022D4A6D0BA37E90_gshared_inline (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
