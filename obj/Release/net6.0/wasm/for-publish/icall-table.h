#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
180,
185,
186,
187,
188,
189,
190,
191,
193,
194,
239,
240,
242,
265,
266,
267,
277,
278,
279,
280,
281,
348,
349,
350,
353,
383,
384,
386,
388,
390,
392,
397,
405,
406,
407,
408,
409,
410,
411,
412,
413,
414,
510,
511,
518,
521,
523,
528,
529,
531,
532,
536,
537,
538,
539,
541,
542,
543,
546,
548,
549,
550,
611,
612,
614,
622,
623,
624,
625,
626,
630,
631,
632,
633,
634,
635,
637,
638,
639,
641,
642,
643,
645,
831,
974,
975,
4781,
4782,
4784,
4785,
4786,
4787,
4788,
4790,
4792,
4794,
4795,
4802,
4804,
4808,
4809,
4811,
4813,
4815,
4826,
4835,
4836,
4838,
4839,
4840,
4841,
4842,
4844,
4846,
5682,
5686,
5688,
5689,
5690,
5691,
5720,
5721,
5722,
5737,
5738,
5739,
5740,
5770,
5813,
5823,
5824,
5825,
6078,
6080,
6081,
6105,
6106,
6107,
6121,
6127,
6134,
6144,
6147,
6215,
6221,
6222,
6223,
6224,
6230,
6243,
6263,
6264,
6272,
6274,
6281,
6282,
6285,
6287,
6292,
6298,
6299,
6306,
6308,
6318,
6321,
6322,
6323,
6333,
6344,
6350,
6351,
6352,
6354,
6355,
6365,
6383,
6396,
6415,
6439,
6440,
6776,
6905,
7082,
7083,
7086,
7089,
7137,
7288,
7289,
8243,
8262,
8269,
8270,
8272,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 180,
ves_icall_System_Array_InternalCreate,
// token 185,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 186,
ves_icall_System_Array_CanChangePrimitive,
// token 187,
ves_icall_System_Array_FastCopy_raw,
// token 188,
ves_icall_System_Array_GetLength_raw,
// token 189,
ves_icall_System_Array_GetLowerBound_raw,
// token 190,
ves_icall_System_Array_GetGenericValue_icall,
// token 191,
ves_icall_System_Array_GetValueImpl_raw,
// token 193,
ves_icall_System_Array_SetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 239,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 240,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 242,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 265,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 266,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 267,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 277,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 278,
ves_icall_System_Enum_ToObject_raw,
// token 279,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 280,
ves_icall_System_Enum_get_underlying_type_raw,
// token 281,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 348,
ves_icall_System_Environment_get_ProcessorCount,
// token 349,
ves_icall_System_Environment_get_TickCount,
// token 350,
ves_icall_System_Environment_get_TickCount64,
// token 353,
ves_icall_System_Environment_FailFast_raw,
// token 383,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 384,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 386,
ves_icall_System_GC_SuppressFinalize_raw,
// token 388,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 390,
ves_icall_System_GC_GetGCMemoryInfo,
// token 392,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 397,
ves_icall_System_Object_MemberwiseClone_raw,
// token 405,
ves_icall_System_Math_Abs_double,
// token 406,
ves_icall_System_Math_Ceiling,
// token 407,
ves_icall_System_Math_Cos,
// token 408,
ves_icall_System_Math_Floor,
// token 409,
ves_icall_System_Math_Log10,
// token 410,
ves_icall_System_Math_Pow,
// token 411,
ves_icall_System_Math_Sin,
// token 412,
ves_icall_System_Math_Sqrt,
// token 413,
ves_icall_System_Math_Tan,
// token 414,
ves_icall_System_Math_ModF,
// token 510,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 511,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 518,
ves_icall_RuntimeType_make_array_type_raw,
// token 521,
ves_icall_RuntimeType_make_byref_type_raw,
// token 523,
ves_icall_RuntimeType_MakePointerType_raw,
// token 528,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 529,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 531,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 532,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 536,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 537,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 538,
ves_icall_System_RuntimeType_getFullName_raw,
// token 539,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 541,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 542,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 543,
ves_icall_RuntimeType_GetFields_native_raw,
// token 546,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 548,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 549,
ves_icall_RuntimeType_get_Name_raw,
// token 550,
ves_icall_RuntimeType_get_Namespace_raw,
// token 611,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 612,
ves_icall_reflection_get_token_raw,
// token 614,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 622,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 623,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 624,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 625,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 626,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 630,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 631,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 632,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 633,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 634,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 635,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 637,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 638,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 639,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 641,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 642,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 643,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 645,
ves_icall_System_String_FastAllocateString_raw,
// token 831,
ves_icall_System_Type_internal_from_handle_raw,
// token 974,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 975,
ves_icall_System_ValueType_Equals_raw,
// token 4781,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 4782,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 4784,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 4785,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 4786,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 4787,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 4788,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 4790,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 4792,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 4794,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 4795,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 4802,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 4804,
mono_monitor_exit_icall_raw,
// token 4808,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 4809,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 4811,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 4813,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 4815,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 4826,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 4835,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 4836,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 4838,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 4839,
ves_icall_System_Threading_Thread_GetState_raw,
// token 4840,
ves_icall_System_Threading_Thread_SetState_raw,
// token 4841,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 4842,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 4844,
ves_icall_System_Threading_Thread_YieldInternal,
// token 4846,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5682,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5686,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5688,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5689,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5690,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5691,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 5720,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 5721,
ves_icall_System_GCHandle_InternalFree_raw,
// token 5722,
ves_icall_System_GCHandle_InternalGet_raw,
// token 5737,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 5738,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 5739,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 5740,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 5770,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 5813,
mono_object_hash_icall_raw,
// token 5823,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 5824,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 5825,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6078,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6080,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6081,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6105,
mono_digest_get_public_token,
// token 6106,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6107,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6121,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6127,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6134,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6144,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6147,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6215,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6221,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6222,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6223,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6224,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6230,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6243,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6263,
ves_icall_reflection_get_token_raw,
// token 6264,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6272,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6274,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6281,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6282,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6285,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6287,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6292,
ves_icall_reflection_get_token_raw,
// token 6298,
ves_icall_get_method_info_raw,
// token 6299,
ves_icall_get_method_attributes,
// token 6306,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6308,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6318,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6321,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6322,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6323,
ves_icall_reflection_get_token_raw,
// token 6333,
ves_icall_InternalInvoke_raw,
// token 6344,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6350,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6351,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6352,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6354,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6355,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6365,
ves_icall_InternalInvoke_raw,
// token 6383,
ves_icall_reflection_get_token_raw,
// token 6396,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6415,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6439,
ves_icall_reflection_get_token_raw,
// token 6440,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 6776,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 6905,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7082,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7083,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7086,
ves_icall_ModuleBuilder_getToken_raw,
// token 7089,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7137,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7288,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7289,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8243,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8262,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8269,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 8270,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8272,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
